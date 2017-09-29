/********************************************************************************
** Form generated from reading UI file 'ImageBoard_Debugger.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEBOARD_DEBUGGER_H
#define UI_IMAGEBOARD_DEBUGGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageBoard_DebuggerClass
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *serialOpenButtom;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageBoard_DebuggerClass)
    {
        if (ImageBoard_DebuggerClass->objectName().isEmpty())
            ImageBoard_DebuggerClass->setObjectName(QStringLiteral("ImageBoard_DebuggerClass"));
        ImageBoard_DebuggerClass->resize(1960, 1252);
        centralWidget = new QWidget(ImageBoard_DebuggerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 1941, 1191));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(horizontalLayoutWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        serialOpenButtom = new QPushButton(tab);
        serialOpenButtom->setObjectName(QStringLiteral("serialOpenButtom"));
        serialOpenButtom->setGeometry(QRect(60, 90, 131, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        ImageBoard_DebuggerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageBoard_DebuggerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1960, 23));
        ImageBoard_DebuggerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImageBoard_DebuggerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ImageBoard_DebuggerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImageBoard_DebuggerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImageBoard_DebuggerClass->setStatusBar(statusBar);

        retranslateUi(ImageBoard_DebuggerClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ImageBoard_DebuggerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImageBoard_DebuggerClass)
    {
        ImageBoard_DebuggerClass->setWindowTitle(QApplication::translate("ImageBoard_DebuggerClass", "ImageBoard_Debugger", Q_NULLPTR));
        serialOpenButtom->setText(QApplication::translate("ImageBoard_DebuggerClass", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ImageBoard_DebuggerClass", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ImageBoard_DebuggerClass", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ImageBoard_DebuggerClass: public Ui_ImageBoard_DebuggerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEBOARD_DEBUGGER_H
