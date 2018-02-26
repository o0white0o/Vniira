/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *LND;
    QLabel *LND_CH;
    QLabel *LND_label;
    QLabel *LND_G;
    QLabel *LND_D;
    QLabel *LND_K;
    QFrame *NAV;
    QLabel *NAV_label;
    QLabel *NAV_D;
    QLabel *NAV_CH;
    QLabel *NAV_A;
    QLabel *text_lnd_k;
    QLabel *text_lnd_g;
    QLabel *text_lnd_d;
    QLabel *text_lnd_ch;
    QLabel *text_nav_d;
    QLabel *text_nav_a;
    QLabel *text_nav_ch;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(300, 230);
        MainWindow->setMinimumSize(QSize(300, 230));
        MainWindow->setMaximumSize(QSize(300, 230));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        LND = new QFrame(centralWidget);
        LND->setObjectName(QStringLiteral("LND"));
        LND->setGeometry(QRect(150, 10, 131, 211));
        LND->setFrameShape(QFrame::StyledPanel);
        LND->setFrameShadow(QFrame::Raised);
        LND_CH = new QLabel(LND);
        LND_CH->setObjectName(QStringLiteral("LND_CH"));
        LND_CH->setGeometry(QRect(10, 170, 31, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        LND_CH->setFont(font);
        LND_CH->setLayoutDirection(Qt::LeftToRight);
        LND_CH->setStyleSheet(QStringLiteral(";"));
        LND_CH->setAlignment(Qt::AlignCenter);
        LND_label = new QLabel(LND);
        LND_label->setObjectName(QStringLiteral("LND_label"));
        LND_label->setGeometry(QRect(10, 10, 111, 31));
        LND_label->setFont(font);
        LND_label->setLayoutDirection(Qt::LeftToRight);
        LND_label->setStyleSheet(QStringLiteral(""));
        LND_label->setAlignment(Qt::AlignCenter);
        LND_G = new QLabel(LND);
        LND_G->setObjectName(QStringLiteral("LND_G"));
        LND_G->setGeometry(QRect(10, 90, 31, 31));
        LND_G->setFont(font);
        LND_G->setLayoutDirection(Qt::LeftToRight);
        LND_G->setStyleSheet(QStringLiteral(" ;"));
        LND_G->setAlignment(Qt::AlignCenter);
        LND_D = new QLabel(LND);
        LND_D->setObjectName(QStringLiteral("LND_D"));
        LND_D->setGeometry(QRect(10, 130, 31, 31));
        LND_D->setFont(font);
        LND_D->setLayoutDirection(Qt::LeftToRight);
        LND_D->setStyleSheet(QStringLiteral(""));
        LND_D->setAlignment(Qt::AlignCenter);
        LND_K = new QLabel(LND);
        LND_K->setObjectName(QStringLiteral("LND_K"));
        LND_K->setGeometry(QRect(10, 50, 31, 31));
        LND_K->setFont(font);
        LND_K->setLayoutDirection(Qt::LeftToRight);
        LND_K->setStyleSheet(QStringLiteral(""));
        LND_K->setAlignment(Qt::AlignCenter);
        NAV = new QFrame(centralWidget);
        NAV->setObjectName(QStringLiteral("NAV"));
        NAV->setEnabled(true);
        NAV->setGeometry(QRect(10, 10, 131, 211));
        NAV->setFrameShape(QFrame::StyledPanel);
        NAV->setFrameShadow(QFrame::Raised);
        NAV_label = new QLabel(NAV);
        NAV_label->setObjectName(QStringLiteral("NAV_label"));
        NAV_label->setGeometry(QRect(10, 10, 111, 31));
        NAV_label->setFont(font);
        NAV_label->setContextMenuPolicy(Qt::NoContextMenu);
        NAV_label->setLayoutDirection(Qt::LeftToRight);
        NAV_label->setStyleSheet(QStringLiteral(""));
        NAV_label->setAlignment(Qt::AlignCenter);
        NAV_D = new QLabel(NAV);
        NAV_D->setObjectName(QStringLiteral("NAV_D"));
        NAV_D->setGeometry(QRect(10, 90, 31, 31));
        NAV_D->setFont(font);
        NAV_D->setLayoutDirection(Qt::LeftToRight);
        NAV_D->setStyleSheet(QStringLiteral(""));
        NAV_D->setAlignment(Qt::AlignCenter);
        NAV_CH = new QLabel(NAV);
        NAV_CH->setObjectName(QStringLiteral("NAV_CH"));
        NAV_CH->setGeometry(QRect(10, 130, 31, 31));
        NAV_CH->setFont(font);
        NAV_CH->setLayoutDirection(Qt::LeftToRight);
        NAV_CH->setStyleSheet(QStringLiteral(""));
        NAV_CH->setAlignment(Qt::AlignCenter);
        NAV_A = new QLabel(NAV);
        NAV_A->setObjectName(QStringLiteral("NAV_A"));
        NAV_A->setGeometry(QRect(10, 50, 31, 31));
        NAV_A->setFont(font);
        NAV_A->setLayoutDirection(Qt::LeftToRight);
        NAV_A->setStyleSheet(QStringLiteral(""));
        NAV_A->setAlignment(Qt::AlignCenter);
        NAV_CH->raise();
        NAV_A->raise();
        NAV_label->raise();
        NAV_D->raise();
        text_lnd_k = new QLabel(centralWidget);
        text_lnd_k->setObjectName(QStringLiteral("text_lnd_k"));
        text_lnd_k->setGeometry(QRect(210, 70, 47, 13));
        text_lnd_g = new QLabel(centralWidget);
        text_lnd_g->setObjectName(QStringLiteral("text_lnd_g"));
        text_lnd_g->setGeometry(QRect(210, 110, 47, 13));
        text_lnd_d = new QLabel(centralWidget);
        text_lnd_d->setObjectName(QStringLiteral("text_lnd_d"));
        text_lnd_d->setGeometry(QRect(210, 150, 47, 13));
        text_lnd_ch = new QLabel(centralWidget);
        text_lnd_ch->setObjectName(QStringLiteral("text_lnd_ch"));
        text_lnd_ch->setGeometry(QRect(210, 190, 47, 13));
        text_nav_d = new QLabel(centralWidget);
        text_nav_d->setObjectName(QStringLiteral("text_nav_d"));
        text_nav_d->setGeometry(QRect(60, 110, 47, 13));
        text_nav_a = new QLabel(centralWidget);
        text_nav_a->setObjectName(QStringLiteral("text_nav_a"));
        text_nav_a->setGeometry(QRect(60, 70, 47, 13));
        text_nav_a->setStyleSheet(QStringLiteral(""));
        text_nav_ch = new QLabel(centralWidget);
        text_nav_ch->setObjectName(QStringLiteral("text_nav_ch"));
        text_nav_ch->setGeometry(QRect(60, 150, 47, 13));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\222\320\235\320\230\320\230\320\240\320\220", 0));
        LND_CH->setText(QApplication::translate("MainWindow", "\320\247", 0));
        LND_label->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\320\260\320\264\320\272\320\260", 0));
#ifndef QT_NO_STATUSTIP
        LND_G->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        LND_G->setText(QApplication::translate("MainWindow", "\320\223", 0));
        LND_D->setText(QApplication::translate("MainWindow", "\320\224", 0));
        LND_K->setText(QApplication::translate("MainWindow", "\320\232", 0));
        NAV_label->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\262\320\270\320\263\320\260\321\206\320\270\321\217", 0));
        NAV_D->setText(QApplication::translate("MainWindow", "\320\224", 0));
        NAV_CH->setText(QApplication::translate("MainWindow", "\320\247", 0));
        NAV_A->setText(QApplication::translate("MainWindow", "\320\220", 0));
        text_lnd_k->setText(QString());
        text_lnd_g->setText(QString());
        text_lnd_d->setText(QString());
        text_lnd_ch->setText(QString());
        text_nav_d->setText(QString());
        text_nav_a->setText(QString());
        text_nav_ch->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
