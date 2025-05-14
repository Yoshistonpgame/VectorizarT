/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/ui/personalizedWidgets/qGraphicsView/customqgraphicsview_clickablepic.h"
#include "src/ui/personalizedWidgets/qLabel/customqlabel_images.h"
#include "src/ui/personalizedWidgets/qLineEdit/customqlineedit_newfocus.h"
#include "src/ui/personalizedWidgets/qToolBox/customqtoolbox_stepbystep.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *mw_layout;
    QHBoxLayout *horizontalLayout_2;
    QFrame *mw_left_line;
    QVBoxLayout *mw_mainProcess;
    QHBoxLayout *horizontalLayout;
    QPushButton *save;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *config;
    CustomQToolBox_StepByStep *process;
    QWidget *p00_welcomePage;
    QVBoxLayout *verticalLayout_wp;
    QHBoxLayout *wp_01_horizontalLayout;
    QVBoxLayout *welcomeText_wp_verticalLayout;
    QLabel *title_wp_label;
    CustomQLabel_Images *logo_wp_label;
    QLabel *text_wp_label_3;
    QHBoxLayout *wp_07_horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *wp_nextStepButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *p01_choosingProject;
    QVBoxLayout *verticalLayout;
    QSpacerItem *s1_verticalSpacer_1;
    QHBoxLayout *s1_hL_project;
    QVBoxLayout *s1_vL_newProject;
    QLineEdit *s1_projectName_lineEdit;
    CustomQLineEdit_newFocus *s1_projectFilepath_lineEdit;
    QFrame *line;
    QVBoxLayout *s1_vL_oldProject;
    QCheckBox *s1_cB_openProject;
    QCheckBox *s1_cB_reuseProject;
    QSpacerItem *s1_verticalSpacer_2;
    QHBoxLayout *s1_hL_image;
    CustomQLineEdit_newFocus *s1_imagePath;
    QSpacerItem *s1_verticalSpacer_3;
    QHBoxLayout *s1_hL_out;
    QSpacerItem *s1_horizontalSpacer_1;
    QPushButton *s1_previousStepButton;
    QSpacerItem *s1_horizontalSpacer_2;
    QPushButton *s1_nextStepButton;
    QSpacerItem *s1_horizontalSpacer_3;
    QWidget *p02_croppingBalancing;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *s2_hL_textReset;
    QLabel *s2_l_explaneText;
    QPushButton *s2_pB_reset;
    CustomQGraphicsView_ClickablePic *s2_graphicsView;
    QHBoxLayout *s2_01_horizontalLayout;
    QPushButton *s2_me03_pushButton;
    QPushButton *s2_me02_pushButton;
    QPushButton *s2_me01_pushButton;
    QFrame *s2_lineRotate;
    QPushButton *s2_ma01_pushButton;
    QPushButton *s2_ma02_pushButton;
    QPushButton *s2_ma03_pushButton;
    QHBoxLayout *s2_02_horizontalLayout;
    QSpacerItem *s2_horizontalSpacer_1;
    QPushButton *s2_previousStepButton;
    QSpacerItem *s2_horizontalSpacer_2;
    QPushButton *s2_nextStepButton;
    QSpacerItem *s2_horizontalSpacer_3;
    QWidget *p03_binarizeImage;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *s3_hL_textReset;
    QLabel *s3_l_explaneText;
    QPushButton *s3_pB_reset;
    QHBoxLayout *s3_01_horizontalLayout;
    CustomQGraphicsView_ClickablePic *s3_graphicsView;
    QVBoxLayout *s3_01_1_verticalLayout;
    QPushButton *s3_pushButton_invertColours;
    QTabWidget *s3_tabWidget;
    QWidget *s3_tab_black;
    QVBoxLayout *s3_tab_black_layout;
    QWidget *s3_tab_white;
    QVBoxLayout *s3_tab_white_layout;
    QPushButton *s3_pushButton_process;
    QPushButton *s3_pB_binarize;
    QHBoxLayout *s3_02_horizontalLayout;
    QSpacerItem *s3_horizontalSpacer_1;
    QPushButton *s3_previousStepButton;
    QSpacerItem *s3_horizontalSpacer_2;
    QPushButton *s3_nextStepButton;
    QSpacerItem *s3_horizontalSpacer_3;
    QWidget *p04_errorCorrection;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *s4_hL_textReset;
    QLabel *s4_l_explaneText;
    QPushButton *s4_pB_reset;
    QHBoxLayout *horizontalLayout_4;
    CustomQGraphicsView_ClickablePic *s4_graphicsView;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *s4_hL_erosion;
    QLabel *s4_l_erosion;
    QSpinBox *s4_sB_erosion;
    QHBoxLayout *s4_hL_morphOpening;
    QLabel *s4_l_morphOpening;
    QSpinBox *s4_sB_morphOpening;
    QPushButton *s4_correctionButton;
    QHBoxLayout *s4_hL_skelDilation;
    QLabel *s4_l_skelDilation;
    QSpinBox *s4_sB_skelDilation;
    QPushButton *s4_skeletonizationButton;
    QHBoxLayout *s4_00_horizontalLayout;
    QSpacerItem *s4_horizontalSpacer_1;
    QPushButton *s4_previousStepButton;
    QSpacerItem *s4_horizontalSpacer_2;
    QPushButton *s4_nextStepButton;
    QSpacerItem *s4_horizontalSpacer_3;
    QWidget *p05_vectorization;
    QVBoxLayout *verticalLayout_5;
    QLabel *s5_l_explaneText;
    CustomQGraphicsView_ClickablePic *s5_graphicsView;
    QHBoxLayout *s5_00_horizontalLayout;
    QSpacerItem *s5_horizontalSpacer_1;
    QPushButton *s5_previousStepButton;
    QSpacerItem *s5_horizontalSpacer_2;
    QPushButton *s5_nextStepButton;
    QSpacerItem *s5_horizontalSpacer_3;
    QWidget *p06_customization;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *s6_hL_textReset;
    QLabel *s6_l_explaneText;
    QPushButton *s6_pB_restore;
    QPushButton *s6_pB_reset;
    QHBoxLayout *s6_hL_graphicsView;
    CustomQGraphicsView_ClickablePic *s6_graphicsView;
    QVBoxLayout *s6_vl_widgetsGroup;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *s6_horizontalSpacer_1;
    QPushButton *s6_previousStepButton;
    QSpacerItem *s6_horizontalSpacer_2;
    QPushButton *s6_nextStepButton;
    QSpacerItem *s6_horizontalSpacer_3;
    QFrame *mw_right_line;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(678, 623);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(500, 500));
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        mw_layout = new QWidget(MainWindow);
        mw_layout->setObjectName("mw_layout");
        horizontalLayout_2 = new QHBoxLayout(mw_layout);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        mw_left_line = new QFrame(mw_layout);
        mw_left_line->setObjectName("mw_left_line");
        mw_left_line->setMinimumSize(QSize(0, 0));
        mw_left_line->setFrameShadow(QFrame::Shadow::Sunken);
        mw_left_line->setLineWidth(4);
        mw_left_line->setFrameShape(QFrame::VLine);

        horizontalLayout_2->addWidget(mw_left_line);

        mw_mainProcess = new QVBoxLayout();
        mw_mainProcess->setObjectName("mw_mainProcess");
        mw_mainProcess->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        save = new QPushButton(mw_layout);
        save->setObjectName("save");

        horizontalLayout->addWidget(save);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(mw_layout);
        label->setObjectName("label");
        label->setMinimumSize(QSize(150, 50));
        label->setMaximumSize(QSize(150, 50));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/branding/VectorizarT.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setMargin(5);

        horizontalLayout->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        config = new QPushButton(mw_layout);
        config->setObjectName("config");
        config->setMinimumSize(QSize(105, 30));
        config->setMaximumSize(QSize(100, 29));

        horizontalLayout->addWidget(config);


        mw_mainProcess->addLayout(horizontalLayout);

        process = new CustomQToolBox_StepByStep(mw_layout);
        process->setObjectName("process");
        process->setMinimumSize(QSize(0, 0));
        p00_welcomePage = new QWidget();
        p00_welcomePage->setObjectName("p00_welcomePage");
        p00_welcomePage->setGeometry(QRect(0, 0, 617, 367));
        verticalLayout_wp = new QVBoxLayout(p00_welcomePage);
        verticalLayout_wp->setSpacing(9);
        verticalLayout_wp->setObjectName("verticalLayout_wp");
        verticalLayout_wp->setSizeConstraint(QLayout::SizeConstraint::SetMinAndMaxSize);
        verticalLayout_wp->setContentsMargins(2, 0, 2, 0);
        wp_01_horizontalLayout = new QHBoxLayout();
        wp_01_horizontalLayout->setSpacing(30);
        wp_01_horizontalLayout->setObjectName("wp_01_horizontalLayout");
        wp_01_horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        wp_01_horizontalLayout->setContentsMargins(5, -1, 5, -1);
        welcomeText_wp_verticalLayout = new QVBoxLayout();
        welcomeText_wp_verticalLayout->setSpacing(0);
        welcomeText_wp_verticalLayout->setObjectName("welcomeText_wp_verticalLayout");
        title_wp_label = new QLabel(p00_welcomePage);
        title_wp_label->setObjectName("title_wp_label");
        title_wp_label->setMaximumSize(QSize(500, 100));
        QFont font;
        font.setKerning(true);
        font.setStyleStrategy(QFont::NoAntialias);
        title_wp_label->setFont(font);
        title_wp_label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        title_wp_label->setScaledContents(false);
        title_wp_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        title_wp_label->setWordWrap(false);

        welcomeText_wp_verticalLayout->addWidget(title_wp_label, 0, Qt::AlignmentFlag::AlignHCenter);

        logo_wp_label = new CustomQLabel_Images(p00_welcomePage);
        logo_wp_label->setObjectName("logo_wp_label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(logo_wp_label->sizePolicy().hasHeightForWidth());
        logo_wp_label->setSizePolicy(sizePolicy1);
        logo_wp_label->setMinimumSize(QSize(0, 0));
        logo_wp_label->setMaximumSize(QSize(500, 200));
        logo_wp_label->setPixmap(QPixmap(QString::fromUtf8(":/resources/branding/FullLogo.png")));
        logo_wp_label->setScaledContents(true);
        logo_wp_label->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);
        logo_wp_label->setWordWrap(false);
        logo_wp_label->setMargin(5);
        logo_wp_label->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);

        welcomeText_wp_verticalLayout->addWidget(logo_wp_label, 0, Qt::AlignmentFlag::AlignHCenter);

        text_wp_label_3 = new QLabel(p00_welcomePage);
        text_wp_label_3->setObjectName("text_wp_label_3");
        text_wp_label_3->setMaximumSize(QSize(500, 50));
        text_wp_label_3->setFont(font);
        text_wp_label_3->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        text_wp_label_3->setScaledContents(false);
        text_wp_label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        text_wp_label_3->setWordWrap(false);

        welcomeText_wp_verticalLayout->addWidget(text_wp_label_3, 0, Qt::AlignmentFlag::AlignHCenter);


        wp_01_horizontalLayout->addLayout(welcomeText_wp_verticalLayout);


        verticalLayout_wp->addLayout(wp_01_horizontalLayout);

        wp_07_horizontalLayout = new QHBoxLayout();
        wp_07_horizontalLayout->setSpacing(3);
        wp_07_horizontalLayout->setObjectName("wp_07_horizontalLayout");
        wp_07_horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        wp_07_horizontalLayout->addItem(horizontalSpacer_4);

        wp_nextStepButton = new QPushButton(p00_welcomePage);
        wp_nextStepButton->setObjectName("wp_nextStepButton");
        wp_nextStepButton->setMinimumSize(QSize(181, 71));
        wp_nextStepButton->setMaximumSize(QSize(181, 71));

        wp_07_horizontalLayout->addWidget(wp_nextStepButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        wp_07_horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_wp->addLayout(wp_07_horizontalLayout);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/branding/Pluma.svg"), QSize(), QIcon::Normal, QIcon::Off);
        process->addItem(p00_welcomePage, icon, QString::fromUtf8("Welcome Page"));
        p01_choosingProject = new QWidget();
        p01_choosingProject->setObjectName("p01_choosingProject");
        p01_choosingProject->setEnabled(true);
        p01_choosingProject->setGeometry(QRect(0, 0, 634, 344));
        p01_choosingProject->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        verticalLayout = new QVBoxLayout(p01_choosingProject);
        verticalLayout->setObjectName("verticalLayout");
        s1_verticalSpacer_1 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(s1_verticalSpacer_1);

        s1_hL_project = new QHBoxLayout();
        s1_hL_project->setSpacing(15);
        s1_hL_project->setObjectName("s1_hL_project");
        s1_hL_project->setContentsMargins(7, -1, 7, -1);
        s1_vL_newProject = new QVBoxLayout();
        s1_vL_newProject->setObjectName("s1_vL_newProject");
        s1_projectName_lineEdit = new QLineEdit(p01_choosingProject);
        s1_projectName_lineEdit->setObjectName("s1_projectName_lineEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(s1_projectName_lineEdit->sizePolicy().hasHeightForWidth());
        s1_projectName_lineEdit->setSizePolicy(sizePolicy2);
        s1_projectName_lineEdit->setMinimumSize(QSize(200, 28));
        s1_projectName_lineEdit->setMaximumSize(QSize(500, 28));

        s1_vL_newProject->addWidget(s1_projectName_lineEdit);

        s1_projectFilepath_lineEdit = new CustomQLineEdit_newFocus(p01_choosingProject);
        s1_projectFilepath_lineEdit->setObjectName("s1_projectFilepath_lineEdit");
        sizePolicy2.setHeightForWidth(s1_projectFilepath_lineEdit->sizePolicy().hasHeightForWidth());
        s1_projectFilepath_lineEdit->setSizePolicy(sizePolicy2);
        s1_projectFilepath_lineEdit->setMinimumSize(QSize(200, 28));
        s1_projectFilepath_lineEdit->setMaximumSize(QSize(500, 28));

        s1_vL_newProject->addWidget(s1_projectFilepath_lineEdit);


        s1_hL_project->addLayout(s1_vL_newProject);

        line = new QFrame(p01_choosingProject);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        s1_hL_project->addWidget(line);

        s1_vL_oldProject = new QVBoxLayout();
        s1_vL_oldProject->setObjectName("s1_vL_oldProject");
        s1_cB_openProject = new QCheckBox(p01_choosingProject);
        s1_cB_openProject->setObjectName("s1_cB_openProject");

        s1_vL_oldProject->addWidget(s1_cB_openProject, 0, Qt::AlignmentFlag::AlignHCenter);

        s1_cB_reuseProject = new QCheckBox(p01_choosingProject);
        s1_cB_reuseProject->setObjectName("s1_cB_reuseProject");

        s1_vL_oldProject->addWidget(s1_cB_reuseProject, 0, Qt::AlignmentFlag::AlignHCenter);


        s1_hL_project->addLayout(s1_vL_oldProject);


        verticalLayout->addLayout(s1_hL_project);

        s1_verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(s1_verticalSpacer_2);

        s1_hL_image = new QHBoxLayout();
        s1_hL_image->setObjectName("s1_hL_image");
        s1_imagePath = new CustomQLineEdit_newFocus(p01_choosingProject);
        s1_imagePath->setObjectName("s1_imagePath");
        s1_imagePath->setMinimumSize(QSize(200, 28));
        s1_imagePath->setMaximumSize(QSize(500, 28));

        s1_hL_image->addWidget(s1_imagePath);


        verticalLayout->addLayout(s1_hL_image);

        s1_verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(s1_verticalSpacer_3);

        s1_hL_out = new QHBoxLayout();
        s1_hL_out->setSpacing(3);
        s1_hL_out->setObjectName("s1_hL_out");
        s1_hL_out->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        s1_horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        s1_hL_out->addItem(s1_horizontalSpacer_1);

        s1_previousStepButton = new QPushButton(p01_choosingProject);
        s1_previousStepButton->setObjectName("s1_previousStepButton");
        s1_previousStepButton->setMinimumSize(QSize(181, 71));
        s1_previousStepButton->setMaximumSize(QSize(181, 71));

        s1_hL_out->addWidget(s1_previousStepButton);

        s1_horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        s1_hL_out->addItem(s1_horizontalSpacer_2);

        s1_nextStepButton = new QPushButton(p01_choosingProject);
        s1_nextStepButton->setObjectName("s1_nextStepButton");
        s1_nextStepButton->setMinimumSize(QSize(181, 71));
        s1_nextStepButton->setMaximumSize(QSize(181, 71));
        QFont font1;
        font1.setPointSize(9);
        s1_nextStepButton->setFont(font1);

        s1_hL_out->addWidget(s1_nextStepButton);

        s1_horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        s1_hL_out->addItem(s1_horizontalSpacer_3);


        verticalLayout->addLayout(s1_hL_out);

        process->addItem(p01_choosingProject, icon, QString::fromUtf8("Choosing Project"));
        p02_croppingBalancing = new QWidget();
        p02_croppingBalancing->setObjectName("p02_croppingBalancing");
        p02_croppingBalancing->setGeometry(QRect(0, 0, 617, 381));
        verticalLayout_2 = new QVBoxLayout(p02_croppingBalancing);
        verticalLayout_2->setObjectName("verticalLayout_2");
        s2_hL_textReset = new QHBoxLayout();
        s2_hL_textReset->setObjectName("s2_hL_textReset");
        s2_l_explaneText = new QLabel(p02_croppingBalancing);
        s2_l_explaneText->setObjectName("s2_l_explaneText");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(s2_l_explaneText->sizePolicy().hasHeightForWidth());
        s2_l_explaneText->setSizePolicy(sizePolicy3);
        s2_l_explaneText->setMaximumSize(QSize(16777215, 16777215));
        s2_l_explaneText->setWordWrap(true);

        s2_hL_textReset->addWidget(s2_l_explaneText);

        s2_pB_reset = new QPushButton(p02_croppingBalancing);
        s2_pB_reset->setObjectName("s2_pB_reset");

        s2_hL_textReset->addWidget(s2_pB_reset);


        verticalLayout_2->addLayout(s2_hL_textReset);

        s2_graphicsView = new CustomQGraphicsView_ClickablePic(p02_croppingBalancing);
        s2_graphicsView->setObjectName("s2_graphicsView");

        verticalLayout_2->addWidget(s2_graphicsView);

        s2_01_horizontalLayout = new QHBoxLayout();
        s2_01_horizontalLayout->setObjectName("s2_01_horizontalLayout");
        s2_me03_pushButton = new QPushButton(p02_croppingBalancing);
        s2_me03_pushButton->setObjectName("s2_me03_pushButton");
        s2_me03_pushButton->setMinimumSize(QSize(0, 0));

        s2_01_horizontalLayout->addWidget(s2_me03_pushButton);

        s2_me02_pushButton = new QPushButton(p02_croppingBalancing);
        s2_me02_pushButton->setObjectName("s2_me02_pushButton");
        s2_me02_pushButton->setMinimumSize(QSize(0, 0));

        s2_01_horizontalLayout->addWidget(s2_me02_pushButton);

        s2_me01_pushButton = new QPushButton(p02_croppingBalancing);
        s2_me01_pushButton->setObjectName("s2_me01_pushButton");
        s2_me01_pushButton->setMinimumSize(QSize(0, 0));

        s2_01_horizontalLayout->addWidget(s2_me01_pushButton);

        s2_lineRotate = new QFrame(p02_croppingBalancing);
        s2_lineRotate->setObjectName("s2_lineRotate");
        s2_lineRotate->setFrameShape(QFrame::VLine);
        s2_lineRotate->setFrameShadow(QFrame::Sunken);

        s2_01_horizontalLayout->addWidget(s2_lineRotate);

        s2_ma01_pushButton = new QPushButton(p02_croppingBalancing);
        s2_ma01_pushButton->setObjectName("s2_ma01_pushButton");
        s2_ma01_pushButton->setMinimumSize(QSize(0, 0));

        s2_01_horizontalLayout->addWidget(s2_ma01_pushButton);

        s2_ma02_pushButton = new QPushButton(p02_croppingBalancing);
        s2_ma02_pushButton->setObjectName("s2_ma02_pushButton");
        s2_ma02_pushButton->setMinimumSize(QSize(0, 0));

        s2_01_horizontalLayout->addWidget(s2_ma02_pushButton);

        s2_ma03_pushButton = new QPushButton(p02_croppingBalancing);
        s2_ma03_pushButton->setObjectName("s2_ma03_pushButton");
        s2_ma03_pushButton->setMinimumSize(QSize(0, 0));

        s2_01_horizontalLayout->addWidget(s2_ma03_pushButton);


        verticalLayout_2->addLayout(s2_01_horizontalLayout);

        s2_02_horizontalLayout = new QHBoxLayout();
        s2_02_horizontalLayout->setSpacing(3);
        s2_02_horizontalLayout->setObjectName("s2_02_horizontalLayout");
        s2_02_horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        s2_horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        s2_02_horizontalLayout->addItem(s2_horizontalSpacer_1);

        s2_previousStepButton = new QPushButton(p02_croppingBalancing);
        s2_previousStepButton->setObjectName("s2_previousStepButton");
        s2_previousStepButton->setMinimumSize(QSize(181, 71));
        s2_previousStepButton->setMaximumSize(QSize(181, 71));

        s2_02_horizontalLayout->addWidget(s2_previousStepButton);

        s2_horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        s2_02_horizontalLayout->addItem(s2_horizontalSpacer_2);

        s2_nextStepButton = new QPushButton(p02_croppingBalancing);
        s2_nextStepButton->setObjectName("s2_nextStepButton");
        s2_nextStepButton->setMinimumSize(QSize(181, 71));
        s2_nextStepButton->setMaximumSize(QSize(181, 71));

        s2_02_horizontalLayout->addWidget(s2_nextStepButton);

        s2_horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        s2_02_horizontalLayout->addItem(s2_horizontalSpacer_3);


        verticalLayout_2->addLayout(s2_02_horizontalLayout);

        process->addItem(p02_croppingBalancing, icon, QString::fromUtf8("Cropping and Balancing"));
        p03_binarizeImage = new QWidget();
        p03_binarizeImage->setObjectName("p03_binarizeImage");
        p03_binarizeImage->setGeometry(QRect(0, 0, 617, 443));
        verticalLayout_3 = new QVBoxLayout(p03_binarizeImage);
        verticalLayout_3->setObjectName("verticalLayout_3");
        s3_hL_textReset = new QHBoxLayout();
        s3_hL_textReset->setObjectName("s3_hL_textReset");
        s3_l_explaneText = new QLabel(p03_binarizeImage);
        s3_l_explaneText->setObjectName("s3_l_explaneText");
        sizePolicy3.setHeightForWidth(s3_l_explaneText->sizePolicy().hasHeightForWidth());
        s3_l_explaneText->setSizePolicy(sizePolicy3);
        s3_l_explaneText->setMaximumSize(QSize(16777215, 16777215));
        s3_l_explaneText->setWordWrap(true);

        s3_hL_textReset->addWidget(s3_l_explaneText);

        s3_pB_reset = new QPushButton(p03_binarizeImage);
        s3_pB_reset->setObjectName("s3_pB_reset");

        s3_hL_textReset->addWidget(s3_pB_reset);


        verticalLayout_3->addLayout(s3_hL_textReset);

        s3_01_horizontalLayout = new QHBoxLayout();
        s3_01_horizontalLayout->setObjectName("s3_01_horizontalLayout");
        s3_graphicsView = new CustomQGraphicsView_ClickablePic(p03_binarizeImage);
        s3_graphicsView->setObjectName("s3_graphicsView");
        sizePolicy1.setHeightForWidth(s3_graphicsView->sizePolicy().hasHeightForWidth());
        s3_graphicsView->setSizePolicy(sizePolicy1);
        s3_graphicsView->setMinimumSize(QSize(0, 250));
        s3_graphicsView->setMaximumSize(QSize(16777215, 16777215));
        s3_graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);

        s3_01_horizontalLayout->addWidget(s3_graphicsView, 0, Qt::AlignmentFlag::AlignTop);

        s3_01_1_verticalLayout = new QVBoxLayout();
        s3_01_1_verticalLayout->setObjectName("s3_01_1_verticalLayout");
        s3_01_1_verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        s3_01_1_verticalLayout->setContentsMargins(0, -1, -1, -1);
        s3_pushButton_invertColours = new QPushButton(p03_binarizeImage);
        s3_pushButton_invertColours->setObjectName("s3_pushButton_invertColours");

        s3_01_1_verticalLayout->addWidget(s3_pushButton_invertColours);

        s3_tabWidget = new QTabWidget(p03_binarizeImage);
        s3_tabWidget->setObjectName("s3_tabWidget");
        s3_tab_black = new QWidget();
        s3_tab_black->setObjectName("s3_tab_black");
        s3_tab_black_layout = new QVBoxLayout(s3_tab_black);
        s3_tab_black_layout->setObjectName("s3_tab_black_layout");
        s3_tabWidget->addTab(s3_tab_black, QString());
        s3_tab_white = new QWidget();
        s3_tab_white->setObjectName("s3_tab_white");
        s3_tab_white_layout = new QVBoxLayout(s3_tab_white);
        s3_tab_white_layout->setObjectName("s3_tab_white_layout");
        s3_tabWidget->addTab(s3_tab_white, QString());

        s3_01_1_verticalLayout->addWidget(s3_tabWidget);

        s3_pushButton_process = new QPushButton(p03_binarizeImage);
        s3_pushButton_process->setObjectName("s3_pushButton_process");

        s3_01_1_verticalLayout->addWidget(s3_pushButton_process);

        s3_pB_binarize = new QPushButton(p03_binarizeImage);
        s3_pB_binarize->setObjectName("s3_pB_binarize");

        s3_01_1_verticalLayout->addWidget(s3_pB_binarize);


        s3_01_horizontalLayout->addLayout(s3_01_1_verticalLayout);


        verticalLayout_3->addLayout(s3_01_horizontalLayout);

        s3_02_horizontalLayout = new QHBoxLayout();
        s3_02_horizontalLayout->setSpacing(3);
        s3_02_horizontalLayout->setObjectName("s3_02_horizontalLayout");
        s3_02_horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        s3_horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        s3_02_horizontalLayout->addItem(s3_horizontalSpacer_1);

        s3_previousStepButton = new QPushButton(p03_binarizeImage);
        s3_previousStepButton->setObjectName("s3_previousStepButton");
        s3_previousStepButton->setMinimumSize(QSize(181, 71));
        s3_previousStepButton->setMaximumSize(QSize(181, 71));

        s3_02_horizontalLayout->addWidget(s3_previousStepButton);

        s3_horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        s3_02_horizontalLayout->addItem(s3_horizontalSpacer_2);

        s3_nextStepButton = new QPushButton(p03_binarizeImage);
        s3_nextStepButton->setObjectName("s3_nextStepButton");
        s3_nextStepButton->setMinimumSize(QSize(181, 71));
        s3_nextStepButton->setMaximumSize(QSize(181, 71));

        s3_02_horizontalLayout->addWidget(s3_nextStepButton);

        s3_horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        s3_02_horizontalLayout->addItem(s3_horizontalSpacer_3);


        verticalLayout_3->addLayout(s3_02_horizontalLayout);

        process->addItem(p03_binarizeImage, icon, QString::fromUtf8("Image Binarization"));
        p04_errorCorrection = new QWidget();
        p04_errorCorrection->setObjectName("p04_errorCorrection");
        p04_errorCorrection->setGeometry(QRect(0, 0, 617, 438));
        verticalLayout_4 = new QVBoxLayout(p04_errorCorrection);
        verticalLayout_4->setObjectName("verticalLayout_4");
        s4_hL_textReset = new QHBoxLayout();
        s4_hL_textReset->setObjectName("s4_hL_textReset");
        s4_l_explaneText = new QLabel(p04_errorCorrection);
        s4_l_explaneText->setObjectName("s4_l_explaneText");
        sizePolicy3.setHeightForWidth(s4_l_explaneText->sizePolicy().hasHeightForWidth());
        s4_l_explaneText->setSizePolicy(sizePolicy3);
        s4_l_explaneText->setMaximumSize(QSize(16777215, 16777215));
        s4_l_explaneText->setWordWrap(true);

        s4_hL_textReset->addWidget(s4_l_explaneText);

        s4_pB_reset = new QPushButton(p04_errorCorrection);
        s4_pB_reset->setObjectName("s4_pB_reset");

        s4_hL_textReset->addWidget(s4_pB_reset);


        verticalLayout_4->addLayout(s4_hL_textReset);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        s4_graphicsView = new CustomQGraphicsView_ClickablePic(p04_errorCorrection);
        s4_graphicsView->setObjectName("s4_graphicsView");
        sizePolicy1.setHeightForWidth(s4_graphicsView->sizePolicy().hasHeightForWidth());
        s4_graphicsView->setSizePolicy(sizePolicy1);
        s4_graphicsView->setMinimumSize(QSize(0, 0));
        s4_graphicsView->setMaximumSize(QSize(16777215, 400));

        horizontalLayout_4->addWidget(s4_graphicsView);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        s4_hL_erosion = new QHBoxLayout();
        s4_hL_erosion->setObjectName("s4_hL_erosion");
        s4_l_erosion = new QLabel(p04_errorCorrection);
        s4_l_erosion->setObjectName("s4_l_erosion");

        s4_hL_erosion->addWidget(s4_l_erosion, 0, Qt::AlignmentFlag::AlignRight);

        s4_sB_erosion = new QSpinBox(p04_errorCorrection);
        s4_sB_erosion->setObjectName("s4_sB_erosion");
        s4_sB_erosion->setMaximum(15);
        s4_sB_erosion->setSingleStep(2);
        s4_sB_erosion->setValue(3);

        s4_hL_erosion->addWidget(s4_sB_erosion);


        verticalLayout_14->addLayout(s4_hL_erosion);

        s4_hL_morphOpening = new QHBoxLayout();
        s4_hL_morphOpening->setObjectName("s4_hL_morphOpening");
        s4_l_morphOpening = new QLabel(p04_errorCorrection);
        s4_l_morphOpening->setObjectName("s4_l_morphOpening");

        s4_hL_morphOpening->addWidget(s4_l_morphOpening, 0, Qt::AlignmentFlag::AlignRight);

        s4_sB_morphOpening = new QSpinBox(p04_errorCorrection);
        s4_sB_morphOpening->setObjectName("s4_sB_morphOpening");
        s4_sB_morphOpening->setMaximum(15);
        s4_sB_morphOpening->setSingleStep(2);
        s4_sB_morphOpening->setValue(3);

        s4_hL_morphOpening->addWidget(s4_sB_morphOpening);


        verticalLayout_14->addLayout(s4_hL_morphOpening);

        s4_correctionButton = new QPushButton(p04_errorCorrection);
        s4_correctionButton->setObjectName("s4_correctionButton");
        s4_correctionButton->setMinimumSize(QSize(181, 71));
        s4_correctionButton->setMaximumSize(QSize(181, 71));

        verticalLayout_14->addWidget(s4_correctionButton);

        s4_hL_skelDilation = new QHBoxLayout();
        s4_hL_skelDilation->setObjectName("s4_hL_skelDilation");
        s4_l_skelDilation = new QLabel(p04_errorCorrection);
        s4_l_skelDilation->setObjectName("s4_l_skelDilation");

        s4_hL_skelDilation->addWidget(s4_l_skelDilation, 0, Qt::AlignmentFlag::AlignRight);

        s4_sB_skelDilation = new QSpinBox(p04_errorCorrection);
        s4_sB_skelDilation->setObjectName("s4_sB_skelDilation");
        s4_sB_skelDilation->setMaximum(15);
        s4_sB_skelDilation->setSingleStep(2);
        s4_sB_skelDilation->setValue(3);

        s4_hL_skelDilation->addWidget(s4_sB_skelDilation);


        verticalLayout_14->addLayout(s4_hL_skelDilation);

        s4_skeletonizationButton = new QPushButton(p04_errorCorrection);
        s4_skeletonizationButton->setObjectName("s4_skeletonizationButton");
        s4_skeletonizationButton->setMinimumSize(QSize(181, 71));
        s4_skeletonizationButton->setMaximumSize(QSize(181, 71));

        verticalLayout_14->addWidget(s4_skeletonizationButton);


        horizontalLayout_4->addLayout(verticalLayout_14);


        verticalLayout_4->addLayout(horizontalLayout_4);

        s4_00_horizontalLayout = new QHBoxLayout();
        s4_00_horizontalLayout->setSpacing(3);
        s4_00_horizontalLayout->setObjectName("s4_00_horizontalLayout");
        s4_00_horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        s4_horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        s4_00_horizontalLayout->addItem(s4_horizontalSpacer_1);

        s4_previousStepButton = new QPushButton(p04_errorCorrection);
        s4_previousStepButton->setObjectName("s4_previousStepButton");
        s4_previousStepButton->setMinimumSize(QSize(181, 71));
        s4_previousStepButton->setMaximumSize(QSize(181, 71));

        s4_00_horizontalLayout->addWidget(s4_previousStepButton);

        s4_horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        s4_00_horizontalLayout->addItem(s4_horizontalSpacer_2);

        s4_nextStepButton = new QPushButton(p04_errorCorrection);
        s4_nextStepButton->setObjectName("s4_nextStepButton");
        s4_nextStepButton->setMinimumSize(QSize(181, 71));
        s4_nextStepButton->setMaximumSize(QSize(181, 71));

        s4_00_horizontalLayout->addWidget(s4_nextStepButton);

        s4_horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        s4_00_horizontalLayout->addItem(s4_horizontalSpacer_3);


        verticalLayout_4->addLayout(s4_00_horizontalLayout);

        process->addItem(p04_errorCorrection, icon, QString::fromUtf8("Error correction"));
        p05_vectorization = new QWidget();
        p05_vectorization->setObjectName("p05_vectorization");
        p05_vectorization->setGeometry(QRect(0, 0, 634, 344));
        verticalLayout_5 = new QVBoxLayout(p05_vectorization);
        verticalLayout_5->setObjectName("verticalLayout_5");
        s5_l_explaneText = new QLabel(p05_vectorization);
        s5_l_explaneText->setObjectName("s5_l_explaneText");
        s5_l_explaneText->setWordWrap(true);

        verticalLayout_5->addWidget(s5_l_explaneText);

        s5_graphicsView = new CustomQGraphicsView_ClickablePic(p05_vectorization);
        s5_graphicsView->setObjectName("s5_graphicsView");
        sizePolicy1.setHeightForWidth(s5_graphicsView->sizePolicy().hasHeightForWidth());
        s5_graphicsView->setSizePolicy(sizePolicy1);
        s5_graphicsView->setMinimumSize(QSize(0, 0));
        s5_graphicsView->setMaximumSize(QSize(16777215, 400));

        verticalLayout_5->addWidget(s5_graphicsView);

        s5_00_horizontalLayout = new QHBoxLayout();
        s5_00_horizontalLayout->setSpacing(3);
        s5_00_horizontalLayout->setObjectName("s5_00_horizontalLayout");
        s5_00_horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        s5_horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        s5_00_horizontalLayout->addItem(s5_horizontalSpacer_1);

        s5_previousStepButton = new QPushButton(p05_vectorization);
        s5_previousStepButton->setObjectName("s5_previousStepButton");
        s5_previousStepButton->setMinimumSize(QSize(181, 71));
        s5_previousStepButton->setMaximumSize(QSize(181, 71));

        s5_00_horizontalLayout->addWidget(s5_previousStepButton);

        s5_horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        s5_00_horizontalLayout->addItem(s5_horizontalSpacer_2);

        s5_nextStepButton = new QPushButton(p05_vectorization);
        s5_nextStepButton->setObjectName("s5_nextStepButton");
        s5_nextStepButton->setMinimumSize(QSize(181, 71));
        s5_nextStepButton->setMaximumSize(QSize(181, 71));

        s5_00_horizontalLayout->addWidget(s5_nextStepButton);

        s5_horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        s5_00_horizontalLayout->addItem(s5_horizontalSpacer_3);


        verticalLayout_5->addLayout(s5_00_horizontalLayout);

        process->addItem(p05_vectorization, icon, QString::fromUtf8("Vectorization"));
        p06_customization = new QWidget();
        p06_customization->setObjectName("p06_customization");
        p06_customization->setGeometry(QRect(0, -41, 617, 385));
        verticalLayout_6 = new QVBoxLayout(p06_customization);
        verticalLayout_6->setObjectName("verticalLayout_6");
        s6_hL_textReset = new QHBoxLayout();
        s6_hL_textReset->setObjectName("s6_hL_textReset");
        s6_l_explaneText = new QLabel(p06_customization);
        s6_l_explaneText->setObjectName("s6_l_explaneText");
        sizePolicy3.setHeightForWidth(s6_l_explaneText->sizePolicy().hasHeightForWidth());
        s6_l_explaneText->setSizePolicy(sizePolicy3);
        s6_l_explaneText->setWordWrap(true);

        s6_hL_textReset->addWidget(s6_l_explaneText);

        s6_pB_restore = new QPushButton(p06_customization);
        s6_pB_restore->setObjectName("s6_pB_restore");

        s6_hL_textReset->addWidget(s6_pB_restore);

        s6_pB_reset = new QPushButton(p06_customization);
        s6_pB_reset->setObjectName("s6_pB_reset");

        s6_hL_textReset->addWidget(s6_pB_reset);


        verticalLayout_6->addLayout(s6_hL_textReset);

        s6_hL_graphicsView = new QHBoxLayout();
        s6_hL_graphicsView->setObjectName("s6_hL_graphicsView");
        s6_graphicsView = new CustomQGraphicsView_ClickablePic(p06_customization);
        s6_graphicsView->setObjectName("s6_graphicsView");
        sizePolicy1.setHeightForWidth(s6_graphicsView->sizePolicy().hasHeightForWidth());
        s6_graphicsView->setSizePolicy(sizePolicy1);
        s6_graphicsView->setMinimumSize(QSize(0, 0));
        s6_graphicsView->setMaximumSize(QSize(16777215, 400));

        s6_hL_graphicsView->addWidget(s6_graphicsView);

        s6_vl_widgetsGroup = new QVBoxLayout();
        s6_vl_widgetsGroup->setObjectName("s6_vl_widgetsGroup");

        s6_hL_graphicsView->addLayout(s6_vl_widgetsGroup);


        verticalLayout_6->addLayout(s6_hL_graphicsView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        s6_horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(s6_horizontalSpacer_1);

        s6_previousStepButton = new QPushButton(p06_customization);
        s6_previousStepButton->setObjectName("s6_previousStepButton");
        s6_previousStepButton->setMinimumSize(QSize(181, 71));
        s6_previousStepButton->setMaximumSize(QSize(181, 71));

        horizontalLayout_3->addWidget(s6_previousStepButton);

        s6_horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(s6_horizontalSpacer_2);

        s6_nextStepButton = new QPushButton(p06_customization);
        s6_nextStepButton->setObjectName("s6_nextStepButton");
        s6_nextStepButton->setMinimumSize(QSize(181, 71));
        s6_nextStepButton->setMaximumSize(QSize(181, 71));

        horizontalLayout_3->addWidget(s6_nextStepButton);

        s6_horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(s6_horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_3);

        process->addItem(p06_customization, icon, QString::fromUtf8("Customization"));

        mw_mainProcess->addWidget(process);


        horizontalLayout_2->addLayout(mw_mainProcess);

        mw_right_line = new QFrame(mw_layout);
        mw_right_line->setObjectName("mw_right_line");
        mw_right_line->setMinimumSize(QSize(3, 578));
        mw_right_line->setLineWidth(4);
        mw_right_line->setFrameShape(QFrame::VLine);
        mw_right_line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(mw_right_line);

        MainWindow->setCentralWidget(mw_layout);

        retranslateUi(MainWindow);

        process->setCurrentIndex(0);
        process->layout()->setSpacing(0);
        s3_tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        save->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Save the current progress. Remember, the same progress can be used with different images, so you'll need to select the image again if you close the program. If this button is disabled, the saving process has already been completed.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        label->setText(QString());
#if QT_CONFIG(tooltip)
        config->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Open a pop-up window that allows you to change the theme used in the program.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        config->setText(QCoreApplication::translate("MainWindow", "Configuration", nullptr));
#if QT_CONFIG(tooltip)
        p00_welcomePage->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        title_wp_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt;\">Welcome to Vectoriz</span><span style=\" font-size:26pt; font-weight:900;\">arT</span></p></body></html>", nullptr));
        logo_wp_label->setText(QString());
        text_wp_label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Your program for stroke vectorization step-by-step</span></p></body></html>", nullptr));
        wp_nextStepButton->setText(QCoreApplication::translate("MainWindow", "Get Started", nullptr));
        process->setItemText(process->indexOf(p00_welcomePage), QCoreApplication::translate("MainWindow", "Welcome Page", nullptr));
        s1_projectName_lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Project Name", nullptr));
        s1_projectFilepath_lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Project Filepath", nullptr));
        s1_cB_openProject->setText(QCoreApplication::translate("MainWindow", "Open project", nullptr));
        s1_cB_reuseProject->setText(QCoreApplication::translate("MainWindow", "Reuse to new project", nullptr));
        s1_imagePath->setPlaceholderText(QCoreApplication::translate("MainWindow", "Image Path", nullptr));
        s1_previousStepButton->setText(QCoreApplication::translate("MainWindow", "Back to Home Page", nullptr));
        s1_nextStepButton->setText(QCoreApplication::translate("MainWindow", "Start Project", nullptr));
        process->setItemText(process->indexOf(p01_choosingProject), QCoreApplication::translate("MainWindow", "Choosing Project", nullptr));
        s2_l_explaneText->setText(QCoreApplication::translate("MainWindow", "Use the buttons below the image to rotate if needed. After rotate, crop the image as desired by selecting an area with the left mouse button.", nullptr));
#if QT_CONFIG(tooltip)
        s2_pB_reset->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Reset the image back to its original state. All previous steps are saved and not reset.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        s2_pB_reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
#if QT_CONFIG(tooltip)
        s2_me03_pushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Rotate the image -25\302\272. To the left 25\302\272.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        s2_me03_pushButton->setText(QString());
#if QT_CONFIG(tooltip)
        s2_me02_pushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Rotate the image -5\302\272. To the left 5\302\272.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        s2_me02_pushButton->setText(QString());
#if QT_CONFIG(tooltip)
        s2_me01_pushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Rotate the image -1\302\272. To the left 1\302\272.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        s2_me01_pushButton->setText(QString());
#if QT_CONFIG(tooltip)
        s2_ma01_pushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Rotate the image 1\302\272. To the right 1\302\272.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        s2_ma01_pushButton->setText(QString());
#if QT_CONFIG(tooltip)
        s2_ma02_pushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Rotate the image 5\302\272. To the right 5\302\272.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        s2_ma02_pushButton->setText(QString());
#if QT_CONFIG(tooltip)
        s2_ma03_pushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Rotate the image 25\302\272. To the right 25\302\272.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        s2_ma03_pushButton->setText(QString());
        s2_previousStepButton->setText(QCoreApplication::translate("MainWindow", "Choose Other", nullptr));
        s2_nextStepButton->setText(QCoreApplication::translate("MainWindow", "Looks Good", nullptr));
        process->setItemText(process->indexOf(p02_croppingBalancing), QCoreApplication::translate("MainWindow", "Cropping and Balancing", nullptr));
        s3_l_explaneText->setText(QCoreApplication::translate("MainWindow", "Select colors and their threshold by clicking on the image: left-click adds them to the black list, right-click to the white list. A black-and-white binarization will be applied using the selected colors, while unselected ones will be processed using a default black threshold.", nullptr));
#if QT_CONFIG(tooltip)
        s3_pB_reset->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Reset the image back to its original state. All previous steps are saved and not reset.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        s3_pB_reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        s3_pushButton_invertColours->setText(QCoreApplication::translate("MainWindow", "Invert Image Colours", nullptr));
        s3_tabWidget->setTabText(s3_tabWidget->indexOf(s3_tab_black), QCoreApplication::translate("MainWindow", "Colours to Black", nullptr));
        s3_tabWidget->setTabText(s3_tabWidget->indexOf(s3_tab_white), QCoreApplication::translate("MainWindow", "Colours to White", nullptr));
        s3_pushButton_process->setText(QCoreApplication::translate("MainWindow", "Convert colours", nullptr));
        s3_pB_binarize->setText(QCoreApplication::translate("MainWindow", "Binarize the image", nullptr));
        s3_previousStepButton->setText(QCoreApplication::translate("MainWindow", "Modify the Image More", nullptr));
        s3_nextStepButton->setText(QCoreApplication::translate("MainWindow", "Processed Image", nullptr));
        process->setItemText(process->indexOf(p03_binarizeImage), QCoreApplication::translate("MainWindow", "Image Binarization", nullptr));
        s4_l_explaneText->setText(QCoreApplication::translate("MainWindow", "Performs a superficial cleanup of the image to remove imperfections using 'Surface Correction', or a deep cleanup that preserves stroke structure through 'Skeletonization' (stroke thickness will be reduced).", nullptr));
#if QT_CONFIG(tooltip)
        s4_pB_reset->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Reset the image back to its original state. All previous steps are saved and not reset.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        s4_pB_reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        s4_l_erosion->setText(QCoreApplication::translate("MainWindow", "Morph Closing:", nullptr));
        s4_l_morphOpening->setText(QCoreApplication::translate("MainWindow", "Morph Opening:", nullptr));
        s4_correctionButton->setText(QCoreApplication::translate("MainWindow", "Surface Correction", nullptr));
        s4_l_skelDilation->setText(QCoreApplication::translate("MainWindow", "Skel. Dilatation:", nullptr));
        s4_skeletonizationButton->setText(QCoreApplication::translate("MainWindow", "Skeletonization", nullptr));
        s4_previousStepButton->setText(QCoreApplication::translate("MainWindow", "Process Image Again", nullptr));
        s4_nextStepButton->setText(QCoreApplication::translate("MainWindow", "Correction Done", nullptr));
        process->setItemText(process->indexOf(p04_errorCorrection), QCoreApplication::translate("MainWindow", "Error correction", nullptr));
        s5_l_explaneText->setText(QCoreApplication::translate("MainWindow", "Executes the vectorization process on the image. Ensure the image is properly prepared, white strokes will be vectorized too!", nullptr));
        s5_previousStepButton->setText(QCoreApplication::translate("MainWindow", "More Correction", nullptr));
        s5_nextStepButton->setText(QCoreApplication::translate("MainWindow", "Vectorize", nullptr));
        process->setItemText(process->indexOf(p05_vectorization), QCoreApplication::translate("MainWindow", "Vectorization", nullptr));
        s6_l_explaneText->setText(QCoreApplication::translate("MainWindow", "Removes unwanted strokes from the image to exclude them from the final output. If you want to recover the last deleted path, you can restore it using the Restore button.", nullptr));
        s6_pB_restore->setText(QCoreApplication::translate("MainWindow", "Restore Last Path", nullptr));
        s6_pB_reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        s6_previousStepButton->setText(QCoreApplication::translate("MainWindow", "Repeat Vectorization", nullptr));
        s6_nextStepButton->setText(QCoreApplication::translate("MainWindow", "Finish Project", nullptr));
        process->setItemText(process->indexOf(p06_customization), QCoreApplication::translate("MainWindow", "Customization", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
