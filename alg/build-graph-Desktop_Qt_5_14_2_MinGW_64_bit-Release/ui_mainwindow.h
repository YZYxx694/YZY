/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *encryptButton;
    QPushButton *Floyd;
    QPushButton *Prim;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(566, 481);
        MainWindow->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8("icon.ico"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QString::fromUtf8(":/prefix1/icon.ico"), QSize(), QIcon::Disabled, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/prefix1/icon.ico"), QSize(), QIcon::Disabled, QIcon::On);
        icon.addFile(QString::fromUtf8("icon.ico"), QSize(), QIcon::Active, QIcon::Off);
        icon.addFile(QString::fromUtf8("icon.ico"), QSize(), QIcon::Active, QIcon::On);
        icon.addFile(QString::fromUtf8("icon.ico"), QSize(), QIcon::Selected, QIcon::Off);
        icon.addFile(QString::fromUtf8("icon.ico"), QSize(), QIcon::Selected, QIcon::On);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color:#65d7d7;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, -1, 0, -1);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(200, 50));
        pushButton->setMaximumSize(QSize(200, 16777215));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        encryptButton = new QPushButton(frame);
        encryptButton->setObjectName(QString::fromUtf8("encryptButton"));
        encryptButton->setMinimumSize(QSize(0, 50));
        encryptButton->setMaximumSize(QSize(200, 16777215));
        encryptButton->setFont(font);

        verticalLayout->addWidget(encryptButton);

        Floyd = new QPushButton(frame);
        Floyd->setObjectName(QString::fromUtf8("Floyd"));
        Floyd->setMinimumSize(QSize(0, 50));
        Floyd->setMaximumSize(QSize(200, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(true);
        Floyd->setFont(font1);

        verticalLayout->addWidget(Floyd);

        Prim = new QPushButton(frame);
        Prim->setObjectName(QString::fromUtf8("Prim"));
        Prim->setMinimumSize(QSize(0, 50));
        Prim->setMaximumSize(QSize(200, 16777215));
        Prim->setFont(font1);

        verticalLayout->addWidget(Prim);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 50));
        pushButton_2->setMaximumSize(QSize(200, 16777215));
        pushButton_2->setFont(font);
        pushButton_2->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout->addWidget(frame, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(400, 20));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(100, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 566, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\347\275\221\347\273\234\344\270\255\347\232\204\346\234\200\345\244\247\346\265\201\351\207\217", nullptr));
        encryptButton->setText(QCoreApplication::translate("MainWindow", "DES\345\212\240\345\257\206/\350\247\243\345\257\206", nullptr));
        Floyd->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\347\275\221\347\273\234\344\270\255\347\232\204\346\234\200\347\237\255\350\267\257\347\224\261", nullptr));
        Prim->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\347\275\221\347\273\234\347\232\204\346\234\200\345\260\217\351\200\240\344\273\267", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "RSA\345\212\240\345\257\206/\350\247\243\345\257\206", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "                        create by w,z,m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
