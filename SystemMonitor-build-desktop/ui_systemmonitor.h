/********************************************************************************
** Form generated from reading UI file 'systemmonitor.ui'
**
** Created: Wed Oct 13 20:59:40 2021
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMMONITOR_H
#define UI_SYSTEMMONITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemMonitor
{
public:
    QWidget *centralWidget;
    QPushButton *SM;
    QComboBox *comboBox;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SystemMonitor)
    {
        if (SystemMonitor->objectName().isEmpty())
            SystemMonitor->setObjectName(QString::fromUtf8("SystemMonitor"));
        SystemMonitor->resize(300, 200);
        SystemMonitor->setMinimumSize(QSize(300, 200));
        SystemMonitor->setMaximumSize(QSize(300, 200));
        SystemMonitor->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 213, 213);"));
        centralWidget = new QWidget(SystemMonitor);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        SM = new QPushButton(centralWidget);
        SM->setObjectName(QString::fromUtf8("SM"));
        SM->setGeometry(QRect(200, 70, 80, 26));
        SM->setStyleSheet(QString::fromUtf8(""));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 70, 151, 25));
        comboBox->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(25, 110, 251, 20));
        SystemMonitor->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SystemMonitor);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 300, 23));
        SystemMonitor->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SystemMonitor);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SystemMonitor->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SystemMonitor);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SystemMonitor->setStatusBar(statusBar);

        retranslateUi(SystemMonitor);

        QMetaObject::connectSlotsByName(SystemMonitor);
    } // setupUi

    void retranslateUi(QMainWindow *SystemMonitor)
    {
        SystemMonitor->setWindowTitle(QApplication::translate("SystemMonitor", "SystemMonitor", 0, QApplication::UnicodeUTF8));
        SM->setText(QApplication::translate("SystemMonitor", "OK", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SystemMonitor: public Ui_SystemMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMMONITOR_H
