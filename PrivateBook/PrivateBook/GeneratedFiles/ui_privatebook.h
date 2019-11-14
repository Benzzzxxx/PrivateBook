/********************************************************************************
** Form generated from reading UI file 'privatebook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVATEBOOK_H
#define UI_PRIVATEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrivateBookClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PrivateBookClass)
    {
        if (PrivateBookClass->objectName().isEmpty())
            PrivateBookClass->setObjectName(QStringLiteral("PrivateBookClass"));
        PrivateBookClass->resize(600, 400);
        menuBar = new QMenuBar(PrivateBookClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        PrivateBookClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PrivateBookClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PrivateBookClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(PrivateBookClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PrivateBookClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(PrivateBookClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PrivateBookClass->setStatusBar(statusBar);

        retranslateUi(PrivateBookClass);

        QMetaObject::connectSlotsByName(PrivateBookClass);
    } // setupUi

    void retranslateUi(QMainWindow *PrivateBookClass)
    {
        PrivateBookClass->setWindowTitle(QApplication::translate("PrivateBookClass", "PrivateBook", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PrivateBookClass: public Ui_PrivateBookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIVATEBOOK_H
