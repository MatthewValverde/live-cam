/********************************************************************************
** Form generated from reading UI file 'Model3DTab.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODEL3DTAB_H
#define UI_MODEL3DTAB_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Model3DTab
{
public:
    QGridLayout *gridLayout;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QWidget *elementIcon_Container;
    QHBoxLayout *horizontalLayout_4;
    QLabel *elementIcon_label;
    QPushButton *elementIcon_button;
    QPushButton *elementIcon_delete;
    QWidget *modelName_container;
    QHBoxLayout *modelName_horizontalLayout;
    QLabel *modelName_label;
    QLineEdit *modelName_edit;
    QWidget *objfile_Container;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *OBJfile_choose;
    QLabel *OBJfile_name;
    QPushButton *OBJfile_delete;
    QWidget *MTLfile_Container;
    QHBoxLayout *horizontalLayout;
    QPushButton *MTLfile_choose;
    QLabel *MTLfile_name;
    QPushButton *MTLfile_delete;
    QWidget *objectsContainer;
    QHBoxLayout *horizontalLayout_5;
    QScrollArea *objectsList;
    QWidget *objectsListContent;
    QVBoxLayout *objectsListContent_verticalLayout;
    QWidget *objectsSettings;
    QVBoxLayout *verticalLayout_2;
    QWidget *shader_Container;
    QHBoxLayout *horizontalLayout_3;
    QLabel *shader_label;
    QComboBox *shader_list;
    QWidget *spatialSettings_container;
    QGridLayout *gridLayout_spatialSettings;
    QWidget *shiftZ_container;
    QVBoxLayout *shiftZ_verticalLayout;
    QWidget *shiftZ_topContainer;
    QHBoxLayout *shiftZ_top_horizontalLayout;
    QLabel *shiftZ_label;
    QDoubleSpinBox *shiftZ_spinBox;
    QSlider *shiftZ_slider;
    QWidget *rotateY_container;
    QVBoxLayout *rotateY_verticalLayout;
    QWidget *rotateY_topContainer;
    QHBoxLayout *shiftY_top_horizontalLayout_2;
    QLabel *rotateY_label;
    QDoubleSpinBox *rotateY_spinBox;
    QSlider *rotateY_slider;
    QWidget *rotateZ_container;
    QVBoxLayout *rotateZ_verticalLayout;
    QWidget *rotateZ_topContainer;
    QHBoxLayout *shiftZ_top_horizontalLayout_2;
    QLabel *rotateZ_label;
    QDoubleSpinBox *rotateZ_spinBox;
    QSlider *rotateZ_slider;
    QWidget *rotateX_container;
    QVBoxLayout *rotateX_verticalLayout;
    QWidget *rotateX_topContainer;
    QHBoxLayout *shiftX_top_horizontalLayout_2;
    QLabel *rotateX_label;
    QDoubleSpinBox *rotateX_spinBox;
    QSlider *rotateX_slider;
    QWidget *scaleX_container;
    QVBoxLayout *scaleX_verticalLayout;
    QWidget *scaleX_topContainer;
    QHBoxLayout *scaleX_top_horizontalLayout;
    QLabel *scaleX_label;
    QDoubleSpinBox *scaleX_spinBox;
    QSlider *scaleX_slider;
    QWidget *scaleY_container;
    QVBoxLayout *scaleX_verticalLayout_2;
    QWidget *scaleY_topContainer;
    QHBoxLayout *scaleX_top_horizontalLayout_2;
    QLabel *scaleY_label;
    QDoubleSpinBox *scaleY_spinBox;
    QSlider *scaleY_slider;
    QWidget *scaleZ_container;
    QVBoxLayout *scaleX_verticalLayout_3;
    QWidget *scaleZ_topContainer;
    QHBoxLayout *scaleX_top_horizontalLayout_3;
    QLabel *scaleZ_label;
    QDoubleSpinBox *scaleX_spinBox_3;
    QSlider *scaleZ_slider;
    QWidget *shiftY_container;
    QVBoxLayout *shiftY_verticalLayout;
    QWidget *shiftY_topContainer;
    QHBoxLayout *shiftY_top_horizontalLayout;
    QLabel *shiftY_label;
    QDoubleSpinBox *shiftY_spinBox;
    QSlider *shiftY_slider;
    QWidget *shiftX_container;
    QVBoxLayout *shiftX_verticalLayout;
    QWidget *shiftX_topContainer;
    QHBoxLayout *shiftX_top_horizontalLayout;
    QLabel *shiftX_label;
    QDoubleSpinBox *shiftX_spinBox;
    QSlider *shiftX_slider;
    QSpacerItem *verticalSpacer;
    QPushButton *delete_button;

    void setupUi(QWidget *Model3DTab)
    {
        if (Model3DTab->objectName().isEmpty())
            Model3DTab->setObjectName(QStringLiteral("Model3DTab"));
        Model3DTab->resize(475, 539);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Model3DTab->sizePolicy().hasHeightForWidth());
        Model3DTab->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Model3DTab);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tab = new QWidget(Model3DTab);
        tab->setObjectName(QStringLiteral("tab"));
        tab->setStyleSheet(QLatin1String("QComboBox {\n"
"	background-color: rgb(0, 161, 216);\n"
"    border-radius: 4px;\n"
"    color: white;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"	background-color: rgb(30, 191, 236);\n"
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
"QWidget#tab { border-image: url(':/res2/images/BG-cropped.png'); }\n"
"\n"
"QLabel\n"
"{\n"
"padding: 1; color: white;\n"
"}\n"
"\n"
"QSpinBox, QDoubleSpinBox { background-color: white; }\n"
"\n"
"QPushButton\n"
"{\n"
"background-color: rgb(220, 220, 220); color: rgb(255, 255, 255);  padding: 4;\n"
"border-radius: 3;\n"
"}\n"
"\n"
"QPushButton:enabled {\n"
"	background-color: "
                        "rgb(0, 161, 216); \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(30, 191, 236);\n"
"}"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        elementIcon_Container = new QWidget(tab);
        elementIcon_Container->setObjectName(QStringLiteral("elementIcon_Container"));
        horizontalLayout_4 = new QHBoxLayout(elementIcon_Container);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        elementIcon_label = new QLabel(elementIcon_Container);
        elementIcon_label->setObjectName(QStringLiteral("elementIcon_label"));
        sizePolicy.setHeightForWidth(elementIcon_label->sizePolicy().hasHeightForWidth());
        elementIcon_label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Semibold"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        elementIcon_label->setFont(font);
        elementIcon_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_4->addWidget(elementIcon_label);

        elementIcon_button = new QPushButton(elementIcon_Container);
        elementIcon_button->setObjectName(QStringLiteral("elementIcon_button"));
        sizePolicy.setHeightForWidth(elementIcon_button->sizePolicy().hasHeightForWidth());
        elementIcon_button->setSizePolicy(sizePolicy);
        elementIcon_button->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
" background-color: transparent;\n"
"padding: 0;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/FileButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        elementIcon_button->setIcon(icon);
        elementIcon_button->setIconSize(QSize(32, 32));
        elementIcon_button->setFlat(true);

        horizontalLayout_4->addWidget(elementIcon_button);

        elementIcon_delete = new QPushButton(elementIcon_Container);
        elementIcon_delete->setObjectName(QStringLiteral("elementIcon_delete"));
        sizePolicy.setHeightForWidth(elementIcon_delete->sizePolicy().hasHeightForWidth());
        elementIcon_delete->setSizePolicy(sizePolicy);
        elementIcon_delete->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
" background-color: transparent;\n"
"\n"
"padding: 0;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/DeleteButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        elementIcon_delete->setIcon(icon1);
        elementIcon_delete->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(elementIcon_delete);


        verticalLayout->addWidget(elementIcon_Container, 0, Qt::AlignLeft);

        modelName_container = new QWidget(tab);
        modelName_container->setObjectName(QStringLiteral("modelName_container"));
        modelName_horizontalLayout = new QHBoxLayout(modelName_container);
        modelName_horizontalLayout->setSpacing(15);
        modelName_horizontalLayout->setObjectName(QStringLiteral("modelName_horizontalLayout"));
        modelName_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        modelName_label = new QLabel(modelName_container);
        modelName_label->setObjectName(QStringLiteral("modelName_label"));
        sizePolicy.setHeightForWidth(modelName_label->sizePolicy().hasHeightForWidth());
        modelName_label->setSizePolicy(sizePolicy);
        modelName_label->setFont(font);
        modelName_label->setStyleSheet(QStringLiteral(""));
        modelName_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        modelName_label->setMargin(0);

        modelName_horizontalLayout->addWidget(modelName_label);

        modelName_edit = new QLineEdit(modelName_container);
        modelName_edit->setObjectName(QStringLiteral("modelName_edit"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Semibold"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        modelName_edit->setFont(font1);

        modelName_horizontalLayout->addWidget(modelName_edit);


        verticalLayout->addWidget(modelName_container);

        objfile_Container = new QWidget(tab);
        objfile_Container->setObjectName(QStringLiteral("objfile_Container"));
        horizontalLayout_2 = new QHBoxLayout(objfile_Container);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        OBJfile_choose = new QPushButton(objfile_Container);
        OBJfile_choose->setObjectName(QStringLiteral("OBJfile_choose"));
        sizePolicy.setHeightForWidth(OBJfile_choose->sizePolicy().hasHeightForWidth());
        OBJfile_choose->setSizePolicy(sizePolicy);
        OBJfile_choose->setMinimumSize(QSize(120, 0));
        OBJfile_choose->setFont(font);

        horizontalLayout_2->addWidget(OBJfile_choose);

        OBJfile_name = new QLabel(objfile_Container);
        OBJfile_name->setObjectName(QStringLiteral("OBJfile_name"));
        sizePolicy.setHeightForWidth(OBJfile_name->sizePolicy().hasHeightForWidth());
        OBJfile_name->setSizePolicy(sizePolicy);
        OBJfile_name->setFont(font);
        OBJfile_name->setStyleSheet(QStringLiteral(""));
        OBJfile_name->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        OBJfile_name->setMargin(0);

        horizontalLayout_2->addWidget(OBJfile_name);

        OBJfile_delete = new QPushButton(objfile_Container);
        OBJfile_delete->setObjectName(QStringLiteral("OBJfile_delete"));
        sizePolicy.setHeightForWidth(OBJfile_delete->sizePolicy().hasHeightForWidth());
        OBJfile_delete->setSizePolicy(sizePolicy);
        OBJfile_delete->setStyleSheet(QStringLiteral("background-color: transparent; padding: 0;"));
        OBJfile_delete->setIcon(icon1);
        OBJfile_delete->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(OBJfile_delete);


        verticalLayout->addWidget(objfile_Container, 0, Qt::AlignLeft);

        MTLfile_Container = new QWidget(tab);
        MTLfile_Container->setObjectName(QStringLiteral("MTLfile_Container"));
        sizePolicy.setHeightForWidth(MTLfile_Container->sizePolicy().hasHeightForWidth());
        MTLfile_Container->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(MTLfile_Container);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        MTLfile_choose = new QPushButton(MTLfile_Container);
        MTLfile_choose->setObjectName(QStringLiteral("MTLfile_choose"));
        sizePolicy.setHeightForWidth(MTLfile_choose->sizePolicy().hasHeightForWidth());
        MTLfile_choose->setSizePolicy(sizePolicy);
        MTLfile_choose->setMinimumSize(QSize(120, 0));
        MTLfile_choose->setFont(font);

        horizontalLayout->addWidget(MTLfile_choose);

        MTLfile_name = new QLabel(MTLfile_Container);
        MTLfile_name->setObjectName(QStringLiteral("MTLfile_name"));
        sizePolicy.setHeightForWidth(MTLfile_name->sizePolicy().hasHeightForWidth());
        MTLfile_name->setSizePolicy(sizePolicy);
        MTLfile_name->setFont(font);
        MTLfile_name->setStyleSheet(QStringLiteral(""));
        MTLfile_name->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        MTLfile_name->setMargin(0);

        horizontalLayout->addWidget(MTLfile_name);

        MTLfile_delete = new QPushButton(MTLfile_Container);
        MTLfile_delete->setObjectName(QStringLiteral("MTLfile_delete"));
        sizePolicy.setHeightForWidth(MTLfile_delete->sizePolicy().hasHeightForWidth());
        MTLfile_delete->setSizePolicy(sizePolicy);
        MTLfile_delete->setStyleSheet(QStringLiteral("background-color: transparent; padding: 0;"));
        MTLfile_delete->setIcon(icon1);
        MTLfile_delete->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(MTLfile_delete);


        verticalLayout->addWidget(MTLfile_Container);

        objectsContainer = new QWidget(tab);
        objectsContainer->setObjectName(QStringLiteral("objectsContainer"));
        objectsContainer->setMinimumSize(QSize(0, 0));
        objectsContainer->setStyleSheet(QLatin1String("QWidget#objectsContainer\n"
"{\n"
"border-style: solid;\n"
"border-width: 1;\n"
"border-color: rgb(0, 161, 216); \n"
"}"));
        horizontalLayout_5 = new QHBoxLayout(objectsContainer);
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(4, 4, 4, 4);
        objectsList = new QScrollArea(objectsContainer);
        objectsList->setObjectName(QStringLiteral("objectsList"));
        objectsList->setMinimumSize(QSize(0, 80));
        objectsList->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color: transparent;\n"
"}\n"
"\n"
"QScrollBar {background-color:transparent}\n"
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
" }\n"
"\n"
"QPushButton\n"
"{\n"
"background-color: rgb(0, 161, 216);\n"
"color: rgb(255, 255, 255);\n"
"padding: 2;\n"
"padding-left: 4;\n"
"padding-right: 4;\n"
"border-radius: 3;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	background-color: rgb(255, 30, 30); \n"
"}\n"
"\n"
"QPushButt"
                        "on:hover {\n"
"	background-color: rgb(30, 191, 236);\n"
"}\n"
"\n"
"QPushButton:checked:hover{\n"
"	background-color: rgb(255, 60, 60); \n"
"}"));
        objectsList->setFrameShape(QFrame::NoFrame);
        objectsList->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        objectsList->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        objectsList->setWidgetResizable(true);
        objectsListContent = new QWidget();
        objectsListContent->setObjectName(QStringLiteral("objectsListContent"));
        objectsListContent->setGeometry(QRect(0, 0, 224, 80));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(objectsListContent->sizePolicy().hasHeightForWidth());
        objectsListContent->setSizePolicy(sizePolicy1);
        objectsListContent->setMinimumSize(QSize(0, 0));
        objectsListContent_verticalLayout = new QVBoxLayout(objectsListContent);
        objectsListContent_verticalLayout->setSpacing(4);
        objectsListContent_verticalLayout->setObjectName(QStringLiteral("objectsListContent_verticalLayout"));
        objectsListContent_verticalLayout->setContentsMargins(5, 5, 5, 5);
        objectsList->setWidget(objectsListContent);

        horizontalLayout_5->addWidget(objectsList, 0, Qt::AlignTop);

        objectsSettings = new QWidget(objectsContainer);
        objectsSettings->setObjectName(QStringLiteral("objectsSettings"));
        sizePolicy.setHeightForWidth(objectsSettings->sizePolicy().hasHeightForWidth());
        objectsSettings->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(objectsSettings);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        shader_Container = new QWidget(objectsSettings);
        shader_Container->setObjectName(QStringLiteral("shader_Container"));
        sizePolicy.setHeightForWidth(shader_Container->sizePolicy().hasHeightForWidth());
        shader_Container->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(shader_Container);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        shader_label = new QLabel(shader_Container);
        shader_label->setObjectName(QStringLiteral("shader_label"));
        sizePolicy.setHeightForWidth(shader_label->sizePolicy().hasHeightForWidth());
        shader_label->setSizePolicy(sizePolicy);
        shader_label->setFont(font);
        shader_label->setStyleSheet(QStringLiteral(""));
        shader_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        shader_label->setMargin(0);

        horizontalLayout_3->addWidget(shader_label);

        shader_list = new QComboBox(shader_Container);
        shader_list->addItem(QString());
        shader_list->addItem(QString());
        shader_list->addItem(QString());
        shader_list->setObjectName(QStringLiteral("shader_list"));
        sizePolicy.setHeightForWidth(shader_list->sizePolicy().hasHeightForWidth());
        shader_list->setSizePolicy(sizePolicy);
        shader_list->setMinimumSize(QSize(105, 0));
        shader_list->setFont(font);
        shader_list->setStyleSheet(QStringLiteral("padding: 2;"));
        shader_list->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        shader_list->setFrame(true);

        horizontalLayout_3->addWidget(shader_list);


        verticalLayout_2->addWidget(shader_Container);


        horizontalLayout_5->addWidget(objectsSettings);


        verticalLayout->addWidget(objectsContainer);

        spatialSettings_container = new QWidget(tab);
        spatialSettings_container->setObjectName(QStringLiteral("spatialSettings_container"));
        spatialSettings_container->setMinimumSize(QSize(0, 0));
        spatialSettings_container->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
" margin-left: 0; margin-right: 0; padding-top: 2; padding-bottom: 2\n"
"}"));
        gridLayout_spatialSettings = new QGridLayout(spatialSettings_container);
        gridLayout_spatialSettings->setSpacing(15);
        gridLayout_spatialSettings->setObjectName(QStringLiteral("gridLayout_spatialSettings"));
        gridLayout_spatialSettings->setContentsMargins(0, 0, 0, 0);
        shiftZ_container = new QWidget(spatialSettings_container);
        shiftZ_container->setObjectName(QStringLiteral("shiftZ_container"));
        shiftZ_verticalLayout = new QVBoxLayout(shiftZ_container);
        shiftZ_verticalLayout->setSpacing(4);
        shiftZ_verticalLayout->setObjectName(QStringLiteral("shiftZ_verticalLayout"));
        shiftZ_verticalLayout->setContentsMargins(0, 0, 0, 0);
        shiftZ_topContainer = new QWidget(shiftZ_container);
        shiftZ_topContainer->setObjectName(QStringLiteral("shiftZ_topContainer"));
        shiftZ_top_horizontalLayout = new QHBoxLayout(shiftZ_topContainer);
        shiftZ_top_horizontalLayout->setObjectName(QStringLiteral("shiftZ_top_horizontalLayout"));
        shiftZ_top_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        shiftZ_label = new QLabel(shiftZ_topContainer);
        shiftZ_label->setObjectName(QStringLiteral("shiftZ_label"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(shiftZ_label->sizePolicy().hasHeightForWidth());
        shiftZ_label->setSizePolicy(sizePolicy2);
        shiftZ_label->setFont(font);
        shiftZ_label->setStyleSheet(QStringLiteral(""));
        shiftZ_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        shiftZ_label->setMargin(0);

        shiftZ_top_horizontalLayout->addWidget(shiftZ_label);

        shiftZ_spinBox = new QDoubleSpinBox(shiftZ_topContainer);
        shiftZ_spinBox->setObjectName(QStringLiteral("shiftZ_spinBox"));
        shiftZ_spinBox->setFont(font1);
        shiftZ_spinBox->setStyleSheet(QStringLiteral(""));
        shiftZ_spinBox->setFrame(true);
        shiftZ_spinBox->setMinimum(-2);
        shiftZ_spinBox->setMaximum(2);
        shiftZ_spinBox->setSingleStep(0.01);

        shiftZ_top_horizontalLayout->addWidget(shiftZ_spinBox);


        shiftZ_verticalLayout->addWidget(shiftZ_topContainer);

        shiftZ_slider = new QSlider(shiftZ_container);
        shiftZ_slider->setObjectName(QStringLiteral("shiftZ_slider"));
        shiftZ_slider->setMinimum(-200);
        shiftZ_slider->setMaximum(200);
        shiftZ_slider->setOrientation(Qt::Horizontal);

        shiftZ_verticalLayout->addWidget(shiftZ_slider);


        gridLayout_spatialSettings->addWidget(shiftZ_container, 4, 2, 1, 1);

        rotateY_container = new QWidget(spatialSettings_container);
        rotateY_container->setObjectName(QStringLiteral("rotateY_container"));
        rotateY_verticalLayout = new QVBoxLayout(rotateY_container);
        rotateY_verticalLayout->setSpacing(4);
        rotateY_verticalLayout->setObjectName(QStringLiteral("rotateY_verticalLayout"));
        rotateY_verticalLayout->setContentsMargins(0, 0, 0, 0);
        rotateY_topContainer = new QWidget(rotateY_container);
        rotateY_topContainer->setObjectName(QStringLiteral("rotateY_topContainer"));
        shiftY_top_horizontalLayout_2 = new QHBoxLayout(rotateY_topContainer);
        shiftY_top_horizontalLayout_2->setObjectName(QStringLiteral("shiftY_top_horizontalLayout_2"));
        shiftY_top_horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        rotateY_label = new QLabel(rotateY_topContainer);
        rotateY_label->setObjectName(QStringLiteral("rotateY_label"));
        sizePolicy2.setHeightForWidth(rotateY_label->sizePolicy().hasHeightForWidth());
        rotateY_label->setSizePolicy(sizePolicy2);
        rotateY_label->setFont(font);
        rotateY_label->setStyleSheet(QStringLiteral(""));
        rotateY_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        rotateY_label->setMargin(0);

        shiftY_top_horizontalLayout_2->addWidget(rotateY_label);

        rotateY_spinBox = new QDoubleSpinBox(rotateY_topContainer);
        rotateY_spinBox->setObjectName(QStringLiteral("rotateY_spinBox"));
        rotateY_spinBox->setEnabled(false);
        rotateY_spinBox->setFont(font1);
        rotateY_spinBox->setStyleSheet(QStringLiteral(""));
        rotateY_spinBox->setFrame(true);
        rotateY_spinBox->setDecimals(1);
        rotateY_spinBox->setMinimum(-180);
        rotateY_spinBox->setMaximum(180);
        rotateY_spinBox->setSingleStep(1);

        shiftY_top_horizontalLayout_2->addWidget(rotateY_spinBox);


        rotateY_verticalLayout->addWidget(rotateY_topContainer);

        rotateY_slider = new QSlider(rotateY_container);
        rotateY_slider->setObjectName(QStringLiteral("rotateY_slider"));
        rotateY_slider->setEnabled(false);
        rotateY_slider->setMinimum(-180);
        rotateY_slider->setMaximum(180);
        rotateY_slider->setOrientation(Qt::Horizontal);

        rotateY_verticalLayout->addWidget(rotateY_slider);


        gridLayout_spatialSettings->addWidget(rotateY_container, 3, 4, 1, 1);

        rotateZ_container = new QWidget(spatialSettings_container);
        rotateZ_container->setObjectName(QStringLiteral("rotateZ_container"));
        rotateZ_verticalLayout = new QVBoxLayout(rotateZ_container);
        rotateZ_verticalLayout->setSpacing(4);
        rotateZ_verticalLayout->setObjectName(QStringLiteral("rotateZ_verticalLayout"));
        rotateZ_verticalLayout->setContentsMargins(0, 0, 0, 0);
        rotateZ_topContainer = new QWidget(rotateZ_container);
        rotateZ_topContainer->setObjectName(QStringLiteral("rotateZ_topContainer"));
        shiftZ_top_horizontalLayout_2 = new QHBoxLayout(rotateZ_topContainer);
        shiftZ_top_horizontalLayout_2->setObjectName(QStringLiteral("shiftZ_top_horizontalLayout_2"));
        shiftZ_top_horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        rotateZ_label = new QLabel(rotateZ_topContainer);
        rotateZ_label->setObjectName(QStringLiteral("rotateZ_label"));
        sizePolicy2.setHeightForWidth(rotateZ_label->sizePolicy().hasHeightForWidth());
        rotateZ_label->setSizePolicy(sizePolicy2);
        rotateZ_label->setFont(font);
        rotateZ_label->setStyleSheet(QStringLiteral(""));
        rotateZ_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        rotateZ_label->setMargin(0);

        shiftZ_top_horizontalLayout_2->addWidget(rotateZ_label);

        rotateZ_spinBox = new QDoubleSpinBox(rotateZ_topContainer);
        rotateZ_spinBox->setObjectName(QStringLiteral("rotateZ_spinBox"));
        rotateZ_spinBox->setEnabled(false);
        rotateZ_spinBox->setFont(font1);
        rotateZ_spinBox->setStyleSheet(QStringLiteral(""));
        rotateZ_spinBox->setFrame(true);
        rotateZ_spinBox->setDecimals(1);
        rotateZ_spinBox->setMinimum(-180);
        rotateZ_spinBox->setMaximum(180);
        rotateZ_spinBox->setSingleStep(1);

        shiftZ_top_horizontalLayout_2->addWidget(rotateZ_spinBox);


        rotateZ_verticalLayout->addWidget(rotateZ_topContainer);

        rotateZ_slider = new QSlider(rotateZ_container);
        rotateZ_slider->setObjectName(QStringLiteral("rotateZ_slider"));
        rotateZ_slider->setEnabled(false);
        rotateZ_slider->setMinimum(-180);
        rotateZ_slider->setMaximum(180);
        rotateZ_slider->setOrientation(Qt::Horizontal);

        rotateZ_verticalLayout->addWidget(rotateZ_slider);


        gridLayout_spatialSettings->addWidget(rotateZ_container, 4, 4, 1, 1);

        rotateX_container = new QWidget(spatialSettings_container);
        rotateX_container->setObjectName(QStringLiteral("rotateX_container"));
        rotateX_verticalLayout = new QVBoxLayout(rotateX_container);
        rotateX_verticalLayout->setSpacing(4);
        rotateX_verticalLayout->setObjectName(QStringLiteral("rotateX_verticalLayout"));
        rotateX_verticalLayout->setContentsMargins(0, 0, 0, 0);
        rotateX_topContainer = new QWidget(rotateX_container);
        rotateX_topContainer->setObjectName(QStringLiteral("rotateX_topContainer"));
        shiftX_top_horizontalLayout_2 = new QHBoxLayout(rotateX_topContainer);
        shiftX_top_horizontalLayout_2->setObjectName(QStringLiteral("shiftX_top_horizontalLayout_2"));
        shiftX_top_horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        rotateX_label = new QLabel(rotateX_topContainer);
        rotateX_label->setObjectName(QStringLiteral("rotateX_label"));
        sizePolicy2.setHeightForWidth(rotateX_label->sizePolicy().hasHeightForWidth());
        rotateX_label->setSizePolicy(sizePolicy2);
        rotateX_label->setFont(font);
        rotateX_label->setStyleSheet(QStringLiteral(""));
        rotateX_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        rotateX_label->setMargin(0);

        shiftX_top_horizontalLayout_2->addWidget(rotateX_label);

        rotateX_spinBox = new QDoubleSpinBox(rotateX_topContainer);
        rotateX_spinBox->setObjectName(QStringLiteral("rotateX_spinBox"));
        rotateX_spinBox->setEnabled(false);
        rotateX_spinBox->setFont(font1);
        rotateX_spinBox->setStyleSheet(QStringLiteral(""));
        rotateX_spinBox->setFrame(true);
        rotateX_spinBox->setDecimals(1);
        rotateX_spinBox->setMinimum(-180);
        rotateX_spinBox->setMaximum(180);
        rotateX_spinBox->setSingleStep(1);

        shiftX_top_horizontalLayout_2->addWidget(rotateX_spinBox);


        rotateX_verticalLayout->addWidget(rotateX_topContainer);

        rotateX_slider = new QSlider(rotateX_container);
        rotateX_slider->setObjectName(QStringLiteral("rotateX_slider"));
        rotateX_slider->setEnabled(false);
        rotateX_slider->setMinimum(-180);
        rotateX_slider->setMaximum(180);
        rotateX_slider->setOrientation(Qt::Horizontal);

        rotateX_verticalLayout->addWidget(rotateX_slider);


        gridLayout_spatialSettings->addWidget(rotateX_container, 1, 4, 1, 1);

        scaleX_container = new QWidget(spatialSettings_container);
        scaleX_container->setObjectName(QStringLiteral("scaleX_container"));
        scaleX_verticalLayout = new QVBoxLayout(scaleX_container);
        scaleX_verticalLayout->setSpacing(4);
        scaleX_verticalLayout->setObjectName(QStringLiteral("scaleX_verticalLayout"));
        scaleX_verticalLayout->setContentsMargins(0, 0, 0, 0);
        scaleX_topContainer = new QWidget(scaleX_container);
        scaleX_topContainer->setObjectName(QStringLiteral("scaleX_topContainer"));
        scaleX_top_horizontalLayout = new QHBoxLayout(scaleX_topContainer);
        scaleX_top_horizontalLayout->setObjectName(QStringLiteral("scaleX_top_horizontalLayout"));
        scaleX_top_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        scaleX_label = new QLabel(scaleX_topContainer);
        scaleX_label->setObjectName(QStringLiteral("scaleX_label"));
        sizePolicy2.setHeightForWidth(scaleX_label->sizePolicy().hasHeightForWidth());
        scaleX_label->setSizePolicy(sizePolicy2);
        scaleX_label->setFont(font);
        scaleX_label->setStyleSheet(QStringLiteral(""));
        scaleX_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scaleX_label->setMargin(0);

        scaleX_top_horizontalLayout->addWidget(scaleX_label);

        scaleX_spinBox = new QDoubleSpinBox(scaleX_topContainer);
        scaleX_spinBox->setObjectName(QStringLiteral("scaleX_spinBox"));
        scaleX_spinBox->setFont(font1);
        scaleX_spinBox->setStyleSheet(QStringLiteral(""));
        scaleX_spinBox->setFrame(true);
        scaleX_spinBox->setMaximum(4);
        scaleX_spinBox->setSingleStep(0.01);
        scaleX_spinBox->setValue(1);

        scaleX_top_horizontalLayout->addWidget(scaleX_spinBox);


        scaleX_verticalLayout->addWidget(scaleX_topContainer);

        scaleX_slider = new QSlider(scaleX_container);
        scaleX_slider->setObjectName(QStringLiteral("scaleX_slider"));
        scaleX_slider->setMinimum(0);
        scaleX_slider->setMaximum(400);
        scaleX_slider->setValue(100);
        scaleX_slider->setOrientation(Qt::Horizontal);

        scaleX_verticalLayout->addWidget(scaleX_slider);


        gridLayout_spatialSettings->addWidget(scaleX_container, 1, 3, 1, 1);

        scaleY_container = new QWidget(spatialSettings_container);
        scaleY_container->setObjectName(QStringLiteral("scaleY_container"));
        scaleY_container->setEnabled(false);
        scaleX_verticalLayout_2 = new QVBoxLayout(scaleY_container);
        scaleX_verticalLayout_2->setSpacing(4);
        scaleX_verticalLayout_2->setObjectName(QStringLiteral("scaleX_verticalLayout_2"));
        scaleX_verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scaleY_topContainer = new QWidget(scaleY_container);
        scaleY_topContainer->setObjectName(QStringLiteral("scaleY_topContainer"));
        scaleX_top_horizontalLayout_2 = new QHBoxLayout(scaleY_topContainer);
        scaleX_top_horizontalLayout_2->setObjectName(QStringLiteral("scaleX_top_horizontalLayout_2"));
        scaleX_top_horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        scaleY_label = new QLabel(scaleY_topContainer);
        scaleY_label->setObjectName(QStringLiteral("scaleY_label"));
        sizePolicy2.setHeightForWidth(scaleY_label->sizePolicy().hasHeightForWidth());
        scaleY_label->setSizePolicy(sizePolicy2);
        scaleY_label->setFont(font);
        scaleY_label->setStyleSheet(QStringLiteral(""));
        scaleY_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scaleY_label->setMargin(0);

        scaleX_top_horizontalLayout_2->addWidget(scaleY_label);

        scaleY_spinBox = new QDoubleSpinBox(scaleY_topContainer);
        scaleY_spinBox->setObjectName(QStringLiteral("scaleY_spinBox"));
        scaleY_spinBox->setFont(font1);
        scaleY_spinBox->setStyleSheet(QStringLiteral(""));
        scaleY_spinBox->setFrame(true);
        scaleY_spinBox->setMaximum(4);
        scaleY_spinBox->setSingleStep(0.01);
        scaleY_spinBox->setValue(1);

        scaleX_top_horizontalLayout_2->addWidget(scaleY_spinBox);


        scaleX_verticalLayout_2->addWidget(scaleY_topContainer);

        scaleY_slider = new QSlider(scaleY_container);
        scaleY_slider->setObjectName(QStringLiteral("scaleY_slider"));
        scaleY_slider->setMinimum(0);
        scaleY_slider->setMaximum(400);
        scaleY_slider->setValue(100);
        scaleY_slider->setOrientation(Qt::Horizontal);

        scaleX_verticalLayout_2->addWidget(scaleY_slider);


        gridLayout_spatialSettings->addWidget(scaleY_container, 3, 3, 1, 1);

        scaleZ_container = new QWidget(spatialSettings_container);
        scaleZ_container->setObjectName(QStringLiteral("scaleZ_container"));
        scaleZ_container->setEnabled(false);
        scaleX_verticalLayout_3 = new QVBoxLayout(scaleZ_container);
        scaleX_verticalLayout_3->setSpacing(4);
        scaleX_verticalLayout_3->setObjectName(QStringLiteral("scaleX_verticalLayout_3"));
        scaleX_verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scaleZ_topContainer = new QWidget(scaleZ_container);
        scaleZ_topContainer->setObjectName(QStringLiteral("scaleZ_topContainer"));
        scaleX_top_horizontalLayout_3 = new QHBoxLayout(scaleZ_topContainer);
        scaleX_top_horizontalLayout_3->setObjectName(QStringLiteral("scaleX_top_horizontalLayout_3"));
        scaleX_top_horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        scaleZ_label = new QLabel(scaleZ_topContainer);
        scaleZ_label->setObjectName(QStringLiteral("scaleZ_label"));
        sizePolicy2.setHeightForWidth(scaleZ_label->sizePolicy().hasHeightForWidth());
        scaleZ_label->setSizePolicy(sizePolicy2);
        scaleZ_label->setFont(font);
        scaleZ_label->setStyleSheet(QStringLiteral(""));
        scaleZ_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scaleZ_label->setMargin(0);

        scaleX_top_horizontalLayout_3->addWidget(scaleZ_label);

        scaleX_spinBox_3 = new QDoubleSpinBox(scaleZ_topContainer);
        scaleX_spinBox_3->setObjectName(QStringLiteral("scaleX_spinBox_3"));
        scaleX_spinBox_3->setFont(font1);
        scaleX_spinBox_3->setStyleSheet(QStringLiteral(""));
        scaleX_spinBox_3->setFrame(true);
        scaleX_spinBox_3->setMaximum(4);
        scaleX_spinBox_3->setSingleStep(0.01);
        scaleX_spinBox_3->setValue(1);

        scaleX_top_horizontalLayout_3->addWidget(scaleX_spinBox_3);


        scaleX_verticalLayout_3->addWidget(scaleZ_topContainer);

        scaleZ_slider = new QSlider(scaleZ_container);
        scaleZ_slider->setObjectName(QStringLiteral("scaleZ_slider"));
        scaleZ_slider->setMinimum(0);
        scaleZ_slider->setMaximum(400);
        scaleZ_slider->setValue(100);
        scaleZ_slider->setOrientation(Qt::Horizontal);

        scaleX_verticalLayout_3->addWidget(scaleZ_slider);


        gridLayout_spatialSettings->addWidget(scaleZ_container, 4, 3, 1, 1);

        shiftY_container = new QWidget(spatialSettings_container);
        shiftY_container->setObjectName(QStringLiteral("shiftY_container"));
        shiftY_verticalLayout = new QVBoxLayout(shiftY_container);
        shiftY_verticalLayout->setSpacing(4);
        shiftY_verticalLayout->setObjectName(QStringLiteral("shiftY_verticalLayout"));
        shiftY_verticalLayout->setContentsMargins(0, 0, 0, 0);
        shiftY_topContainer = new QWidget(shiftY_container);
        shiftY_topContainer->setObjectName(QStringLiteral("shiftY_topContainer"));
        shiftY_top_horizontalLayout = new QHBoxLayout(shiftY_topContainer);
        shiftY_top_horizontalLayout->setObjectName(QStringLiteral("shiftY_top_horizontalLayout"));
        shiftY_top_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        shiftY_label = new QLabel(shiftY_topContainer);
        shiftY_label->setObjectName(QStringLiteral("shiftY_label"));
        sizePolicy2.setHeightForWidth(shiftY_label->sizePolicy().hasHeightForWidth());
        shiftY_label->setSizePolicy(sizePolicy2);
        shiftY_label->setFont(font);
        shiftY_label->setStyleSheet(QStringLiteral(""));
        shiftY_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        shiftY_label->setMargin(0);

        shiftY_top_horizontalLayout->addWidget(shiftY_label);

        shiftY_spinBox = new QDoubleSpinBox(shiftY_topContainer);
        shiftY_spinBox->setObjectName(QStringLiteral("shiftY_spinBox"));
        shiftY_spinBox->setFont(font1);
        shiftY_spinBox->setStyleSheet(QStringLiteral(""));
        shiftY_spinBox->setFrame(true);
        shiftY_spinBox->setMinimum(-2);
        shiftY_spinBox->setMaximum(2);
        shiftY_spinBox->setSingleStep(0.01);

        shiftY_top_horizontalLayout->addWidget(shiftY_spinBox);


        shiftY_verticalLayout->addWidget(shiftY_topContainer);

        shiftY_slider = new QSlider(shiftY_container);
        shiftY_slider->setObjectName(QStringLiteral("shiftY_slider"));
        shiftY_slider->setMinimum(-200);
        shiftY_slider->setMaximum(200);
        shiftY_slider->setOrientation(Qt::Horizontal);

        shiftY_verticalLayout->addWidget(shiftY_slider);


        gridLayout_spatialSettings->addWidget(shiftY_container, 3, 2, 1, 1);

        shiftX_container = new QWidget(spatialSettings_container);
        shiftX_container->setObjectName(QStringLiteral("shiftX_container"));
        shiftX_verticalLayout = new QVBoxLayout(shiftX_container);
        shiftX_verticalLayout->setObjectName(QStringLiteral("shiftX_verticalLayout"));
        shiftX_verticalLayout->setContentsMargins(0, 0, 0, 0);
        shiftX_topContainer = new QWidget(shiftX_container);
        shiftX_topContainer->setObjectName(QStringLiteral("shiftX_topContainer"));
        shiftX_top_horizontalLayout = new QHBoxLayout(shiftX_topContainer);
        shiftX_top_horizontalLayout->setObjectName(QStringLiteral("shiftX_top_horizontalLayout"));
        shiftX_top_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        shiftX_label = new QLabel(shiftX_topContainer);
        shiftX_label->setObjectName(QStringLiteral("shiftX_label"));
        sizePolicy2.setHeightForWidth(shiftX_label->sizePolicy().hasHeightForWidth());
        shiftX_label->setSizePolicy(sizePolicy2);
        shiftX_label->setFont(font);
        shiftX_label->setStyleSheet(QStringLiteral(""));
        shiftX_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        shiftX_label->setMargin(0);

        shiftX_top_horizontalLayout->addWidget(shiftX_label);

        shiftX_spinBox = new QDoubleSpinBox(shiftX_topContainer);
        shiftX_spinBox->setObjectName(QStringLiteral("shiftX_spinBox"));
        shiftX_spinBox->setFont(font1);
        shiftX_spinBox->setStyleSheet(QStringLiteral(""));
        shiftX_spinBox->setFrame(true);
        shiftX_spinBox->setMinimum(-2);
        shiftX_spinBox->setMaximum(2);
        shiftX_spinBox->setSingleStep(0.01);

        shiftX_top_horizontalLayout->addWidget(shiftX_spinBox);


        shiftX_verticalLayout->addWidget(shiftX_topContainer);

        shiftX_slider = new QSlider(shiftX_container);
        shiftX_slider->setObjectName(QStringLiteral("shiftX_slider"));
        shiftX_slider->setMinimum(-200);
        shiftX_slider->setMaximum(200);
        shiftX_slider->setOrientation(Qt::Horizontal);

        shiftX_verticalLayout->addWidget(shiftX_slider);


        gridLayout_spatialSettings->addWidget(shiftX_container, 1, 2, 1, 1);


        verticalLayout->addWidget(spatialSettings_container);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        delete_button = new QPushButton(tab);
        delete_button->setObjectName(QStringLiteral("delete_button"));
        sizePolicy.setHeightForWidth(delete_button->sizePolicy().hasHeightForWidth());
        delete_button->setSizePolicy(sizePolicy);
        delete_button->setMinimumSize(QSize(120, 0));
        delete_button->setFont(font);
        delete_button->setStyleSheet(QLatin1String("QPushButton:enabled {\n"
"	background-color: rgb(255, 30, 30); \n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: rgb(255, 60, 60);\n"
"}"));

        verticalLayout->addWidget(delete_button, 0, Qt::AlignRight);


        gridLayout->addWidget(tab, 0, 0, 1, 1);


        retranslateUi(Model3DTab);

        shader_list->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Model3DTab);
    } // setupUi

    void retranslateUi(QWidget *Model3DTab)
    {
        Model3DTab->setWindowTitle(QApplication::translate("Model3DTab", "Model3DTab", nullptr));
        elementIcon_label->setText(QApplication::translate("Model3DTab", "Choose an Icon:", nullptr));
        elementIcon_button->setText(QString());
        elementIcon_delete->setText(QString());
        modelName_label->setText(QApplication::translate("Model3DTab", "Model name:", nullptr));
        modelName_edit->setText(QApplication::translate("Model3DTab", "New 3D Model", nullptr));
        OBJfile_choose->setText(QApplication::translate("Model3DTab", "Choose OBJ file", nullptr));
        OBJfile_name->setText(QApplication::translate("Model3DTab", "No file selected", nullptr));
        OBJfile_delete->setText(QString());
        MTLfile_choose->setText(QApplication::translate("Model3DTab", "Choose MTL file", nullptr));
        MTLfile_name->setText(QApplication::translate("Model3DTab", "No file selected", nullptr));
        MTLfile_delete->setText(QString());
        shader_label->setText(QApplication::translate("Model3DTab", "Shader:", nullptr));
        shader_list->setItemText(0, QApplication::translate("Model3DTab", "regular", nullptr));
        shader_list->setItemText(1, QApplication::translate("Model3DTab", "no texture", nullptr));
        shader_list->setItemText(2, QApplication::translate("Model3DTab", "normal map", nullptr));

        shiftZ_label->setText(QApplication::translate("Model3DTab", "Shift Z:", nullptr));
        rotateY_label->setText(QApplication::translate("Model3DTab", "Rotate oY:", nullptr));
        rotateZ_label->setText(QApplication::translate("Model3DTab", "Rotate oZ:", nullptr));
        rotateX_label->setText(QApplication::translate("Model3DTab", "Rotate oX:", nullptr));
        scaleX_label->setText(QApplication::translate("Model3DTab", "Scale:", nullptr));
        scaleY_label->setText(QApplication::translate("Model3DTab", "Scale Y:", nullptr));
        scaleZ_label->setText(QApplication::translate("Model3DTab", "Scale Z:", nullptr));
        shiftY_label->setText(QApplication::translate("Model3DTab", "Shift Y:", nullptr));
        shiftX_label->setText(QApplication::translate("Model3DTab", "Shift X:", nullptr));
        delete_button->setText(QApplication::translate("Model3DTab", "Delete Element", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Model3DTab: public Ui_Model3DTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODEL3DTAB_H
