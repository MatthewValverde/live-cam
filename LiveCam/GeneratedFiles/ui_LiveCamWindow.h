/********************************************************************************
** Form generated from reading UI file 'LiveCamWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIVECAMWINDOW_H
#define UI_LIVECAMWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LiveCamWindow
{
public:
    QAction *actionSettings;
    QAction *actionExit;
    QAction *actionDocumentation;
    QAction *actionSupport;
    QAction *actionFinal_Output_Window;
    QAction *actionVideo_Output_Window;
    QAction *actionRaw_Video_Settings;
    QAction *actionComposite_Video_Settings;
    QAction *actionEffect_settings;
    QWidget *window;
    QGridLayout *gridLayout_window;
    QStackedWidget *pages;
    QWidget *mainPage;
    QVBoxLayout *verticalLayout_mainPage;
    QWidget *head;
    QHBoxLayout *gridLayout_head;
    QWidget *logo_left;
    QGridLayout *gridLayout_logo_left;
    QSpacerItem *logo_spacer;
    QWidget *logo_right;
    QGridLayout *gridLayout_logo_right;
    QWidget *body;
    QGridLayout *gridLayout_body;
    QWidget *bodyLeft;
    QGridLayout *gridLayout;
    QWidget *devices_widget;
    QHBoxLayout *horizontalLayout_devices_widget;
    QLabel *devices_label;
    QComboBox *devices_comboBox;
    QWidget *widget_raw_frame;
    QWidget *buttons_widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_startFeedLeft;
    QSpacerItem *verticalSpacer;
    QPushButton *outputButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *btn_startEffectLeft_Container;
    QGridLayout *gridLayout_2;
    QPushButton *btn_startEffectLeft;
    QWidget *widget_composite_frame;
    QWidget *bodyRight;
    QGridLayout *gridLayout_bodyRight;
    QWidget *modules_widget;
    QGridLayout *gridLayout_modules_widget;
    QLabel *label_current_filter;
    QWidget *modules_list;
    QGridLayout *gridLayout_modules_list;
    QScrollArea *modules_scrollArea;
    QWidget *modules_content;
    QGridLayout *gridLayout_modules_content;
    QWidget *filters_widget;
    QGridLayout *gridLayout_filters_widget;
    QWidget *top_buttons;
    QHBoxLayout *horizontalLayout;
    QLabel *filters_label;
    QWidget *editor_buttons;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *create_filter;
    QPushButton *edit_filter;
    QPushButton *delete_filter;
    QPushButton *import_filter;
    QPushButton *takeButton;
    QWidget *filters_list;
    QGridLayout *gridLayout_filter_list;
    QScrollArea *filters_scrollArea;
    QWidget *filters_content;
    QGridLayout *gridLayout_filters_content;

    void setupUi(QMainWindow *LiveCamWindow)
    {
        if (LiveCamWindow->objectName().isEmpty())
            LiveCamWindow->setObjectName(QStringLiteral("LiveCamWindow"));
        LiveCamWindow->resize(1062, 695);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LiveCamWindow->sizePolicy().hasHeightForWidth());
        LiveCamWindow->setSizePolicy(sizePolicy);
        LiveCamWindow->setMouseTracking(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/AppIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        LiveCamWindow->setWindowIcon(icon);
        actionSettings = new QAction(LiveCamWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionExit = new QAction(LiveCamWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionDocumentation = new QAction(LiveCamWindow);
        actionDocumentation->setObjectName(QStringLiteral("actionDocumentation"));
        actionSupport = new QAction(LiveCamWindow);
        actionSupport->setObjectName(QStringLiteral("actionSupport"));
        actionFinal_Output_Window = new QAction(LiveCamWindow);
        actionFinal_Output_Window->setObjectName(QStringLiteral("actionFinal_Output_Window"));
        actionVideo_Output_Window = new QAction(LiveCamWindow);
        actionVideo_Output_Window->setObjectName(QStringLiteral("actionVideo_Output_Window"));
        actionRaw_Video_Settings = new QAction(LiveCamWindow);
        actionRaw_Video_Settings->setObjectName(QStringLiteral("actionRaw_Video_Settings"));
        actionComposite_Video_Settings = new QAction(LiveCamWindow);
        actionComposite_Video_Settings->setObjectName(QStringLiteral("actionComposite_Video_Settings"));
        actionEffect_settings = new QAction(LiveCamWindow);
        actionEffect_settings->setObjectName(QStringLiteral("actionEffect_settings"));
        window = new QWidget(LiveCamWindow);
        window->setObjectName(QStringLiteral("window"));
        sizePolicy.setHeightForWidth(window->sizePolicy().hasHeightForWidth());
        window->setSizePolicy(sizePolicy);
        window->setMouseTracking(true);
        gridLayout_window = new QGridLayout(window);
        gridLayout_window->setSpacing(0);
        gridLayout_window->setContentsMargins(11, 11, 11, 11);
        gridLayout_window->setObjectName(QStringLiteral("gridLayout_window"));
        gridLayout_window->setContentsMargins(0, 0, 0, 0);
        pages = new QStackedWidget(window);
        pages->setObjectName(QStringLiteral("pages"));
        pages->setMouseTracking(true);
        pages->setStyleSheet(QStringLiteral(""));
        mainPage = new QWidget();
        mainPage->setObjectName(QStringLiteral("mainPage"));
        sizePolicy.setHeightForWidth(mainPage->sizePolicy().hasHeightForWidth());
        mainPage->setSizePolicy(sizePolicy);
        mainPage->setMouseTracking(true);
        mainPage->setStyleSheet(QLatin1String("QWidget {\n"
"	border: none;\n"
"	outline: none;\n"
"	font: 63 14pt \"Segoe UI Semibold\";\n"
"}\n"
"\n"
"QWidget#mainPage {\n"
"border-image: url(:/images/BG.png);\n"
"}\n"
"\n"
"QComboBox {\n"
"	background-color: rgb(0, 161, 216);\n"
"    border-radius: 4px;\n"
"\n"
"    height: 40px;\n"
"    width: 100px;\n"
"    color: white;  \n"
"}\n"
"\n"
"QComboBox:!enabled {\n"
"	background-color: rgb(200, 200, 200);\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"	background-color: rgb(10, 171, 226);\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"image: url(:/images/arrow.png);\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    border: none;\n"
"    padding-right: 10px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item {\n"
"    min-height: 40px;\n"
"    min-width: 80px;\n"
"    color: white;\n"
"	background-color: rgb(10, 171, 226);\n"
"    outline: 0;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item:selected {\n"
"	background-color:  rgb(20, 191, 246);\n"
"}\n"
"\n"
"QLabel {\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton {\n"
"	back"
                        "ground-color: rgb(200, 200, 200);\n"
"\n"
"    border: none;\n"
"    border-radius: 4px;\n"
"    height: 40px;\n"
"    width: 100px;\n"
"    color: white;\n"
"    outline: 0;\n"
"}\n"
"\n"
"QPushButton:enabled {\n"
"	background-color: rgb(0, 161, 216); \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(30, 191, 236);\n"
"}\n"
"\n"
"QScrollBar {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"     border: none;\n"
"     background: none;\n"
" }\n"
" QScrollBar::add-line:vertical {\n"
"     border: none;\n"
"     background: none;\n"
" }\n"
"\n"
" QScrollBar::sub-line:vertical {\n"
"     border: none;\n"
"     background: none;\n"
" }\n"
" QScrollBar::up-arrow:vertical {\n"
"	 border-image: url(:/images/BTN UP.png);\n"
"     background: none;\n"
" }\n"
"\n"
"QScrollBar::down-arrow:vertical {\n"
"	 border-image: url(:/images/BTN DOWN.png);\n"
"     background: none;\n"
" }\n"
"\n"
" QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"     background: none;\n"
""
                        " }"));
        verticalLayout_mainPage = new QVBoxLayout(mainPage);
        verticalLayout_mainPage->setSpacing(6);
        verticalLayout_mainPage->setContentsMargins(11, 11, 11, 11);
        verticalLayout_mainPage->setObjectName(QStringLiteral("verticalLayout_mainPage"));
        head = new QWidget(mainPage);
        head->setObjectName(QStringLiteral("head"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(head->sizePolicy().hasHeightForWidth());
        head->setSizePolicy(sizePolicy1);
        head->setMinimumSize(QSize(0, 0));
        gridLayout_head = new QHBoxLayout(head);
        gridLayout_head->setSpacing(6);
        gridLayout_head->setContentsMargins(11, 11, 11, 11);
        gridLayout_head->setObjectName(QStringLiteral("gridLayout_head"));
        gridLayout_head->setContentsMargins(15, -1, -1, -1);
        logo_left = new QWidget(head);
        logo_left->setObjectName(QStringLiteral("logo_left"));
        sizePolicy.setHeightForWidth(logo_left->sizePolicy().hasHeightForWidth());
        logo_left->setSizePolicy(sizePolicy);
        logo_left->setMinimumSize(QSize(500, 150));
        logo_left->setMaximumSize(QSize(16777215, 16777215));
        logo_left->setStyleSheet(QStringLiteral("image: url(:/images/LOGO.png);"));
        gridLayout_logo_left = new QGridLayout(logo_left);
        gridLayout_logo_left->setSpacing(0);
        gridLayout_logo_left->setContentsMargins(11, 11, 11, 11);
        gridLayout_logo_left->setObjectName(QStringLiteral("gridLayout_logo_left"));
        gridLayout_logo_left->setContentsMargins(0, 0, 0, 0);

        gridLayout_head->addWidget(logo_left);

        logo_spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_head->addItem(logo_spacer);

        logo_right = new QWidget(head);
        logo_right->setObjectName(QStringLiteral("logo_right"));
        sizePolicy.setHeightForWidth(logo_right->sizePolicy().hasHeightForWidth());
        logo_right->setSizePolicy(sizePolicy);
        logo_right->setMinimumSize(QSize(500, 150));
        logo_right->setMaximumSize(QSize(16777215, 150));
        logo_right->setStyleSheet(QStringLiteral("image: url(:/images/SNAP BLAST ICON.png);"));
        gridLayout_logo_right = new QGridLayout(logo_right);
        gridLayout_logo_right->setSpacing(0);
        gridLayout_logo_right->setContentsMargins(11, 11, 11, 11);
        gridLayout_logo_right->setObjectName(QStringLiteral("gridLayout_logo_right"));
        gridLayout_logo_right->setContentsMargins(0, 0, 0, 0);

        gridLayout_head->addWidget(logo_right);


        verticalLayout_mainPage->addWidget(head);

        body = new QWidget(mainPage);
        body->setObjectName(QStringLiteral("body"));
        sizePolicy.setHeightForWidth(body->sizePolicy().hasHeightForWidth());
        body->setSizePolicy(sizePolicy);
        body->setMouseTracking(true);
        gridLayout_body = new QGridLayout(body);
        gridLayout_body->setSpacing(6);
        gridLayout_body->setContentsMargins(11, 11, 11, 11);
        gridLayout_body->setObjectName(QStringLiteral("gridLayout_body"));
        bodyLeft = new QWidget(body);
        bodyLeft->setObjectName(QStringLiteral("bodyLeft"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(5);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bodyLeft->sizePolicy().hasHeightForWidth());
        bodyLeft->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(bodyLeft);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        devices_widget = new QWidget(bodyLeft);
        devices_widget->setObjectName(QStringLiteral("devices_widget"));
        devices_widget->setMinimumSize(QSize(0, 0));
        horizontalLayout_devices_widget = new QHBoxLayout(devices_widget);
        horizontalLayout_devices_widget->setSpacing(0);
        horizontalLayout_devices_widget->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_devices_widget->setObjectName(QStringLiteral("horizontalLayout_devices_widget"));
        horizontalLayout_devices_widget->setContentsMargins(5, 5, 0, 5);
        devices_label = new QLabel(devices_widget);
        devices_label->setObjectName(QStringLiteral("devices_label"));
        devices_label->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Semibold"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(7);
        devices_label->setFont(font);

        horizontalLayout_devices_widget->addWidget(devices_label);

        devices_comboBox = new QComboBox(devices_widget);
        devices_comboBox->setObjectName(QStringLiteral("devices_comboBox"));
        devices_comboBox->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(devices_comboBox->sizePolicy().hasHeightForWidth());
        devices_comboBox->setSizePolicy(sizePolicy3);
        devices_comboBox->setMinimumSize(QSize(100, 40));
        devices_comboBox->setStyleSheet(QStringLiteral(""));

        horizontalLayout_devices_widget->addWidget(devices_comboBox);


        gridLayout->addWidget(devices_widget, 0, 0, 1, 1);

        widget_raw_frame = new QWidget(bodyLeft);
        widget_raw_frame->setObjectName(QStringLiteral("widget_raw_frame"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(5);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(widget_raw_frame->sizePolicy().hasHeightForWidth());
        widget_raw_frame->setSizePolicy(sizePolicy4);
        widget_raw_frame->setMinimumSize(QSize(200, 150));
        widget_raw_frame->setAcceptDrops(true);
        widget_raw_frame->setStyleSheet(QLatin1String("background: transparent;\n"
"border: 1px solid black;"));

        gridLayout->addWidget(widget_raw_frame, 1, 0, 1, 1);

        buttons_widget = new QWidget(bodyLeft);
        buttons_widget->setObjectName(QStringLiteral("buttons_widget"));
        sizePolicy.setHeightForWidth(buttons_widget->sizePolicy().hasHeightForWidth());
        buttons_widget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(buttons_widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(15, 0, 0, 0);
        btn_startFeedLeft = new QPushButton(buttons_widget);
        btn_startFeedLeft->setObjectName(QStringLiteral("btn_startFeedLeft"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btn_startFeedLeft->sizePolicy().hasHeightForWidth());
        btn_startFeedLeft->setSizePolicy(sizePolicy5);
        btn_startFeedLeft->setMinimumSize(QSize(200, 0));

        verticalLayout_2->addWidget(btn_startFeedLeft);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        outputButton = new QPushButton(buttons_widget);
        outputButton->setObjectName(QStringLiteral("outputButton"));
        outputButton->setEnabled(false);
        outputButton->setStyleSheet(QLatin1String("QPushButton:checked { background-color: rgb(255, 30, 30)}\n"
"\n"
"QPushButton:checked:hover { background-color: rgb(255, 60, 60)}"));
        outputButton->setCheckable(true);

        verticalLayout_2->addWidget(outputButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        btn_startEffectLeft_Container = new QWidget(buttons_widget);
        btn_startEffectLeft_Container->setObjectName(QStringLiteral("btn_startEffectLeft_Container"));
        gridLayout_2 = new QGridLayout(btn_startEffectLeft_Container);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_startEffectLeft = new QPushButton(btn_startEffectLeft_Container);
        btn_startEffectLeft->setObjectName(QStringLiteral("btn_startEffectLeft"));
        btn_startEffectLeft->setEnabled(false);
        sizePolicy5.setHeightForWidth(btn_startEffectLeft->sizePolicy().hasHeightForWidth());
        btn_startEffectLeft->setSizePolicy(sizePolicy5);
        btn_startEffectLeft->setMinimumSize(QSize(200, 0));
        btn_startEffectLeft->setAcceptDrops(true);
        btn_startEffectLeft->setStyleSheet(QLatin1String("QPushButton:checked { background-color: rgb(255, 30, 30)}\n"
"\n"
"QPushButton:checked:hover { background-color: rgb(255, 60, 60)}\n"
"\n"
"QPushButton:!enabled { background-color: rgb(200, 200, 200)}"));
        btn_startEffectLeft->setCheckable(true);
        btn_startEffectLeft->setChecked(false);

        gridLayout_2->addWidget(btn_startEffectLeft, 0, 0, 1, 1);


        verticalLayout_2->addWidget(btn_startEffectLeft_Container);


        gridLayout->addWidget(buttons_widget, 1, 1, 2, 1);

        widget_composite_frame = new QWidget(bodyLeft);
        widget_composite_frame->setObjectName(QStringLiteral("widget_composite_frame"));
        sizePolicy4.setHeightForWidth(widget_composite_frame->sizePolicy().hasHeightForWidth());
        widget_composite_frame->setSizePolicy(sizePolicy4);
        widget_composite_frame->setMinimumSize(QSize(200, 150));
        widget_composite_frame->setAcceptDrops(true);
        widget_composite_frame->setStyleSheet(QLatin1String("background: transparent;\n"
"border: 1px solid black;"));

        gridLayout->addWidget(widget_composite_frame, 2, 0, 1, 1);


        gridLayout_body->addWidget(bodyLeft, 0, 0, 1, 1);

        bodyRight = new QWidget(body);
        bodyRight->setObjectName(QStringLiteral("bodyRight"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(2);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(bodyRight->sizePolicy().hasHeightForWidth());
        bodyRight->setSizePolicy(sizePolicy6);
        bodyRight->setMouseTracking(true);
        gridLayout_bodyRight = new QGridLayout(bodyRight);
        gridLayout_bodyRight->setSpacing(6);
        gridLayout_bodyRight->setContentsMargins(11, 11, 11, 11);
        gridLayout_bodyRight->setObjectName(QStringLiteral("gridLayout_bodyRight"));
        gridLayout_bodyRight->setVerticalSpacing(6);
        modules_widget = new QWidget(bodyRight);
        modules_widget->setObjectName(QStringLiteral("modules_widget"));
        modules_widget->setMinimumSize(QSize(0, 100));
        modules_widget->setMouseTracking(true);
        gridLayout_modules_widget = new QGridLayout(modules_widget);
        gridLayout_modules_widget->setSpacing(6);
        gridLayout_modules_widget->setContentsMargins(11, 11, 11, 11);
        gridLayout_modules_widget->setObjectName(QStringLiteral("gridLayout_modules_widget"));
        gridLayout_modules_widget->setHorizontalSpacing(0);
        gridLayout_modules_widget->setVerticalSpacing(6);
        gridLayout_modules_widget->setContentsMargins(0, 0, 0, 0);
        label_current_filter = new QLabel(modules_widget);
        label_current_filter->setObjectName(QStringLiteral("label_current_filter"));
        label_current_filter->setFont(font);
        label_current_filter->setMouseTracking(true);

        gridLayout_modules_widget->addWidget(label_current_filter, 0, 0, 1, 1);

        modules_list = new QWidget(modules_widget);
        modules_list->setObjectName(QStringLiteral("modules_list"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(modules_list->sizePolicy().hasHeightForWidth());
        modules_list->setSizePolicy(sizePolicy7);
        modules_list->setMinimumSize(QSize(385, 100));
        modules_list->setMouseTracking(true);
        modules_list->setStyleSheet(QLatin1String("QWidget#modules_list {\n"
"border-image: url(:/images/BTN FILTER ICONS.png);\n"
"}\n"
"\n"
"QPushButton {\n"
"background: transparent;\n"
"border-image: url(:/images/cell.png);\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"border-image: url(:/images/cell_checked.png);\n"
"}\n"
"\n"
""));
        gridLayout_modules_list = new QGridLayout(modules_list);
        gridLayout_modules_list->setSpacing(6);
        gridLayout_modules_list->setContentsMargins(11, 11, 11, 11);
        gridLayout_modules_list->setObjectName(QStringLiteral("gridLayout_modules_list"));
        modules_scrollArea = new QScrollArea(modules_list);
        modules_scrollArea->setObjectName(QStringLiteral("modules_scrollArea"));
        QSizePolicy sizePolicy8(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(modules_scrollArea->sizePolicy().hasHeightForWidth());
        modules_scrollArea->setSizePolicy(sizePolicy8);
        modules_scrollArea->setMouseTracking(true);
        modules_scrollArea->setStyleSheet(QStringLiteral("	background: transparent;"));
        modules_scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        modules_scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        modules_scrollArea->setWidgetResizable(true);
        modules_scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        modules_content = new QWidget();
        modules_content->setObjectName(QStringLiteral("modules_content"));
        modules_content->setGeometry(QRect(0, 0, 342, 163));
        modules_content->setMouseTracking(true);
        modules_content->setStyleSheet(QStringLiteral(""));
        gridLayout_modules_content = new QGridLayout(modules_content);
        gridLayout_modules_content->setSpacing(6);
        gridLayout_modules_content->setContentsMargins(11, 11, 11, 11);
        gridLayout_modules_content->setObjectName(QStringLiteral("gridLayout_modules_content"));
        modules_scrollArea->setWidget(modules_content);

        gridLayout_modules_list->addWidget(modules_scrollArea, 0, 0, 1, 1);


        gridLayout_modules_widget->addWidget(modules_list, 1, 0, 1, 1);


        gridLayout_bodyRight->addWidget(modules_widget, 1, 0, 1, 2);

        filters_widget = new QWidget(bodyRight);
        filters_widget->setObjectName(QStringLiteral("filters_widget"));
        filters_widget->setMinimumSize(QSize(0, 100));
        gridLayout_filters_widget = new QGridLayout(filters_widget);
        gridLayout_filters_widget->setSpacing(7);
        gridLayout_filters_widget->setContentsMargins(11, 11, 11, 11);
        gridLayout_filters_widget->setObjectName(QStringLiteral("gridLayout_filters_widget"));
        gridLayout_filters_widget->setContentsMargins(0, 0, 0, 0);
        top_buttons = new QWidget(filters_widget);
        top_buttons->setObjectName(QStringLiteral("top_buttons"));
        horizontalLayout = new QHBoxLayout(top_buttons);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        filters_label = new QLabel(top_buttons);
        filters_label->setObjectName(QStringLiteral("filters_label"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(filters_label->sizePolicy().hasHeightForWidth());
        filters_label->setSizePolicy(sizePolicy9);
        filters_label->setFont(font);

        horizontalLayout->addWidget(filters_label);

        editor_buttons = new QWidget(top_buttons);
        editor_buttons->setObjectName(QStringLiteral("editor_buttons"));
        QSizePolicy sizePolicy10(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(editor_buttons->sizePolicy().hasHeightForWidth());
        editor_buttons->setSizePolicy(sizePolicy10);
        horizontalLayout_2 = new QHBoxLayout(editor_buttons);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        create_filter = new QPushButton(editor_buttons);
        create_filter->setObjectName(QStringLiteral("create_filter"));
        create_filter->setEnabled(false);
        QSizePolicy sizePolicy11(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(create_filter->sizePolicy().hasHeightForWidth());
        create_filter->setSizePolicy(sizePolicy11);
        create_filter->setMinimumSize(QSize(0, 0));
        create_filter->setStyleSheet(QLatin1String("QPushButton {\n"
"    height: 30;\n"
"    width: 30;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/Create.png"), QSize(), QIcon::Normal, QIcon::Off);
        create_filter->setIcon(icon1);
        create_filter->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(create_filter);

        edit_filter = new QPushButton(editor_buttons);
        edit_filter->setObjectName(QStringLiteral("edit_filter"));
        edit_filter->setEnabled(false);
        sizePolicy11.setHeightForWidth(edit_filter->sizePolicy().hasHeightForWidth());
        edit_filter->setSizePolicy(sizePolicy11);
        edit_filter->setMinimumSize(QSize(0, 0));
        edit_filter->setStyleSheet(QLatin1String("QPushButton {\n"
"    height: 30;\n"
"    width: 30;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/Edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit_filter->setIcon(icon2);
        edit_filter->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(edit_filter);

        delete_filter = new QPushButton(editor_buttons);
        delete_filter->setObjectName(QStringLiteral("delete_filter"));
        delete_filter->setEnabled(false);
        sizePolicy11.setHeightForWidth(delete_filter->sizePolicy().hasHeightForWidth());
        delete_filter->setSizePolicy(sizePolicy11);
        delete_filter->setMinimumSize(QSize(0, 0));
        delete_filter->setStyleSheet(QLatin1String("QPushButton {\n"
"    height: 30;\n"
"    width: 30;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/Delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        delete_filter->setIcon(icon3);
        delete_filter->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(delete_filter);

        import_filter = new QPushButton(editor_buttons);
        import_filter->setObjectName(QStringLiteral("import_filter"));
        import_filter->setEnabled(true);
        sizePolicy11.setHeightForWidth(import_filter->sizePolicy().hasHeightForWidth());
        import_filter->setSizePolicy(sizePolicy11);
        import_filter->setMinimumSize(QSize(0, 0));
        import_filter->setStyleSheet(QLatin1String("QPushButton {\n"
"    height: 30;\n"
"    width: 30;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/ImportExport.png"), QSize(), QIcon::Normal, QIcon::Off);
        import_filter->setIcon(icon4);
        import_filter->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(import_filter);


        horizontalLayout->addWidget(editor_buttons);

        takeButton = new QPushButton(top_buttons);
        takeButton->setObjectName(QStringLiteral("takeButton"));
        takeButton->setEnabled(false);
        sizePolicy11.setHeightForWidth(takeButton->sizePolicy().hasHeightForWidth());
        takeButton->setSizePolicy(sizePolicy11);
        takeButton->setMinimumSize(QSize(130, 0));
        takeButton->setStyleSheet(QLatin1String("QPushButton:enabled { background-color: rgb(0, 161, 0); }\n"
"\n"
"QPushButton:checked { background-color: rgb(255, 30, 30)}\n"
"\n"
"QPushButton:checked:hover { background-color: rgb(255, 60, 60)}\n"
"\n"
"QPushButton:hover { background-color:rgb(0, 185, 0);}"));
        takeButton->setCheckable(true);
        takeButton->setChecked(false);

        horizontalLayout->addWidget(takeButton);


        gridLayout_filters_widget->addWidget(top_buttons, 0, 0, 1, 1);

        filters_list = new QWidget(filters_widget);
        filters_list->setObjectName(QStringLiteral("filters_list"));
        sizePolicy7.setHeightForWidth(filters_list->sizePolicy().hasHeightForWidth());
        filters_list->setSizePolicy(sizePolicy7);
        filters_list->setMinimumSize(QSize(385, 100));
        filters_list->setStyleSheet(QLatin1String("QWidget#filters_list {\n"
"border-image: url(:/images/BTN FILTER ICONS.png);\n"
"}\n"
"\n"
"QPushButton {\n"
"background: transparent;\n"
"border-image: url(:/images/cell.png);\n"
"}\n"
"\n"
"QPushButton::checked {\n"
"border-image: url(:/images/cell_checked.png);\n"
"}\n"
"\n"
""));
        gridLayout_filter_list = new QGridLayout(filters_list);
        gridLayout_filter_list->setSpacing(6);
        gridLayout_filter_list->setContentsMargins(11, 11, 11, 11);
        gridLayout_filter_list->setObjectName(QStringLiteral("gridLayout_filter_list"));
        filters_scrollArea = new QScrollArea(filters_list);
        filters_scrollArea->setObjectName(QStringLiteral("filters_scrollArea"));
        sizePolicy8.setHeightForWidth(filters_scrollArea->sizePolicy().hasHeightForWidth());
        filters_scrollArea->setSizePolicy(sizePolicy8);
        filters_scrollArea->setStyleSheet(QStringLiteral("QWidget { background: transparent; }"));
        filters_scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        filters_scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        filters_scrollArea->setWidgetResizable(true);
        filters_scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        filters_content = new QWidget();
        filters_content->setObjectName(QStringLiteral("filters_content"));
        filters_content->setGeometry(QRect(0, 0, 342, 153));
        filters_content->setStyleSheet(QStringLiteral(""));
        gridLayout_filters_content = new QGridLayout(filters_content);
        gridLayout_filters_content->setSpacing(6);
        gridLayout_filters_content->setContentsMargins(11, 11, 11, 11);
        gridLayout_filters_content->setObjectName(QStringLiteral("gridLayout_filters_content"));
        filters_scrollArea->setWidget(filters_content);

        gridLayout_filter_list->addWidget(filters_scrollArea, 1, 0, 1, 1);


        gridLayout_filters_widget->addWidget(filters_list, 1, 0, 1, 2);


        gridLayout_bodyRight->addWidget(filters_widget, 0, 0, 1, 2);


        gridLayout_body->addWidget(bodyRight, 0, 1, 1, 1);


        verticalLayout_mainPage->addWidget(body);

        pages->addWidget(mainPage);

        gridLayout_window->addWidget(pages, 0, 0, 1, 1);

        LiveCamWindow->setCentralWidget(window);

        retranslateUi(LiveCamWindow);

        pages->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LiveCamWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LiveCamWindow)
    {
        LiveCamWindow->setWindowTitle(QApplication::translate("LiveCamWindow", "Filter Fan Cam Window", nullptr));
        actionSettings->setText(QApplication::translate("LiveCamWindow", "Settings", nullptr));
        actionExit->setText(QApplication::translate("LiveCamWindow", "Exit", nullptr));
        actionDocumentation->setText(QApplication::translate("LiveCamWindow", "Documentation", nullptr));
        actionSupport->setText(QApplication::translate("LiveCamWindow", "Support", nullptr));
        actionFinal_Output_Window->setText(QApplication::translate("LiveCamWindow", "Video Output Window", nullptr));
        actionVideo_Output_Window->setText(QApplication::translate("LiveCamWindow", "Video Output Window", nullptr));
        actionRaw_Video_Settings->setText(QApplication::translate("LiveCamWindow", "Raw Video Settings", nullptr));
        actionComposite_Video_Settings->setText(QApplication::translate("LiveCamWindow", "Composite Video Settings", nullptr));
        actionEffect_settings->setText(QApplication::translate("LiveCamWindow", "Effect settings", nullptr));
        devices_label->setText(QApplication::translate("LiveCamWindow", "Devices   ", nullptr));
        btn_startFeedLeft->setText(QApplication::translate("LiveCamWindow", "Start Video", nullptr));
        outputButton->setText(QApplication::translate("LiveCamWindow", "Start Output", nullptr));
        btn_startEffectLeft->setText(QApplication::translate("LiveCamWindow", "Track Faces", nullptr));
        label_current_filter->setText(QApplication::translate("LiveCamWindow", "Face Paint", nullptr));
        filters_label->setText(QApplication::translate("LiveCamWindow", "Filters", nullptr));
        create_filter->setText(QString());
        edit_filter->setText(QString());
        delete_filter->setText(QString());
        import_filter->setText(QString());
        takeButton->setText(QApplication::translate("LiveCamWindow", "Show Filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LiveCamWindow: public Ui_LiveCamWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIVECAMWINDOW_H
