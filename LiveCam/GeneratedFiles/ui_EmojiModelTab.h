/********************************************************************************
** Form generated from reading UI file 'EmojiModelTab.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMOJIMODELTAB_H
#define UI_EMOJIMODELTAB_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmojiModelTab
{
public:
    QGridLayout *emojiModelTab_gridLayout;
    QWidget *tab;
    QVBoxLayout *tab_verticalLayout;
    QWidget *modelName_container;
    QHBoxLayout *modelName_horizontalLayout;
    QLabel *modelName_label;
    QLineEdit *modelName_edit;
    QWidget *emojiSettings_container;
    QHBoxLayout *emojiSettings_horizontalLayout;
    QLabel *emojiImage_label;
    QPushButton *emojiImage_button;
    QPushButton *emojiImage_delete;
    QSpacerItem *horizontalSpacer_1;
    QLabel *imageDirection_label;
    QComboBox *imageDirection_comboBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *rotation_label;
    QCheckBox *rotation_checkBox;
    QWidget *spatialSettings_Container;
    QGridLayout *gridLayout_spatialSettings;
    QWidget *scaleX_container;
    QVBoxLayout *scaleX_verticalLayout;
    QWidget *scaleX_topContainer;
    QHBoxLayout *scaleX_top_horizontalLayout;
    QLabel *scaleX_label;
    QDoubleSpinBox *scaleX_spinBox;
    QSlider *scaleX_slider;
    QWidget *shiftY_container;
    QVBoxLayout *shiftY_verticalLayout;
    QWidget *shiftY_topContainer;
    QHBoxLayout *shiftY_top_horizontalLayout;
    QLabel *shiftY_label;
    QDoubleSpinBox *shiftY_spinBox;
    QSlider *shiftY_slider;
    QWidget *scaleY_container;
    QVBoxLayout *scaleY_verticalLayout;
    QWidget *scaleY_topContainer;
    QHBoxLayout *scaleY_top_horizontalLayout;
    QLabel *scaleY_label;
    QDoubleSpinBox *scaleY_spinBox;
    QSlider *scaleY_slider;
    QWidget *shiftX_container;
    QVBoxLayout *shiftX_verticalLayout;
    QWidget *shiftX_topContainer;
    QHBoxLayout *shiftX_top_horizontalLayout;
    QLabel *shiftX_label;
    QDoubleSpinBox *shiftX_spinBox;
    QSlider *shiftX_slider;
    QWidget *shiftZ_container;
    QVBoxLayout *shiftZ_verticalLayout;
    QWidget *shiftZ_topContainer;
    QHBoxLayout *shiftZ_top_horizontalLayout;
    QLabel *shiftZ_label;
    QDoubleSpinBox *shiftZ_spinBox;
    QSlider *shiftZ_slider;
    QPushButton *delete_button;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EmojiModelTab)
    {
        if (EmojiModelTab->objectName().isEmpty())
            EmojiModelTab->setObjectName(QStringLiteral("EmojiModelTab"));
        EmojiModelTab->resize(493, 302);
        EmojiModelTab->setStyleSheet(QStringLiteral(""));
        emojiModelTab_gridLayout = new QGridLayout(EmojiModelTab);
        emojiModelTab_gridLayout->setSpacing(0);
        emojiModelTab_gridLayout->setObjectName(QStringLiteral("emojiModelTab_gridLayout"));
        emojiModelTab_gridLayout->setContentsMargins(0, 0, 0, 0);
        tab = new QWidget(EmojiModelTab);
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
"QPushButton::hover {\n"
"	background-color: rgb(30, 191, 236);\n"
"}"));
        tab_verticalLayout = new QVBoxLayout(tab);
        tab_verticalLayout->setObjectName(QStringLiteral("tab_verticalLayout"));
        tab_verticalLayout->setContentsMargins(-1, -1, -1, 0);
        modelName_container = new QWidget(tab);
        modelName_container->setObjectName(QStringLiteral("modelName_container"));
        modelName_horizontalLayout = new QHBoxLayout(modelName_container);
        modelName_horizontalLayout->setSpacing(15);
        modelName_horizontalLayout->setObjectName(QStringLiteral("modelName_horizontalLayout"));
        modelName_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        modelName_label = new QLabel(modelName_container);
        modelName_label->setObjectName(QStringLiteral("modelName_label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(modelName_label->sizePolicy().hasHeightForWidth());
        modelName_label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Semibold"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
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


        tab_verticalLayout->addWidget(modelName_container);

        emojiSettings_container = new QWidget(tab);
        emojiSettings_container->setObjectName(QStringLiteral("emojiSettings_container"));
        emojiSettings_horizontalLayout = new QHBoxLayout(emojiSettings_container);
        emojiSettings_horizontalLayout->setSpacing(0);
        emojiSettings_horizontalLayout->setObjectName(QStringLiteral("emojiSettings_horizontalLayout"));
        emojiSettings_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        emojiImage_label = new QLabel(emojiSettings_container);
        emojiImage_label->setObjectName(QStringLiteral("emojiImage_label"));
        sizePolicy.setHeightForWidth(emojiImage_label->sizePolicy().hasHeightForWidth());
        emojiImage_label->setSizePolicy(sizePolicy);
        emojiImage_label->setFont(font);
        emojiImage_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        emojiSettings_horizontalLayout->addWidget(emojiImage_label);

        emojiImage_button = new QPushButton(emojiSettings_container);
        emojiImage_button->setObjectName(QStringLiteral("emojiImage_button"));
        sizePolicy.setHeightForWidth(emojiImage_button->sizePolicy().hasHeightForWidth());
        emojiImage_button->setSizePolicy(sizePolicy);
        emojiImage_button->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
" background-color: transparent;\n"
"padding: 0;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/FileButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        emojiImage_button->setIcon(icon);
        emojiImage_button->setIconSize(QSize(32, 32));
        emojiImage_button->setFlat(true);

        emojiSettings_horizontalLayout->addWidget(emojiImage_button);

        emojiImage_delete = new QPushButton(emojiSettings_container);
        emojiImage_delete->setObjectName(QStringLiteral("emojiImage_delete"));
        sizePolicy.setHeightForWidth(emojiImage_delete->sizePolicy().hasHeightForWidth());
        emojiImage_delete->setSizePolicy(sizePolicy);
        emojiImage_delete->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
" background-color: transparent;\n"
" margin-right: 20;\n"
"padding: 0;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/DeleteButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        emojiImage_delete->setIcon(icon1);
        emojiImage_delete->setIconSize(QSize(32, 32));

        emojiSettings_horizontalLayout->addWidget(emojiImage_delete);

        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        emojiSettings_horizontalLayout->addItem(horizontalSpacer_1);

        imageDirection_label = new QLabel(emojiSettings_container);
        imageDirection_label->setObjectName(QStringLiteral("imageDirection_label"));
        sizePolicy.setHeightForWidth(imageDirection_label->sizePolicy().hasHeightForWidth());
        imageDirection_label->setSizePolicy(sizePolicy);
        imageDirection_label->setFont(font);
        imageDirection_label->setStyleSheet(QStringLiteral(""));
        imageDirection_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        imageDirection_label->setMargin(0);

        emojiSettings_horizontalLayout->addWidget(imageDirection_label);

        imageDirection_comboBox = new QComboBox(emojiSettings_container);
        imageDirection_comboBox->addItem(QString());
        imageDirection_comboBox->addItem(QString());
        imageDirection_comboBox->addItem(QString());
        imageDirection_comboBox->setObjectName(QStringLiteral("imageDirection_comboBox"));
        sizePolicy.setHeightForWidth(imageDirection_comboBox->sizePolicy().hasHeightForWidth());
        imageDirection_comboBox->setSizePolicy(sizePolicy);
        imageDirection_comboBox->setMinimumSize(QSize(105, 0));
        imageDirection_comboBox->setFont(font);
        imageDirection_comboBox->setStyleSheet(QStringLiteral("padding: 2;"));
        imageDirection_comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        imageDirection_comboBox->setFrame(true);

        emojiSettings_horizontalLayout->addWidget(imageDirection_comboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        emojiSettings_horizontalLayout->addItem(horizontalSpacer_2);

        rotation_label = new QLabel(emojiSettings_container);
        rotation_label->setObjectName(QStringLiteral("rotation_label"));
        sizePolicy.setHeightForWidth(rotation_label->sizePolicy().hasHeightForWidth());
        rotation_label->setSizePolicy(sizePolicy);
        rotation_label->setFont(font);
        rotation_label->setStyleSheet(QStringLiteral("margin-left: 20;"));
        rotation_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        emojiSettings_horizontalLayout->addWidget(rotation_label);

        rotation_checkBox = new QCheckBox(emojiSettings_container);
        rotation_checkBox->setObjectName(QStringLiteral("rotation_checkBox"));
        rotation_checkBox->setEnabled(true);
        rotation_checkBox->setChecked(false);

        emojiSettings_horizontalLayout->addWidget(rotation_checkBox);


        tab_verticalLayout->addWidget(emojiSettings_container);

        spatialSettings_Container = new QWidget(tab);
        spatialSettings_Container->setObjectName(QStringLiteral("spatialSettings_Container"));
        gridLayout_spatialSettings = new QGridLayout(spatialSettings_Container);
        gridLayout_spatialSettings->setSpacing(15);
        gridLayout_spatialSettings->setObjectName(QStringLiteral("gridLayout_spatialSettings"));
        gridLayout_spatialSettings->setContentsMargins(0, 0, 0, 0);
        scaleX_container = new QWidget(spatialSettings_Container);
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
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scaleX_label->sizePolicy().hasHeightForWidth());
        scaleX_label->setSizePolicy(sizePolicy1);
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


        gridLayout_spatialSettings->addWidget(scaleX_container, 0, 1, 1, 1);

        shiftY_container = new QWidget(spatialSettings_Container);
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
        sizePolicy1.setHeightForWidth(shiftY_label->sizePolicy().hasHeightForWidth());
        shiftY_label->setSizePolicy(sizePolicy1);
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


        gridLayout_spatialSettings->addWidget(shiftY_container, 1, 0, 1, 1);

        scaleY_container = new QWidget(spatialSettings_Container);
        scaleY_container->setObjectName(QStringLiteral("scaleY_container"));
        scaleY_verticalLayout = new QVBoxLayout(scaleY_container);
        scaleY_verticalLayout->setSpacing(4);
        scaleY_verticalLayout->setObjectName(QStringLiteral("scaleY_verticalLayout"));
        scaleY_verticalLayout->setContentsMargins(0, 0, 0, 0);
        scaleY_topContainer = new QWidget(scaleY_container);
        scaleY_topContainer->setObjectName(QStringLiteral("scaleY_topContainer"));
        scaleY_top_horizontalLayout = new QHBoxLayout(scaleY_topContainer);
        scaleY_top_horizontalLayout->setObjectName(QStringLiteral("scaleY_top_horizontalLayout"));
        scaleY_top_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        scaleY_label = new QLabel(scaleY_topContainer);
        scaleY_label->setObjectName(QStringLiteral("scaleY_label"));
        sizePolicy1.setHeightForWidth(scaleY_label->sizePolicy().hasHeightForWidth());
        scaleY_label->setSizePolicy(sizePolicy1);
        scaleY_label->setFont(font);
        scaleY_label->setStyleSheet(QStringLiteral(""));
        scaleY_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scaleY_label->setMargin(0);

        scaleY_top_horizontalLayout->addWidget(scaleY_label);

        scaleY_spinBox = new QDoubleSpinBox(scaleY_topContainer);
        scaleY_spinBox->setObjectName(QStringLiteral("scaleY_spinBox"));
        scaleY_spinBox->setFont(font1);
        scaleY_spinBox->setStyleSheet(QStringLiteral(""));
        scaleY_spinBox->setFrame(true);
        scaleY_spinBox->setMaximum(4);
        scaleY_spinBox->setSingleStep(0.01);
        scaleY_spinBox->setValue(1);

        scaleY_top_horizontalLayout->addWidget(scaleY_spinBox);


        scaleY_verticalLayout->addWidget(scaleY_topContainer);

        scaleY_slider = new QSlider(scaleY_container);
        scaleY_slider->setObjectName(QStringLiteral("scaleY_slider"));
        scaleY_slider->setMaximum(400);
        scaleY_slider->setValue(100);
        scaleY_slider->setOrientation(Qt::Horizontal);

        scaleY_verticalLayout->addWidget(scaleY_slider);


        gridLayout_spatialSettings->addWidget(scaleY_container, 1, 1, 1, 1);

        shiftX_container = new QWidget(spatialSettings_Container);
        shiftX_container->setObjectName(QStringLiteral("shiftX_container"));
        shiftX_verticalLayout = new QVBoxLayout(shiftX_container);
        shiftX_verticalLayout->setSpacing(4);
        shiftX_verticalLayout->setObjectName(QStringLiteral("shiftX_verticalLayout"));
        shiftX_verticalLayout->setContentsMargins(0, 0, 0, 0);
        shiftX_topContainer = new QWidget(shiftX_container);
        shiftX_topContainer->setObjectName(QStringLiteral("shiftX_topContainer"));
        shiftX_top_horizontalLayout = new QHBoxLayout(shiftX_topContainer);
        shiftX_top_horizontalLayout->setObjectName(QStringLiteral("shiftX_top_horizontalLayout"));
        shiftX_top_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        shiftX_label = new QLabel(shiftX_topContainer);
        shiftX_label->setObjectName(QStringLiteral("shiftX_label"));
        sizePolicy1.setHeightForWidth(shiftX_label->sizePolicy().hasHeightForWidth());
        shiftX_label->setSizePolicy(sizePolicy1);
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


        gridLayout_spatialSettings->addWidget(shiftX_container, 0, 0, 1, 1);

        shiftZ_container = new QWidget(spatialSettings_Container);
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
        sizePolicy1.setHeightForWidth(shiftZ_label->sizePolicy().hasHeightForWidth());
        shiftZ_label->setSizePolicy(sizePolicy1);
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


        gridLayout_spatialSettings->addWidget(shiftZ_container, 2, 0, 1, 1);


        tab_verticalLayout->addWidget(spatialSettings_Container);

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

        tab_verticalLayout->addWidget(delete_button, 0, Qt::AlignRight);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        tab_verticalLayout->addItem(verticalSpacer);


        emojiModelTab_gridLayout->addWidget(tab, 0, 0, 1, 1);


        retranslateUi(EmojiModelTab);

        imageDirection_comboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(EmojiModelTab);
    } // setupUi

    void retranslateUi(QWidget *EmojiModelTab)
    {
        EmojiModelTab->setWindowTitle(QApplication::translate("EmojiModelTab", "EmojiModelTab", nullptr));
        modelName_label->setText(QApplication::translate("EmojiModelTab", "Model name:", nullptr));
        modelName_edit->setText(QApplication::translate("EmojiModelTab", "New Emoji Model", nullptr));
        emojiImage_label->setText(QApplication::translate("EmojiModelTab", "Choose an Image:", nullptr));
        emojiImage_button->setText(QString());
        emojiImage_delete->setText(QString());
        imageDirection_label->setText(QApplication::translate("EmojiModelTab", "Direction:", nullptr));
        imageDirection_comboBox->setItemText(0, QApplication::translate("EmojiModelTab", "looks at left", nullptr));
        imageDirection_comboBox->setItemText(1, QApplication::translate("EmojiModelTab", "symmetric", nullptr));
        imageDirection_comboBox->setItemText(2, QApplication::translate("EmojiModelTab", "looks at right", nullptr));

        rotation_label->setText(QApplication::translate("EmojiModelTab", "Rotation", nullptr));
        rotation_checkBox->setText(QString());
        scaleX_label->setText(QApplication::translate("EmojiModelTab", "Scale X:", nullptr));
        shiftY_label->setText(QApplication::translate("EmojiModelTab", "Shift Y:", nullptr));
        scaleY_label->setText(QApplication::translate("EmojiModelTab", "Scale Y:", nullptr));
        shiftX_label->setText(QApplication::translate("EmojiModelTab", "Shift X:", nullptr));
        shiftZ_label->setText(QApplication::translate("EmojiModelTab", "Shift Z:", nullptr));
        delete_button->setText(QApplication::translate("EmojiModelTab", "Delete Element", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmojiModelTab: public Ui_EmojiModelTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMOJIMODELTAB_H
