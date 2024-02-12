/********************************************************************************
** Form generated from reading UI file 'OutputWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTWINDOW_H
#define UI_OUTPUTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutputWindow
{
public:
    QAction *actionFull_Screen;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *outputFrame;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuView;

    void setupUi(QMainWindow *OutputWindow)
    {
        if (OutputWindow->objectName().isEmpty())
            OutputWindow->setObjectName(QStringLiteral("OutputWindow"));
        OutputWindow->resize(1298, 789);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/AppIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        OutputWindow->setWindowIcon(icon);
        OutputWindow->setAutoFillBackground(true);
        actionFull_Screen = new QAction(OutputWindow);
        actionFull_Screen->setObjectName(QStringLiteral("actionFull_Screen"));
        centralWidget = new QWidget(OutputWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        outputFrame = new QFrame(centralWidget);
        outputFrame->setObjectName(QStringLiteral("outputFrame"));
        outputFrame->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(outputFrame->sizePolicy().hasHeightForWidth());
        outputFrame->setSizePolicy(sizePolicy);
        outputFrame->setMinimumSize(QSize(1280, 720));
        outputFrame->setFrameShape(QFrame::StyledPanel);
        outputFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(outputFrame, 0, 1, 1, 1);

        OutputWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(OutputWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OutputWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OutputWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OutputWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(OutputWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1298, 21));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        OutputWindow->setMenuBar(menuBar);

        menuBar->addAction(menuView->menuAction());
        menuView->addAction(actionFull_Screen);

        retranslateUi(OutputWindow);

        QMetaObject::connectSlotsByName(OutputWindow);
    } // setupUi

    void retranslateUi(QMainWindow *OutputWindow)
    {
        OutputWindow->setWindowTitle(QApplication::translate("OutputWindow", "Filter Fan Cam Output", nullptr));
        actionFull_Screen->setText(QApplication::translate("OutputWindow", "Full Screen", nullptr));
        menuView->setTitle(QApplication::translate("OutputWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OutputWindow: public Ui_OutputWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTWINDOW_H
