/********************************************************************************
** Form generated from reading UI file 'RenderParamsTab.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENDERPARAMSTAB_H
#define UI_RENDERPARAMSTAB_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RenderParamsTab
{
public:
    QGridLayout *renderParamsTab_gridLayout;
    QWidget *tab;
    QVBoxLayout *tab_verticalLayout;
    QLabel *objName_label;
    QWidget *texture_Container;
    QHBoxLayout *horizontalLayout;
    QLabel *texture_label;
    QPushButton *texture_button;
    QPushButton *texture_delete;
    QSpacerItem *horizontalSpacer;
    QLabel *texture_label_2;
    QPushButton *texture_button_2;
    QPushButton *texture_delete_2;
    QWidget *toggles_Container;
    QGridLayout *toggles_gridLayout;
    QCheckBox *visible_checkBox;
    QCheckBox *cullFace_checkBox;
    QWidget *params_Container;
    QGridLayout *gridLayout_params;
    QSpinBox *ambG;
    QLabel *specPower_label;
    QLabel *reflRatio_label;
    QSpinBox *matG;
    QSpinBox *matB;
    QSpinBox *difG;
    QSpinBox *difR;
    QSpinBox *specR;
    QSpinBox *specG;
    QSpinBox *difB;
    QSpinBox *specB;
    QSpinBox *ambB;
    QLabel *matColor_label;
    QSpinBox *ambR;
    QLabel *difColor_label;
    QSpinBox *matR;
    QLabel *specColor_label;
    QLabel *ambColor_label;
    QLabel *lightPos_label;
    QSpinBox *reflRatio;
    QLabel *infDist_label;
    QCheckBox *infDist_checkBox;
    QDoubleSpinBox *specPower;
    QSpinBox *lightX;
    QSpinBox *lightY;
    QSpinBox *lightZ;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *RenderParamsTab)
    {
        if (RenderParamsTab->objectName().isEmpty())
            RenderParamsTab->setObjectName(QStringLiteral("RenderParamsTab"));
        RenderParamsTab->resize(371, 284);
        renderParamsTab_gridLayout = new QGridLayout(RenderParamsTab);
        renderParamsTab_gridLayout->setSpacing(0);
        renderParamsTab_gridLayout->setObjectName(QStringLiteral("renderParamsTab_gridLayout"));
        renderParamsTab_gridLayout->setContentsMargins(0, 0, 0, 0);
        tab = new QWidget(RenderParamsTab);
        tab->setObjectName(QStringLiteral("tab"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Semibold"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        tab->setFont(font);
        tab->setStyleSheet(QLatin1String("QCheckBox {\n"
"color: white;\n"
"}\n"
"\n"
"QComboBox {\n"
"	background-color: rgb(0, 161, 216);\n"
"    border-radius: 4px;\n"
"    color: white;\n"
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
""
                        "QPushButton:enabled {\n"
"	background-color: rgb(0, 161, 216); \n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: rgb(30, 191, 236);\n"
"}"));
        tab_verticalLayout = new QVBoxLayout(tab);
        tab_verticalLayout->setSpacing(6);
        tab_verticalLayout->setObjectName(QStringLiteral("tab_verticalLayout"));
        objName_label = new QLabel(tab);
        objName_label->setObjectName(QStringLiteral("objName_label"));
        objName_label->setFont(font);

        tab_verticalLayout->addWidget(objName_label);

        texture_Container = new QWidget(tab);
        texture_Container->setObjectName(QStringLiteral("texture_Container"));
        texture_Container->setStyleSheet(QStringLiteral("background-color: transparent;"));
        horizontalLayout = new QHBoxLayout(texture_Container);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        texture_label = new QLabel(texture_Container);
        texture_label->setObjectName(QStringLiteral("texture_label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(texture_label->sizePolicy().hasHeightForWidth());
        texture_label->setSizePolicy(sizePolicy);
        texture_label->setFont(font);
        texture_label->setStyleSheet(QStringLiteral(""));
        texture_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        texture_label->setMargin(0);

        horizontalLayout->addWidget(texture_label);

        texture_button = new QPushButton(texture_Container);
        texture_button->setObjectName(QStringLiteral("texture_button"));
        sizePolicy.setHeightForWidth(texture_button->sizePolicy().hasHeightForWidth());
        texture_button->setSizePolicy(sizePolicy);
        texture_button->setMaximumSize(QSize(32, 32));
        texture_button->setStyleSheet(QStringLiteral("background-color: transparent;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/FileButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        texture_button->setIcon(icon);
        texture_button->setIconSize(QSize(32, 32));
        texture_button->setFlat(true);

        horizontalLayout->addWidget(texture_button);

        texture_delete = new QPushButton(texture_Container);
        texture_delete->setObjectName(QStringLiteral("texture_delete"));
        sizePolicy.setHeightForWidth(texture_delete->sizePolicy().hasHeightForWidth());
        texture_delete->setSizePolicy(sizePolicy);
        texture_delete->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/DeleteButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        texture_delete->setIcon(icon1);
        texture_delete->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(texture_delete);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        texture_label_2 = new QLabel(texture_Container);
        texture_label_2->setObjectName(QStringLiteral("texture_label_2"));
        sizePolicy.setHeightForWidth(texture_label_2->sizePolicy().hasHeightForWidth());
        texture_label_2->setSizePolicy(sizePolicy);
        texture_label_2->setFont(font);
        texture_label_2->setStyleSheet(QStringLiteral(""));
        texture_label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        texture_label_2->setMargin(0);

        horizontalLayout->addWidget(texture_label_2);

        texture_button_2 = new QPushButton(texture_Container);
        texture_button_2->setObjectName(QStringLiteral("texture_button_2"));
        sizePolicy.setHeightForWidth(texture_button_2->sizePolicy().hasHeightForWidth());
        texture_button_2->setSizePolicy(sizePolicy);
        texture_button_2->setMaximumSize(QSize(32, 32));
        texture_button_2->setStyleSheet(QStringLiteral("background-color: transparent;"));
        texture_button_2->setIcon(icon);
        texture_button_2->setIconSize(QSize(32, 32));
        texture_button_2->setFlat(true);

        horizontalLayout->addWidget(texture_button_2);

        texture_delete_2 = new QPushButton(texture_Container);
        texture_delete_2->setObjectName(QStringLiteral("texture_delete_2"));
        sizePolicy.setHeightForWidth(texture_delete_2->sizePolicy().hasHeightForWidth());
        texture_delete_2->setSizePolicy(sizePolicy);
        texture_delete_2->setStyleSheet(QStringLiteral(""));
        texture_delete_2->setIcon(icon1);
        texture_delete_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(texture_delete_2);


        tab_verticalLayout->addWidget(texture_Container);

        toggles_Container = new QWidget(tab);
        toggles_Container->setObjectName(QStringLiteral("toggles_Container"));
        toggles_Container->setFont(font);
        toggles_Container->setStyleSheet(QStringLiteral(""));
        toggles_gridLayout = new QGridLayout(toggles_Container);
        toggles_gridLayout->setSpacing(6);
        toggles_gridLayout->setObjectName(QStringLiteral("toggles_gridLayout"));
        toggles_gridLayout->setContentsMargins(0, 0, 0, 0);
        visible_checkBox = new QCheckBox(toggles_Container);
        visible_checkBox->setObjectName(QStringLiteral("visible_checkBox"));
        visible_checkBox->setFont(font);
        visible_checkBox->setChecked(true);

        toggles_gridLayout->addWidget(visible_checkBox, 1, 0, 1, 1);

        cullFace_checkBox = new QCheckBox(toggles_Container);
        cullFace_checkBox->setObjectName(QStringLiteral("cullFace_checkBox"));
        cullFace_checkBox->setFont(font);
        cullFace_checkBox->setChecked(true);

        toggles_gridLayout->addWidget(cullFace_checkBox, 1, 1, 1, 1);


        tab_verticalLayout->addWidget(toggles_Container, 0, Qt::AlignHCenter);

        params_Container = new QWidget(tab);
        params_Container->setObjectName(QStringLiteral("params_Container"));
        params_Container->setFont(font);
        gridLayout_params = new QGridLayout(params_Container);
        gridLayout_params->setObjectName(QStringLiteral("gridLayout_params"));
        gridLayout_params->setContentsMargins(0, 5, 0, 0);
        ambG = new QSpinBox(params_Container);
        ambG->setObjectName(QStringLiteral("ambG"));
        ambG->setMaximum(255);
        ambG->setValue(128);

        gridLayout_params->addWidget(ambG, 3, 2, 1, 1);

        specPower_label = new QLabel(params_Container);
        specPower_label->setObjectName(QStringLiteral("specPower_label"));
        specPower_label->setFont(font);

        gridLayout_params->addWidget(specPower_label, 6, 0, 1, 1);

        reflRatio_label = new QLabel(params_Container);
        reflRatio_label->setObjectName(QStringLiteral("reflRatio_label"));
        reflRatio_label->setFont(font);

        gridLayout_params->addWidget(reflRatio_label, 6, 2, 1, 1);

        matG = new QSpinBox(params_Container);
        matG->setObjectName(QStringLiteral("matG"));
        matG->setMaximum(255);
        matG->setValue(255);

        gridLayout_params->addWidget(matG, 2, 2, 1, 1);

        matB = new QSpinBox(params_Container);
        matB->setObjectName(QStringLiteral("matB"));
        matB->setMaximum(255);
        matB->setValue(255);

        gridLayout_params->addWidget(matB, 2, 3, 1, 1);

        difG = new QSpinBox(params_Container);
        difG->setObjectName(QStringLiteral("difG"));
        difG->setMaximum(255);
        difG->setValue(128);

        gridLayout_params->addWidget(difG, 4, 2, 1, 1);

        difR = new QSpinBox(params_Container);
        difR->setObjectName(QStringLiteral("difR"));
        difR->setMaximum(255);
        difR->setValue(128);

        gridLayout_params->addWidget(difR, 4, 1, 1, 1);

        specR = new QSpinBox(params_Container);
        specR->setObjectName(QStringLiteral("specR"));
        specR->setMaximum(255);
        specR->setValue(255);

        gridLayout_params->addWidget(specR, 5, 1, 1, 1);

        specG = new QSpinBox(params_Container);
        specG->setObjectName(QStringLiteral("specG"));
        specG->setMaximum(255);
        specG->setValue(255);

        gridLayout_params->addWidget(specG, 5, 2, 1, 1);

        difB = new QSpinBox(params_Container);
        difB->setObjectName(QStringLiteral("difB"));
        difB->setMaximum(255);
        difB->setValue(128);

        gridLayout_params->addWidget(difB, 4, 3, 1, 1);

        specB = new QSpinBox(params_Container);
        specB->setObjectName(QStringLiteral("specB"));
        specB->setMaximum(255);
        specB->setValue(255);

        gridLayout_params->addWidget(specB, 5, 3, 1, 1);

        ambB = new QSpinBox(params_Container);
        ambB->setObjectName(QStringLiteral("ambB"));
        ambB->setMaximum(255);
        ambB->setValue(128);

        gridLayout_params->addWidget(ambB, 3, 3, 1, 1);

        matColor_label = new QLabel(params_Container);
        matColor_label->setObjectName(QStringLiteral("matColor_label"));
        matColor_label->setFont(font);

        gridLayout_params->addWidget(matColor_label, 2, 0, 1, 1);

        ambR = new QSpinBox(params_Container);
        ambR->setObjectName(QStringLiteral("ambR"));
        ambR->setMaximum(255);
        ambR->setValue(128);

        gridLayout_params->addWidget(ambR, 3, 1, 1, 1);

        difColor_label = new QLabel(params_Container);
        difColor_label->setObjectName(QStringLiteral("difColor_label"));
        difColor_label->setFont(font);

        gridLayout_params->addWidget(difColor_label, 4, 0, 1, 1);

        matR = new QSpinBox(params_Container);
        matR->setObjectName(QStringLiteral("matR"));
        matR->setMaximum(255);
        matR->setValue(255);

        gridLayout_params->addWidget(matR, 2, 1, 1, 1);

        specColor_label = new QLabel(params_Container);
        specColor_label->setObjectName(QStringLiteral("specColor_label"));
        specColor_label->setFont(font);

        gridLayout_params->addWidget(specColor_label, 5, 0, 1, 1);

        ambColor_label = new QLabel(params_Container);
        ambColor_label->setObjectName(QStringLiteral("ambColor_label"));
        ambColor_label->setFont(font);

        gridLayout_params->addWidget(ambColor_label, 3, 0, 1, 1);

        lightPos_label = new QLabel(params_Container);
        lightPos_label->setObjectName(QStringLiteral("lightPos_label"));
        lightPos_label->setFont(font);

        gridLayout_params->addWidget(lightPos_label, 1, 0, 1, 1);

        reflRatio = new QSpinBox(params_Container);
        reflRatio->setObjectName(QStringLiteral("reflRatio"));
        reflRatio->setMaximum(100);
        reflRatio->setValue(25);

        gridLayout_params->addWidget(reflRatio, 6, 3, 1, 1);

        infDist_label = new QLabel(params_Container);
        infDist_label->setObjectName(QStringLiteral("infDist_label"));
        infDist_label->setFont(font);

        gridLayout_params->addWidget(infDist_label, 0, 0, 1, 2);

        infDist_checkBox = new QCheckBox(params_Container);
        infDist_checkBox->setObjectName(QStringLiteral("infDist_checkBox"));
        infDist_checkBox->setChecked(true);

        gridLayout_params->addWidget(infDist_checkBox, 0, 2, 1, 1);

        specPower = new QDoubleSpinBox(params_Container);
        specPower->setObjectName(QStringLiteral("specPower"));
        specPower->setDecimals(1);
        specPower->setMinimum(0.1);
        specPower->setMaximum(100);
        specPower->setValue(10);

        gridLayout_params->addWidget(specPower, 6, 1, 1, 1);

        lightX = new QSpinBox(params_Container);
        lightX->setObjectName(QStringLiteral("lightX"));
        lightX->setMinimum(-400);
        lightX->setMaximum(400);
        lightX->setValue(2);

        gridLayout_params->addWidget(lightX, 1, 1, 1, 1);

        lightY = new QSpinBox(params_Container);
        lightY->setObjectName(QStringLiteral("lightY"));
        lightY->setMinimum(-400);
        lightY->setMaximum(400);
        lightY->setValue(2);

        gridLayout_params->addWidget(lightY, 1, 2, 1, 1);

        lightZ = new QSpinBox(params_Container);
        lightZ->setObjectName(QStringLiteral("lightZ"));
        lightZ->setMinimum(-400);
        lightZ->setMaximum(400);
        lightZ->setValue(-10);

        gridLayout_params->addWidget(lightZ, 1, 3, 1, 1);


        tab_verticalLayout->addWidget(params_Container);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        tab_verticalLayout->addItem(verticalSpacer);


        renderParamsTab_gridLayout->addWidget(tab, 0, 0, 1, 1);


        retranslateUi(RenderParamsTab);

        QMetaObject::connectSlotsByName(RenderParamsTab);
    } // setupUi

    void retranslateUi(QWidget *RenderParamsTab)
    {
        RenderParamsTab->setWindowTitle(QApplication::translate("RenderParamsTab", "RenderParamsTab", nullptr));
        objName_label->setText(QApplication::translate("RenderParamsTab", "Object Name:      ...", nullptr));
        texture_label->setText(QApplication::translate("RenderParamsTab", "Texture:", nullptr));
        texture_button->setText(QString());
        texture_delete->setText(QString());
        texture_label_2->setText(QApplication::translate("RenderParamsTab", "NormalMap:", nullptr));
        texture_button_2->setText(QString());
        texture_delete_2->setText(QString());
        visible_checkBox->setText(QApplication::translate("RenderParamsTab", "Visible", nullptr));
        cullFace_checkBox->setText(QApplication::translate("RenderParamsTab", "Cull Face", nullptr));
        specPower_label->setText(QApplication::translate("RenderParamsTab", "Specular Power:", nullptr));
        reflRatio_label->setText(QApplication::translate("RenderParamsTab", "Reflection (%):", nullptr));
        matColor_label->setText(QApplication::translate("RenderParamsTab", "Material Color:", nullptr));
        difColor_label->setText(QApplication::translate("RenderParamsTab", "Diffuse Color:", nullptr));
        specColor_label->setText(QApplication::translate("RenderParamsTab", "Specular Light:", nullptr));
        ambColor_label->setText(QApplication::translate("RenderParamsTab", "Ambient Color:", nullptr));
        lightPos_label->setText(QApplication::translate("RenderParamsTab", "Light Position:", nullptr));
        infDist_label->setText(QApplication::translate("RenderParamsTab", "A light source at infinite distance:", nullptr));
        infDist_checkBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RenderParamsTab: public Ui_RenderParamsTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENDERPARAMSTAB_H
