/********************************************************************************
** Form generated from reading UI file 'EditorWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORWINDOW_H
#define UI_EDITORWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorWindow
{
public:
    QWidget *window;
    QVBoxLayout *window_verticalLayout;
    QWidget *topSettings_container;
    QVBoxLayout *topSettings_verticalLayout;
    QLabel *filterName_label;
    QLineEdit *filterName_edit;
    QWidget *filterIcon_container;
    QHBoxLayout *filterIcon_horizontalLayout;
    QLabel *filterIcon_label;
    QPushButton *filterIcon_button;
    QPushButton *filterIcon_delete;
    QTabWidget *models_tabWidget;
    QWidget *newTab;
    QHBoxLayout *new_tab_horizontalLayout;
    QSpacerItem *horizontalSpacer_Left;
    QWidget *new_model_switch;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_Top;
    QPushButton *new_3D;
    QPushButton *new_LipsJoint;
    QPushButton *new_emoji;
    QPushButton *new_animatedEmoji;
    QPushButton *new_facePaint;
    QSpacerItem *verticalSpacer_Bottom;
    QSpacerItem *horizontalSpacer_Right;
    QWidget *mainButtons_container;
    QHBoxLayout *mainButtons_horizontalLayout;
    QPushButton *save_button;
    QPushButton *export_button;
    QPushButton *import_button;
    QPushButton *hide_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EditorWindow)
    {
        if (EditorWindow->objectName().isEmpty())
            EditorWindow->setObjectName(QStringLiteral("EditorWindow"));
        EditorWindow->setWindowModality(Qt::NonModal);
        EditorWindow->resize(463, 473);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditorWindow->sizePolicy().hasHeightForWidth());
        EditorWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Semibold"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        EditorWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/AppIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditorWindow->setWindowIcon(icon);
        EditorWindow->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"background-color: transparent; color: rgb(255, 255, 255); padding: 1\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"border-style: solid\n"
"}\n"
"\n"
"QMainWindow#EditorWindow\n"
"{\n"
"border-image: url(:/res2/images/BG-solid.png);\n"
"}"));
        EditorWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        EditorWindow->setDocumentMode(false);
        window = new QWidget(EditorWindow);
        window->setObjectName(QStringLiteral("window"));
        sizePolicy.setHeightForWidth(window->sizePolicy().hasHeightForWidth());
        window->setSizePolicy(sizePolicy);
        window->setFont(font);
        window->setStyleSheet(QLatin1String("QWidget#window\n"
"{\n"
"background-color: rgba(0,0,0,0)\n"
"}"));
        window_verticalLayout = new QVBoxLayout(window);
        window_verticalLayout->setObjectName(QStringLiteral("window_verticalLayout"));
        topSettings_container = new QWidget(window);
        topSettings_container->setObjectName(QStringLiteral("topSettings_container"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topSettings_container->sizePolicy().hasHeightForWidth());
        topSettings_container->setSizePolicy(sizePolicy1);
        topSettings_verticalLayout = new QVBoxLayout(topSettings_container);
        topSettings_verticalLayout->setSpacing(5);
        topSettings_verticalLayout->setObjectName(QStringLiteral("topSettings_verticalLayout"));
        topSettings_verticalLayout->setContentsMargins(0, 0, 0, 0);
        filterName_label = new QLabel(topSettings_container);
        filterName_label->setObjectName(QStringLiteral("filterName_label"));
        sizePolicy1.setHeightForWidth(filterName_label->sizePolicy().hasHeightForWidth());
        filterName_label->setSizePolicy(sizePolicy1);
        filterName_label->setFont(font);
        filterName_label->setStyleSheet(QStringLiteral(""));
        filterName_label->setLineWidth(1);
        filterName_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        filterName_label->setMargin(0);

        topSettings_verticalLayout->addWidget(filterName_label);

        filterName_edit = new QLineEdit(topSettings_container);
        filterName_edit->setObjectName(QStringLiteral("filterName_edit"));
        sizePolicy1.setHeightForWidth(filterName_edit->sizePolicy().hasHeightForWidth());
        filterName_edit->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Semibold"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        filterName_edit->setFont(font1);
        filterName_edit->setFrame(true);
        filterName_edit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        topSettings_verticalLayout->addWidget(filterName_edit);

        filterIcon_container = new QWidget(topSettings_container);
        filterIcon_container->setObjectName(QStringLiteral("filterIcon_container"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(filterIcon_container->sizePolicy().hasHeightForWidth());
        filterIcon_container->setSizePolicy(sizePolicy2);
        filterIcon_container->setStyleSheet(QStringLiteral(""));
        filterIcon_horizontalLayout = new QHBoxLayout(filterIcon_container);
        filterIcon_horizontalLayout->setSpacing(5);
        filterIcon_horizontalLayout->setObjectName(QStringLiteral("filterIcon_horizontalLayout"));
        filterIcon_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        filterIcon_label = new QLabel(filterIcon_container);
        filterIcon_label->setObjectName(QStringLiteral("filterIcon_label"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(filterIcon_label->sizePolicy().hasHeightForWidth());
        filterIcon_label->setSizePolicy(sizePolicy3);
        filterIcon_label->setFont(font);
        filterIcon_label->setStyleSheet(QStringLiteral(""));
        filterIcon_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        filterIcon_label->setMargin(0);

        filterIcon_horizontalLayout->addWidget(filterIcon_label);

        filterIcon_button = new QPushButton(filterIcon_container);
        filterIcon_button->setObjectName(QStringLiteral("filterIcon_button"));
        sizePolicy3.setHeightForWidth(filterIcon_button->sizePolicy().hasHeightForWidth());
        filterIcon_button->setSizePolicy(sizePolicy3);
        filterIcon_button->setMaximumSize(QSize(32, 32));
        filterIcon_button->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/FileButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        filterIcon_button->setIcon(icon1);
        filterIcon_button->setIconSize(QSize(32, 32));
        filterIcon_button->setFlat(true);

        filterIcon_horizontalLayout->addWidget(filterIcon_button);

        filterIcon_delete = new QPushButton(filterIcon_container);
        filterIcon_delete->setObjectName(QStringLiteral("filterIcon_delete"));
        sizePolicy3.setHeightForWidth(filterIcon_delete->sizePolicy().hasHeightForWidth());
        filterIcon_delete->setSizePolicy(sizePolicy3);
        filterIcon_delete->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/DeleteButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        filterIcon_delete->setIcon(icon2);
        filterIcon_delete->setIconSize(QSize(32, 32));

        filterIcon_horizontalLayout->addWidget(filterIcon_delete);


        topSettings_verticalLayout->addWidget(filterIcon_container, 0, Qt::AlignLeft);


        window_verticalLayout->addWidget(topSettings_container, 0, Qt::AlignTop);

        models_tabWidget = new QTabWidget(window);
        models_tabWidget->setObjectName(QStringLiteral("models_tabWidget"));
        models_tabWidget->setEnabled(true);
        models_tabWidget->setFont(font1);
        models_tabWidget->setAutoFillBackground(false);
        models_tabWidget->setStyleSheet(QLatin1String("QTabWidget, QTabWidget::pane, QTabBar {background-color: transparent;}\n"
"\n"
"QTabBar { color: white; }"));
        models_tabWidget->setTabShape(QTabWidget::Triangular);
        models_tabWidget->setElideMode(Qt::ElideNone);
        newTab = new QWidget();
        newTab->setObjectName(QStringLiteral("newTab"));
        newTab->setEnabled(true);
        newTab->setStyleSheet(QLatin1String("QWidget#newTab { border-image: url(:/res2/images/BG-cropped.png); }\n"
"\n"
"QLabel\n"
"{\n"
"padding: 1\n"
"}\n"
"\n"
"QSpinBox, QDoubleSpinBox { background-color: white; }\n"
"\n"
"QPushButton\n"
"{\n"
"background-color: rgb(220, 220, 220); color: rgb(255, 255, 255);  padding: 4; border-radius: 6;\n"
"}\n"
"\n"
"QPushButton:enabled {\n"
"	background-color: rgb(0, 161, 216); \n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: rgb(30, 191, 236);\n"
"}"));
        new_tab_horizontalLayout = new QHBoxLayout(newTab);
        new_tab_horizontalLayout->setSpacing(0);
        new_tab_horizontalLayout->setObjectName(QStringLiteral("new_tab_horizontalLayout"));
        horizontalSpacer_Left = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        new_tab_horizontalLayout->addItem(horizontalSpacer_Left);

        new_model_switch = new QWidget(newTab);
        new_model_switch->setObjectName(QStringLiteral("new_model_switch"));
        new_model_switch->setStyleSheet(QStringLiteral(" padding: 0; padding-left: 10; padding-right: 10; border-radius: 7px; "));
        verticalLayout = new QVBoxLayout(new_model_switch);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_Top = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_Top);

        new_3D = new QPushButton(new_model_switch);
        new_3D->setObjectName(QStringLiteral("new_3D"));
        new_3D->setEnabled(true);
        sizePolicy1.setHeightForWidth(new_3D->sizePolicy().hasHeightForWidth());
        new_3D->setSizePolicy(sizePolicy1);
        new_3D->setMinimumSize(QSize(0, 35));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI Semibold"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        new_3D->setFont(font2);
        new_3D->setAutoFillBackground(false);
        new_3D->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(new_3D);

        new_LipsJoint = new QPushButton(new_model_switch);
        new_LipsJoint->setObjectName(QStringLiteral("new_LipsJoint"));
        new_LipsJoint->setEnabled(true);
        sizePolicy1.setHeightForWidth(new_LipsJoint->sizePolicy().hasHeightForWidth());
        new_LipsJoint->setSizePolicy(sizePolicy1);
        new_LipsJoint->setMinimumSize(QSize(0, 35));
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe UI Semibold"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        new_LipsJoint->setFont(font3);
        new_LipsJoint->setAutoFillBackground(false);
        new_LipsJoint->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(new_LipsJoint);

        new_emoji = new QPushButton(new_model_switch);
        new_emoji->setObjectName(QStringLiteral("new_emoji"));
        new_emoji->setEnabled(true);
        sizePolicy1.setHeightForWidth(new_emoji->sizePolicy().hasHeightForWidth());
        new_emoji->setSizePolicy(sizePolicy1);
        new_emoji->setMinimumSize(QSize(0, 35));
        new_emoji->setFont(font3);
        new_emoji->setAutoFillBackground(false);
        new_emoji->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(new_emoji);

        new_animatedEmoji = new QPushButton(new_model_switch);
        new_animatedEmoji->setObjectName(QStringLiteral("new_animatedEmoji"));
        new_animatedEmoji->setEnabled(false);
        sizePolicy1.setHeightForWidth(new_animatedEmoji->sizePolicy().hasHeightForWidth());
        new_animatedEmoji->setSizePolicy(sizePolicy1);
        new_animatedEmoji->setMinimumSize(QSize(0, 35));
        new_animatedEmoji->setFont(font3);
        new_animatedEmoji->setAutoFillBackground(false);
        new_animatedEmoji->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(new_animatedEmoji);

        new_facePaint = new QPushButton(new_model_switch);
        new_facePaint->setObjectName(QStringLiteral("new_facePaint"));
        new_facePaint->setEnabled(false);
        sizePolicy1.setHeightForWidth(new_facePaint->sizePolicy().hasHeightForWidth());
        new_facePaint->setSizePolicy(sizePolicy1);
        new_facePaint->setMinimumSize(QSize(0, 35));
        new_facePaint->setFont(font3);
        new_facePaint->setAutoFillBackground(false);
        new_facePaint->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(new_facePaint);

        verticalSpacer_Bottom = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_Bottom);

        new_animatedEmoji->raise();
        new_3D->raise();
        new_emoji->raise();
        new_LipsJoint->raise();
        new_facePaint->raise();

        new_tab_horizontalLayout->addWidget(new_model_switch);

        horizontalSpacer_Right = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        new_tab_horizontalLayout->addItem(horizontalSpacer_Right);

        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/AddButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        models_tabWidget->addTab(newTab, icon3, QString());

        window_verticalLayout->addWidget(models_tabWidget);

        mainButtons_container = new QWidget(window);
        mainButtons_container->setObjectName(QStringLiteral("mainButtons_container"));
        mainButtons_container->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color: rgb(220, 220, 220); color: rgb(255, 255, 255);  padding: 4; border-radius: 6;\n"
"}\n"
"\n"
"QPushButton:enabled {\n"
"	background-color: rgb(0, 161, 216); \n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: rgb(30, 191, 236);\n"
"}"));
        mainButtons_horizontalLayout = new QHBoxLayout(mainButtons_container);
        mainButtons_horizontalLayout->setSpacing(30);
        mainButtons_horizontalLayout->setObjectName(QStringLiteral("mainButtons_horizontalLayout"));
        mainButtons_horizontalLayout->setContentsMargins(15, 0, 15, 5);
        save_button = new QPushButton(mainButtons_container);
        save_button->setObjectName(QStringLiteral("save_button"));
        save_button->setEnabled(false);
        sizePolicy1.setHeightForWidth(save_button->sizePolicy().hasHeightForWidth());
        save_button->setSizePolicy(sizePolicy1);
        save_button->setMinimumSize(QSize(0, 35));
        save_button->setFont(font3);
        save_button->setAutoFillBackground(false);
        save_button->setStyleSheet(QStringLiteral(""));

        mainButtons_horizontalLayout->addWidget(save_button);

        export_button = new QPushButton(mainButtons_container);
        export_button->setObjectName(QStringLiteral("export_button"));
        export_button->setEnabled(false);
        sizePolicy1.setHeightForWidth(export_button->sizePolicy().hasHeightForWidth());
        export_button->setSizePolicy(sizePolicy1);
        export_button->setMinimumSize(QSize(0, 35));
        export_button->setFont(font3);
        export_button->setAutoFillBackground(false);
        export_button->setStyleSheet(QStringLiteral(""));

        mainButtons_horizontalLayout->addWidget(export_button);

        import_button = new QPushButton(mainButtons_container);
        import_button->setObjectName(QStringLiteral("import_button"));
        import_button->setEnabled(true);
        sizePolicy1.setHeightForWidth(import_button->sizePolicy().hasHeightForWidth());
        import_button->setSizePolicy(sizePolicy1);
        import_button->setMinimumSize(QSize(0, 35));
        import_button->setFont(font3);
        import_button->setAutoFillBackground(false);
        import_button->setStyleSheet(QStringLiteral(""));

        mainButtons_horizontalLayout->addWidget(import_button);

        hide_button = new QPushButton(mainButtons_container);
        hide_button->setObjectName(QStringLiteral("hide_button"));
        hide_button->setEnabled(true);
        sizePolicy1.setHeightForWidth(hide_button->sizePolicy().hasHeightForWidth());
        hide_button->setSizePolicy(sizePolicy1);
        hide_button->setMinimumSize(QSize(0, 35));
        hide_button->setFont(font3);
        hide_button->setAutoFillBackground(false);
        hide_button->setStyleSheet(QLatin1String("QPushButton:enabled {\n"
"	background-color: rgb(255, 30, 30); \n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: rgb(255, 60, 60);\n"
"}"));

        mainButtons_horizontalLayout->addWidget(hide_button);


        window_verticalLayout->addWidget(mainButtons_container);

        EditorWindow->setCentralWidget(window);
        menubar = new QMenuBar(EditorWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setEnabled(true);
        menubar->setGeometry(QRect(0, 0, 463, 21));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(menubar->sizePolicy().hasHeightForWidth());
        menubar->setSizePolicy(sizePolicy4);
        EditorWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EditorWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        statusbar->setEnabled(true);
        sizePolicy4.setHeightForWidth(statusbar->sizePolicy().hasHeightForWidth());
        statusbar->setSizePolicy(sizePolicy4);
        EditorWindow->setStatusBar(statusbar);

        retranslateUi(EditorWindow);

        models_tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EditorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EditorWindow)
    {
        EditorWindow->setWindowTitle(QApplication::translate("EditorWindow", "LiveCam Filter Editor", nullptr));
        filterName_label->setText(QApplication::translate("EditorWindow", "Filter Name:", nullptr));
        filterName_edit->setText(QApplication::translate("EditorWindow", "New filter", nullptr));
        filterIcon_label->setText(QApplication::translate("EditorWindow", "Filter Icon:", nullptr));
        filterIcon_button->setText(QString());
        filterIcon_delete->setText(QString());
        new_3D->setText(QApplication::translate("EditorWindow", "Create 3D Model", nullptr));
        new_LipsJoint->setText(QApplication::translate("EditorWindow", "Create Lips Joint 3D Model", nullptr));
        new_emoji->setText(QApplication::translate("EditorWindow", "Create Emoji Model", nullptr));
        new_animatedEmoji->setText(QApplication::translate("EditorWindow", "Create Animated Emoji Model", nullptr));
        new_facePaint->setText(QApplication::translate("EditorWindow", "Create Face Paint Model", nullptr));
        models_tabWidget->setTabText(models_tabWidget->indexOf(newTab), QString());
        save_button->setText(QApplication::translate("EditorWindow", "Save", nullptr));
        export_button->setText(QApplication::translate("EditorWindow", "Export", nullptr));
        import_button->setText(QApplication::translate("EditorWindow", "Import", nullptr));
        hide_button->setText(QApplication::translate("EditorWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorWindow: public Ui_EditorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORWINDOW_H
