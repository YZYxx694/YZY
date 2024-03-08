/********************************************************************************
** Form generated from reading UI file 'shortestpath.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTESTPATH_H
#define UI_SHORTESTPATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shortestpath
{
public:
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *count;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLineEdit *ver2;
    QLineEdit *nodiredge;
    QLineEdit *ver1;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QGridLayout *gridLayout_2;
    QLineEdit *dirver2;
    QLabel *label_5;
    QLabel *label_8;
    QLineEdit *diredge;
    QLabel *label_9;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QLineEdit *dirver1;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QLabel *label_10;
    QPushButton *pushButton_5;
    QLabel *label_11;
    QLineEdit *endver;
    QLineEdit *startver;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *ansdis;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *shortestpath)
    {
        if (shortestpath->objectName().isEmpty())
            shortestpath->setObjectName(QString::fromUtf8("shortestpath"));
        shortestpath->resize(800, 550);
        shortestpath->setStyleSheet(QString::fromUtf8(""));
        gridLayout_4 = new QGridLayout(shortestpath);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_10, 1, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_2, 0, 1, 1, 1);

        frame = new QFrame(shortestpath);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color : white;\n"
"}\n"
"QFrame#frame{\n"
"	 background-color:white;\n"
"	border-radius: 15px;\n"
"	background-image: url(:/prefix1/back.jpg);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        horizontalSpacer = new QSpacerItem(160, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        horizontalLayout->addWidget(label);

        count = new QLineEdit(frame);
        count->setObjectName(QString::fromUtf8("count"));
        count->setMinimumSize(QSize(0, 30));
        count->setMaximumSize(QSize(100, 16777215));
        count->setFont(font);
        count->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color:white;\n"
"}"));

        horizontalLayout->addWidget(count);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 16777215));
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(-1, -1, -1, 15);
        ver2 = new QLineEdit(frame);
        ver2->setObjectName(QString::fromUtf8("ver2"));
        ver2->setMinimumSize(QSize(0, 30));
        ver2->setFont(font);
        ver2->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color:white;\n"
"}"));

        gridLayout->addWidget(ver2, 1, 2, 1, 1);

        nodiredge = new QLineEdit(frame);
        nodiredge->setObjectName(QString::fromUtf8("nodiredge"));
        nodiredge->setMinimumSize(QSize(0, 30));
        nodiredge->setFont(font);
        nodiredge->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color:white;\n"
"}"));

        gridLayout->addWidget(nodiredge, 1, 3, 1, 1);

        ver1 = new QLineEdit(frame);
        ver1->setObjectName(QString::fromUtf8("ver1"));
        ver1->setMinimumSize(QSize(0, 30));
        ver1->setFont(font);
        ver1->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color:white;\n"
"}"));

        gridLayout->addWidget(ver1, 1, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 30));
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 1, 4, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 20));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout->addWidget(label_7, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, -1, -1, 15);
        dirver2 = new QLineEdit(frame);
        dirver2->setObjectName(QString::fromUtf8("dirver2"));
        dirver2->setMinimumSize(QSize(0, 30));
        dirver2->setFont(font);
        dirver2->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color:white;\n"
"}"));

        gridLayout_2->addWidget(dirver2, 1, 2, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout_2->addWidget(label_8, 0, 2, 1, 1);

        diredge = new QLineEdit(frame);
        diredge->setObjectName(QString::fromUtf8("diredge"));
        diredge->setMinimumSize(QSize(0, 30));
        diredge->setFont(font);
        diredge->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color:white;\n"
"}"));

        gridLayout_2->addWidget(diredge, 1, 3, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(0, 20));
        label_9->setMaximumSize(QSize(16777215, 20));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout_2->addWidget(label_9, 0, 3, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(100, 30));
        pushButton_3->setFont(font);

        gridLayout_2->addWidget(pushButton_3, 1, 4, 1, 1);

        dirver1 = new QLineEdit(frame);
        dirver1->setObjectName(QString::fromUtf8("dirver1"));
        dirver1->setMinimumSize(QSize(0, 30));
        dirver1->setFont(font);
        dirver1->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color:white;\n"
"}"));

        gridLayout_2->addWidget(dirver1, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, -1, 15);
        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout_3->addWidget(label_12, 1, 1, 1, 1);

        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(16777215, 20));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout_3->addWidget(label_10, 0, 3, 1, 1);

        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(100, 30));
        pushButton_5->setFont(font);

        gridLayout_3->addWidget(pushButton_5, 1, 5, 1, 1);

        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout_3->addWidget(label_11, 0, 4, 1, 1);

        endver = new QLineEdit(frame);
        endver->setObjectName(QString::fromUtf8("endver"));
        endver->setMinimumSize(QSize(0, 30));
        endver->setFont(font);
        endver->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color:white;\n"
"}"));

        gridLayout_3->addWidget(endver, 1, 4, 1, 1);

        startver = new QLineEdit(frame);
        startver->setObjectName(QString::fromUtf8("startver"));
        startver->setMinimumSize(QSize(0, 30));
        startver->setFont(font);
        startver->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color:white;\n"
"}"));

        gridLayout_3->addWidget(startver, 1, 3, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(150, 40));
        pushButton_4->setFont(font);

        horizontalLayout_2->addWidget(pushButton_4);

        horizontalSpacer_4 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        ansdis = new QLineEdit(frame);
        ansdis->setObjectName(QString::fromUtf8("ansdis"));
        ansdis->setMinimumSize(QSize(0, 30));
        ansdis->setFont(font);
        ansdis->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color:white;\n"
"}"));

        horizontalLayout_2->addWidget(ansdis);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_4->addWidget(frame, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_3, 2, 1, 1, 1);

        frame->raise();

        retranslateUi(shortestpath);

        QMetaObject::connectSlotsByName(shortestpath);
    } // setupUi

    void retranslateUi(QWidget *shortestpath)
    {
        shortestpath->setWindowTitle(QCoreApplication::translate("shortestpath", "Form", nullptr));
        label->setText(QCoreApplication::translate("shortestpath", "\350\257\267\350\276\223\345\205\245\347\202\271\347\232\204\344\270\252\346\225\260", nullptr));
        pushButton->setText(QCoreApplication::translate("shortestpath", "\347\241\256\345\256\232", nullptr));
        label_2->setText(QCoreApplication::translate("shortestpath", "\350\257\267\350\276\223\345\205\245\346\227\240\345\220\221\350\276\271\347\232\204\344\270\244\344\270\252\347\273\223\347\202\271\345\217\212\345\205\266\350\276\271\346\235\203", nullptr));
        pushButton_2->setText(QCoreApplication::translate("shortestpath", "\346\267\273\345\212\240\350\276\271", nullptr));
        label_4->setText(QCoreApplication::translate("shortestpath", "     \350\265\267\347\202\271", nullptr));
        label_6->setText(QCoreApplication::translate("shortestpath", "     \347\273\210\347\202\271", nullptr));
        label_7->setText(QCoreApplication::translate("shortestpath", "     \350\276\271\346\235\203", nullptr));
        label_5->setText(QCoreApplication::translate("shortestpath", "     \350\265\267\347\202\271", nullptr));
        label_8->setText(QCoreApplication::translate("shortestpath", "     \347\273\210\347\202\271", nullptr));
        label_9->setText(QCoreApplication::translate("shortestpath", "     \350\276\271\346\235\203", nullptr));
        label_3->setText(QCoreApplication::translate("shortestpath", "\350\257\267\350\276\223\345\205\245\346\234\211\345\220\221\350\276\271\347\232\204\344\270\244\344\270\252\347\273\223\347\202\271\345\217\212\345\205\266\350\276\271\346\235\203", nullptr));
        pushButton_3->setText(QCoreApplication::translate("shortestpath", "\346\267\273\345\212\240\350\276\271", nullptr));
        label_12->setText(QCoreApplication::translate("shortestpath", "\350\257\267\350\276\223\345\205\245\350\267\257\347\224\261\347\232\204\350\265\267\347\202\271\345\222\214\347\273\210\347\202\271", nullptr));
        label_10->setText(QCoreApplication::translate("shortestpath", "       \350\265\267\347\202\271", nullptr));
        pushButton_5->setText(QCoreApplication::translate("shortestpath", "\347\241\256\345\256\232", nullptr));
        label_11->setText(QCoreApplication::translate("shortestpath", "       \347\273\210\347\202\271", nullptr));
        pushButton_4->setText(QCoreApplication::translate("shortestpath", "\350\256\241\347\256\227\347\273\223\346\236\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shortestpath: public Ui_shortestpath {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTESTPATH_H
