/********************************************************************************
** Form generated from reading UI file 'configdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/ui/personalizedWidgets/qSpinBox/customqspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_ConfigDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *mouseTab;
    QVBoxLayout *verticalLayout_3;
    QLabel *cursorText;
    QScrollArea *cursorChoose;
    QWidget *cursorChooseContents;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *cursorBlack;
    QRadioButton *cursorGray;
    QRadioButton *cursorDarkblue;
    QRadioButton *cursorBlue;
    QRadioButton *cursorAqua;
    QRadioButton *cursorGreen;
    QRadioButton *cursorDarkgreen;
    QRadioButton *cursorRed;
    QRadioButton *cursorPink;
    QRadioButton *cursorWhite;
    QRadioButton *cursorSO;
    QLabel *cursorSelected;
    QHBoxLayout *cursorSizeChoose;
    QRadioButton *sizeSmall;
    QRadioButton *sizeMedium;
    QRadioButton *sizeBig;
    QWidget *theme_tab;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *theme_pB_blackTheme;
    QPushButton *theme_pB_whiteTheme;
    QWidget *log_tab;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *log_check_available;
    QFrame *log_line_check;
    QFrame *log_frame;
    QVBoxLayout *verticalLayout_9;
    QLabel *log_label_timeExpire;
    QHBoxLayout *log_hl_timeExpire;
    QSpacerItem *log_hs_timeExpire;
    QLabel *log_label_timeExpireUnit;
    QComboBox *log_enumBox_timeExpire;
    QSpacerItem *log_hs_timeExpire_2;
    QFrame *log_line_inTimeExpire;
    QSpacerItem *log_hs_timeExpire_3;
    QLabel *log_label_timeExpireNumber;
    CustomQSpinBox *log_numberBox_timeExpire;
    QSpacerItem *log_hs_timeExpire_4;
    QFrame *log_line_expireTime;
    QHBoxLayout *log_hl_maxLogs;
    QSpacerItem *log_hs_maxLog_1;
    QLabel *log_label_maxLog;
    CustomQSpinBox *log_numberBox_maxLog;
    QSpacerItem *log_hs_maxLog_2;
    QFrame *log_line_expireTime_2;
    QSpacerItem *log_vs_reader_1;
    QLabel *log_label_reader;
    QHBoxLayout *log_hl_reader;
    QTextBrowser *log_tb_reader;
    QPushButton *log_pb_reader;
    QSpacerItem *log_vs_reader_2;
    QWidget *settings_tab;
    QVBoxLayout *verticalLayout_6;
    QPushButton *setting_pb_export;
    QPushButton *setting_pb_import;
    QDialogButtonBox *buttonBox;
    QFrame *line_2;

    void setupUi(QDialog *ConfigDialog)
    {
        if (ConfigDialog->objectName().isEmpty())
            ConfigDialog->setObjectName("ConfigDialog");
        ConfigDialog->resize(541, 373);
        ConfigDialog->setMinimumSize(QSize(541, 328));
        verticalLayout_2 = new QVBoxLayout(ConfigDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        line = new QFrame(ConfigDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(ConfigDialog);
        tabWidget->setObjectName("tabWidget");
        mouseTab = new QWidget();
        mouseTab->setObjectName("mouseTab");
        verticalLayout_3 = new QVBoxLayout(mouseTab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        cursorText = new QLabel(mouseTab);
        cursorText->setObjectName("cursorText");

        verticalLayout_3->addWidget(cursorText);

        cursorChoose = new QScrollArea(mouseTab);
        cursorChoose->setObjectName("cursorChoose");
        cursorChoose->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        cursorChoose->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        cursorChoose->setWidgetResizable(true);
        cursorChooseContents = new QWidget();
        cursorChooseContents->setObjectName("cursorChooseContents");
        cursorChooseContents->setGeometry(QRect(0, 0, 1544, 127));
        horizontalLayout_2 = new QHBoxLayout(cursorChooseContents);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        cursorBlack = new QRadioButton(cursorChooseContents);
        cursorBlack->setObjectName("cursorBlack");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cursor/resources/Cursor_black.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cursorBlack->setIcon(icon);
        cursorBlack->setIconSize(QSize(100, 100));

        horizontalLayout_2->addWidget(cursorBlack);

        cursorGray = new QRadioButton(cursorChooseContents);
        cursorGray->setObjectName("cursorGray");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/cursor/resources/Cursor_gray.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cursorGray->setIcon(icon1);
        cursorGray->setIconSize(QSize(100, 100));

        horizontalLayout_2->addWidget(cursorGray);

        cursorDarkblue = new QRadioButton(cursorChooseContents);
        cursorDarkblue->setObjectName("cursorDarkblue");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/cursor/resources/Cursor_darkblue.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cursorDarkblue->setIcon(icon2);
        cursorDarkblue->setIconSize(QSize(100, 100));

        horizontalLayout_2->addWidget(cursorDarkblue);

        cursorBlue = new QRadioButton(cursorChooseContents);
        cursorBlue->setObjectName("cursorBlue");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/cursor/resources/Cursor_blue.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cursorBlue->setIcon(icon3);
        cursorBlue->setIconSize(QSize(100, 100));

        horizontalLayout_2->addWidget(cursorBlue);

        cursorAqua = new QRadioButton(cursorChooseContents);
        cursorAqua->setObjectName("cursorAqua");
        cursorAqua->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/cursor/resources/Cursor_aqua.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cursorAqua->setIcon(icon4);
        cursorAqua->setIconSize(QSize(100, 100));
        cursorAqua->setCheckable(true);
        cursorAqua->setAutoExclusive(true);

        horizontalLayout_2->addWidget(cursorAqua);

        cursorGreen = new QRadioButton(cursorChooseContents);
        cursorGreen->setObjectName("cursorGreen");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/cursor/resources/Cursor_green.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cursorGreen->setIcon(icon5);
        cursorGreen->setIconSize(QSize(100, 100));

        horizontalLayout_2->addWidget(cursorGreen);

        cursorDarkgreen = new QRadioButton(cursorChooseContents);
        cursorDarkgreen->setObjectName("cursorDarkgreen");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/cursor/resources/Cursor_darkgreen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cursorDarkgreen->setIcon(icon6);
        cursorDarkgreen->setIconSize(QSize(100, 100));

        horizontalLayout_2->addWidget(cursorDarkgreen);

        cursorRed = new QRadioButton(cursorChooseContents);
        cursorRed->setObjectName("cursorRed");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/cursor/resources/Cursor_red.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cursorRed->setIcon(icon7);
        cursorRed->setIconSize(QSize(100, 100));

        horizontalLayout_2->addWidget(cursorRed);

        cursorPink = new QRadioButton(cursorChooseContents);
        cursorPink->setObjectName("cursorPink");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/cursor/resources/Cursor_pink.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cursorPink->setIcon(icon8);
        cursorPink->setIconSize(QSize(100, 100));

        horizontalLayout_2->addWidget(cursorPink);

        cursorWhite = new QRadioButton(cursorChooseContents);
        cursorWhite->setObjectName("cursorWhite");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/cursor/resources/Cursor_white.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cursorWhite->setIcon(icon9);
        cursorWhite->setIconSize(QSize(100, 100));

        horizontalLayout_2->addWidget(cursorWhite);

        cursorSO = new QRadioButton(cursorChooseContents);
        cursorSO->setObjectName("cursorSO");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/cursor/resources/Cursor_SO.svg"), QSize(), QIcon::Normal, QIcon::Off);
        cursorSO->setIcon(icon10);
        cursorSO->setIconSize(QSize(100, 100));

        horizontalLayout_2->addWidget(cursorSO);

        cursorChoose->setWidget(cursorChooseContents);

        verticalLayout_3->addWidget(cursorChoose);

        cursorSelected = new QLabel(mouseTab);
        cursorSelected->setObjectName("cursorSelected");

        verticalLayout_3->addWidget(cursorSelected);

        cursorSizeChoose = new QHBoxLayout();
        cursorSizeChoose->setObjectName("cursorSizeChoose");
        sizeSmall = new QRadioButton(mouseTab);
        sizeSmall->setObjectName("sizeSmall");
        QFont font;
        font.setPointSize(8);
        sizeSmall->setFont(font);

        cursorSizeChoose->addWidget(sizeSmall);

        sizeMedium = new QRadioButton(mouseTab);
        sizeMedium->setObjectName("sizeMedium");

        cursorSizeChoose->addWidget(sizeMedium);

        sizeBig = new QRadioButton(mouseTab);
        sizeBig->setObjectName("sizeBig");
        QFont font1;
        font1.setPointSize(11);
        sizeBig->setFont(font1);

        cursorSizeChoose->addWidget(sizeBig);


        verticalLayout_3->addLayout(cursorSizeChoose);

        tabWidget->addTab(mouseTab, QString());
        theme_tab = new QWidget();
        theme_tab->setObjectName("theme_tab");
        verticalLayout_5 = new QVBoxLayout(theme_tab);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        theme_pB_blackTheme = new QPushButton(theme_tab);
        theme_pB_blackTheme->setObjectName("theme_pB_blackTheme");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(theme_pB_blackTheme->sizePolicy().hasHeightForWidth());
        theme_pB_blackTheme->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(theme_pB_blackTheme);

        theme_pB_whiteTheme = new QPushButton(theme_tab);
        theme_pB_whiteTheme->setObjectName("theme_pB_whiteTheme");
        sizePolicy.setHeightForWidth(theme_pB_whiteTheme->sizePolicy().hasHeightForWidth());
        theme_pB_whiteTheme->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(theme_pB_whiteTheme);


        verticalLayout_5->addLayout(horizontalLayout);

        tabWidget->addTab(theme_tab, QString());
        log_tab = new QWidget();
        log_tab->setObjectName("log_tab");
        verticalLayout_4 = new QVBoxLayout(log_tab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        log_check_available = new QCheckBox(log_tab);
        log_check_available->setObjectName("log_check_available");
        log_check_available->setChecked(true);
        log_check_available->setTristate(false);

        verticalLayout_4->addWidget(log_check_available, 0, Qt::AlignmentFlag::AlignRight);

        log_line_check = new QFrame(log_tab);
        log_line_check->setObjectName("log_line_check");
        log_line_check->setFrameShape(QFrame::HLine);
        log_line_check->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(log_line_check);

        log_frame = new QFrame(log_tab);
        log_frame->setObjectName("log_frame");
        log_frame->setFrameShape(QFrame::Shape::StyledPanel);
        log_frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_9 = new QVBoxLayout(log_frame);
        verticalLayout_9->setObjectName("verticalLayout_9");
        log_label_timeExpire = new QLabel(log_frame);
        log_label_timeExpire->setObjectName("log_label_timeExpire");

        verticalLayout_9->addWidget(log_label_timeExpire);

        log_hl_timeExpire = new QHBoxLayout();
        log_hl_timeExpire->setSpacing(5);
        log_hl_timeExpire->setObjectName("log_hl_timeExpire");
        log_hs_timeExpire = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        log_hl_timeExpire->addItem(log_hs_timeExpire);

        log_label_timeExpireUnit = new QLabel(log_frame);
        log_label_timeExpireUnit->setObjectName("log_label_timeExpireUnit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(log_label_timeExpireUnit->sizePolicy().hasHeightForWidth());
        log_label_timeExpireUnit->setSizePolicy(sizePolicy1);

        log_hl_timeExpire->addWidget(log_label_timeExpireUnit, 0, Qt::AlignmentFlag::AlignRight);

        log_enumBox_timeExpire = new QComboBox(log_frame);
        log_enumBox_timeExpire->setObjectName("log_enumBox_timeExpire");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(log_enumBox_timeExpire->sizePolicy().hasHeightForWidth());
        log_enumBox_timeExpire->setSizePolicy(sizePolicy2);

        log_hl_timeExpire->addWidget(log_enumBox_timeExpire, 0, Qt::AlignmentFlag::AlignLeft);

        log_hs_timeExpire_2 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        log_hl_timeExpire->addItem(log_hs_timeExpire_2);

        log_line_inTimeExpire = new QFrame(log_frame);
        log_line_inTimeExpire->setObjectName("log_line_inTimeExpire");
        log_line_inTimeExpire->setFrameShape(QFrame::VLine);
        log_line_inTimeExpire->setFrameShadow(QFrame::Sunken);

        log_hl_timeExpire->addWidget(log_line_inTimeExpire);

        log_hs_timeExpire_3 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        log_hl_timeExpire->addItem(log_hs_timeExpire_3);

        log_label_timeExpireNumber = new QLabel(log_frame);
        log_label_timeExpireNumber->setObjectName("log_label_timeExpireNumber");
        sizePolicy1.setHeightForWidth(log_label_timeExpireNumber->sizePolicy().hasHeightForWidth());
        log_label_timeExpireNumber->setSizePolicy(sizePolicy1);

        log_hl_timeExpire->addWidget(log_label_timeExpireNumber, 0, Qt::AlignmentFlag::AlignRight);

        log_numberBox_timeExpire = new CustomQSpinBox(log_frame);
        log_numberBox_timeExpire->setObjectName("log_numberBox_timeExpire");
        sizePolicy2.setHeightForWidth(log_numberBox_timeExpire->sizePolicy().hasHeightForWidth());
        log_numberBox_timeExpire->setSizePolicy(sizePolicy2);

        log_hl_timeExpire->addWidget(log_numberBox_timeExpire, 0, Qt::AlignmentFlag::AlignLeft);

        log_hs_timeExpire_4 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        log_hl_timeExpire->addItem(log_hs_timeExpire_4);


        verticalLayout_9->addLayout(log_hl_timeExpire);

        log_line_expireTime = new QFrame(log_frame);
        log_line_expireTime->setObjectName("log_line_expireTime");
        log_line_expireTime->setFrameShape(QFrame::HLine);
        log_line_expireTime->setFrameShadow(QFrame::Sunken);

        verticalLayout_9->addWidget(log_line_expireTime);

        log_hl_maxLogs = new QHBoxLayout();
        log_hl_maxLogs->setObjectName("log_hl_maxLogs");
        log_hs_maxLog_1 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        log_hl_maxLogs->addItem(log_hs_maxLog_1);

        log_label_maxLog = new QLabel(log_frame);
        log_label_maxLog->setObjectName("log_label_maxLog");

        log_hl_maxLogs->addWidget(log_label_maxLog, 0, Qt::AlignmentFlag::AlignRight);

        log_numberBox_maxLog = new CustomQSpinBox(log_frame);
        log_numberBox_maxLog->setObjectName("log_numberBox_maxLog");
        sizePolicy2.setHeightForWidth(log_numberBox_maxLog->sizePolicy().hasHeightForWidth());
        log_numberBox_maxLog->setSizePolicy(sizePolicy2);

        log_hl_maxLogs->addWidget(log_numberBox_maxLog, 0, Qt::AlignmentFlag::AlignHCenter);

        log_hs_maxLog_2 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        log_hl_maxLogs->addItem(log_hs_maxLog_2);


        verticalLayout_9->addLayout(log_hl_maxLogs);

        log_line_expireTime_2 = new QFrame(log_frame);
        log_line_expireTime_2->setObjectName("log_line_expireTime_2");
        log_line_expireTime_2->setFrameShape(QFrame::HLine);
        log_line_expireTime_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_9->addWidget(log_line_expireTime_2);

        log_vs_reader_1 = new QSpacerItem(0, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(log_vs_reader_1);

        log_label_reader = new QLabel(log_frame);
        log_label_reader->setObjectName("log_label_reader");

        verticalLayout_9->addWidget(log_label_reader, 0, Qt::AlignmentFlag::AlignBottom);

        log_hl_reader = new QHBoxLayout();
        log_hl_reader->setObjectName("log_hl_reader");
        log_tb_reader = new QTextBrowser(log_frame);
        log_tb_reader->setObjectName("log_tb_reader");

        log_hl_reader->addWidget(log_tb_reader);

        log_pb_reader = new QPushButton(log_frame);
        log_pb_reader->setObjectName("log_pb_reader");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/theme/resources/Custom.svg"), QSize(), QIcon::Normal, QIcon::Off);
        log_pb_reader->setIcon(icon11);

        log_hl_reader->addWidget(log_pb_reader);


        verticalLayout_9->addLayout(log_hl_reader);

        log_vs_reader_2 = new QSpacerItem(0, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(log_vs_reader_2);


        verticalLayout_4->addWidget(log_frame);

        tabWidget->addTab(log_tab, QString());
        settings_tab = new QWidget();
        settings_tab->setObjectName("settings_tab");
        verticalLayout_6 = new QVBoxLayout(settings_tab);
        verticalLayout_6->setObjectName("verticalLayout_6");
        setting_pb_export = new QPushButton(settings_tab);
        setting_pb_export->setObjectName("setting_pb_export");

        verticalLayout_6->addWidget(setting_pb_export);

        setting_pb_import = new QPushButton(settings_tab);
        setting_pb_import->setObjectName("setting_pb_import");

        verticalLayout_6->addWidget(setting_pb_import);

        tabWidget->addTab(settings_tab, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(ConfigDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Close|QDialogButtonBox::StandardButton::RestoreDefaults|QDialogButtonBox::StandardButton::SaveAll);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);

        line_2 = new QFrame(ConfigDialog);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);


        retranslateUi(ConfigDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ConfigDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ConfigDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigDialog)
    {
        ConfigDialog->setWindowTitle(QCoreApplication::translate("ConfigDialog", "Dialog", nullptr));
        cursorText->setText(QCoreApplication::translate("ConfigDialog", "Choose how the cursor will appear.", nullptr));
#if QT_CONFIG(tooltip)
        cursorBlack->setToolTip(QCoreApplication::translate("ConfigDialog", "<html><head/><body><p>Black-colored cursor.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cursorBlack->setText(QString());
#if QT_CONFIG(tooltip)
        cursorGray->setToolTip(QCoreApplication::translate("ConfigDialog", "<html><head/><body><p>Gray-colored cursor.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cursorGray->setText(QString());
#if QT_CONFIG(tooltip)
        cursorDarkblue->setToolTip(QCoreApplication::translate("ConfigDialog", "<html><head/><body><p>Dark blue-colored cursor.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cursorDarkblue->setText(QString());
#if QT_CONFIG(tooltip)
        cursorBlue->setToolTip(QCoreApplication::translate("ConfigDialog", "<html><head/><body><p>Blue-colored cursor.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cursorBlue->setText(QString());
#if QT_CONFIG(tooltip)
        cursorAqua->setToolTip(QCoreApplication::translate("ConfigDialog", "<html><head/><body><p>Aqua-colored cursor.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cursorAqua->setText(QString());
#if QT_CONFIG(tooltip)
        cursorGreen->setToolTip(QCoreApplication::translate("ConfigDialog", "<html><head/><body><p>Green-colored cursor.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cursorGreen->setText(QString());
#if QT_CONFIG(tooltip)
        cursorDarkgreen->setToolTip(QCoreApplication::translate("ConfigDialog", "<html><head/><body><p>Dark green-colored cursor.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cursorDarkgreen->setText(QString());
#if QT_CONFIG(tooltip)
        cursorRed->setToolTip(QCoreApplication::translate("ConfigDialog", "<html><head/><body><p>Red-colored cursor.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cursorRed->setText(QString());
#if QT_CONFIG(tooltip)
        cursorPink->setToolTip(QCoreApplication::translate("ConfigDialog", "<html><head/><body><p>Pink-colored cursor.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cursorPink->setText(QString());
#if QT_CONFIG(tooltip)
        cursorWhite->setToolTip(QCoreApplication::translate("ConfigDialog", "<html><head/><body><p>White-colored cursor.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cursorWhite->setText(QString());
#if QT_CONFIG(tooltip)
        cursorSO->setToolTip(QCoreApplication::translate("ConfigDialog", "<html><head/><body><p>No colored special cursor. Operative system cursor.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cursorSO->setText(QString());
#if QT_CONFIG(tooltip)
        cursorSelected->setToolTip(QCoreApplication::translate("ConfigDialog", "<html><head/><body><p>Cursor selected.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cursorSelected->setText(QCoreApplication::translate("ConfigDialog", "Selected cursor:", nullptr));
        sizeSmall->setText(QCoreApplication::translate("ConfigDialog", "Small size", nullptr));
        sizeMedium->setText(QCoreApplication::translate("ConfigDialog", "Medium size", nullptr));
        sizeBig->setText(QCoreApplication::translate("ConfigDialog", "Big size", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(mouseTab), QCoreApplication::translate("ConfigDialog", "Cursor", nullptr));
        theme_pB_blackTheme->setText(QString());
        theme_pB_whiteTheme->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(theme_tab), QCoreApplication::translate("ConfigDialog", "Theme", nullptr));
        log_check_available->setText(QCoreApplication::translate("ConfigDialog", "Use logs to track sessions.", nullptr));
        log_label_timeExpire->setText(QCoreApplication::translate("ConfigDialog", "Expire log time:", nullptr));
        log_label_timeExpireUnit->setText(QCoreApplication::translate("ConfigDialog", "Time Unit", nullptr));
        log_label_timeExpireNumber->setText(QCoreApplication::translate("ConfigDialog", "Number of ", nullptr));
        log_label_maxLog->setText(QCoreApplication::translate("ConfigDialog", "Maximum allowed number of active log:", nullptr));
        log_label_reader->setText(QCoreApplication::translate("ConfigDialog", "Previous log:", nullptr));
#if QT_CONFIG(tooltip)
        log_pb_reader->setToolTip(QCoreApplication::translate("ConfigDialog", "Change the log folder", nullptr));
#endif // QT_CONFIG(tooltip)
        log_pb_reader->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(log_tab), QCoreApplication::translate("ConfigDialog", "Log Configuration", nullptr));
        setting_pb_export->setText(QCoreApplication::translate("ConfigDialog", "Export Settings", nullptr));
        setting_pb_import->setText(QCoreApplication::translate("ConfigDialog", "Import Settings", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(settings_tab), QCoreApplication::translate("ConfigDialog", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigDialog: public Ui_ConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOG_H
