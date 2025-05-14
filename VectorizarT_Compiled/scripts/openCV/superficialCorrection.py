import cv2
import sys
import os
import numpy as np

originalPath = sys.argv[1]
originalFolder = os.path.dirname(originalPath)
newImagePath = os.path.join(originalFolder, f"s4_afterCorrection.png")

image = cv2.imread(originalPath, cv2.IMREAD_GRAYSCALE)

imageInverted = cv2.bitwise_not(image)

closeKernelSize = int(sys.argv[2])
if closeKernelSize % 2 == 0:
    closeKernelSize += 1
kernelClose = cv2.getStructuringElement(cv2.MORPH_RECT, (closeKernelSize, closeKernelSize))
morphClose = cv2.morphologyEx(imageInverted, cv2.MORPH_CLOSE, kernelClose)

openKernelSize = int(sys.argv[3])
if openKernelSize % 2 == 0:
    openKernelSize += 1
kernelOpen = cv2.getStructuringElement(cv2.MORPH_RECT, (openKernelSize, openKernelSize))
morphOpen = cv2.morphologyEx(morphClose, cv2.MORPH_OPEN, kernelOpen)

finalImage = cv2.bitwise_not(morphOpen)

cv2.imwrite(newImagePath, finalImage)