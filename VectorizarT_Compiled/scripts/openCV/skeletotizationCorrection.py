import cv2
import sys
import os
import numpy as np

originalPath = sys.argv[1]
originalFolder = os.path.dirname(originalPath)
newImagePath = os.path.join(originalFolder, f"s4_afterCorrection.png")

image = cv2.imread(originalPath, cv2.IMREAD_GRAYSCALE)

imageInverted = cv2.bitwise_not(image)

def skeletotization(binaryImage):
    img = binaryImage.copy()
    img = img // 255
    img = img.astype(np.uint8)

    kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (3, 3))
    skeleton = np.zeros(img.shape, np.uint8)
    
    while True:
        erosion = cv2.erode(img, kernel)
        open = cv2.morphologyEx(erosion, cv2.MORPH_OPEN, kernel)
        temp = cv2.subtract(erosion, open)
        skeleton = cv2.bitwise_or(skeleton, temp)
        img = erosion.copy()

        if cv2.countNonZero(img) == 0:
            break

    return skeleton * 255

skeleton = skeletotization(imageInverted)

kernelSize = int(sys.argv[2])
if kernelSize % 2 == 0:
    kernelSize += 1
kernel_dil = cv2.getStructuringElement(cv2.MORPH_RECT, (kernelSize, kernelSize))
dilated = cv2.dilate(skeleton, kernel_dil)

finalImage = cv2.bitwise_not(dilated)

cv2.imwrite(newImagePath, finalImage)