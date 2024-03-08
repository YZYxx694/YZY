/********************************************************************************
** Form generated from reading UI file 'desjiami.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESJIAMI_H
#define UI_DESJIAMI_H

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

class Ui_desjiami
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *inputming;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *inputkey;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *inputmi;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *jiami;
    QPushButton *jiemi;
    QLabel *label_4;
    QLineEdit *output;
    QLabel *label_6;
    QLineEdit *shijinzhi;
    QLabel *label_7;
    QLineEdit *outputans;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_5;

    void setupUi(QWidget *desjiami)
    {
        if (desjiami->objectName().isEmpty())
            desjiami->setObjectName(QString::fromUtf8("desjiami"));
        desjiami->resize(740, 600);
        QFont font;
        font.setPointSize(12);
        desjiami->setFont(font);
        gridLayout = new QGridLayout(desjiami);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(desjiami);
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
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        horizontalLayout->addWidget(label);

        inputming = new QLineEdit(frame);
        inputming->setObjectName(QString::fromUtf8("inputming"));
        inputming->setMinimumSize(QSize(0, 30));
        inputming->setFont(font);

        horizontalLayout->addWidget(inputming);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        horizontalLayout_2->addWidget(label_3);

        inputkey = new QLineEdit(frame);
        inputkey->setObjectName(QString::fromUtf8("inputkey"));
        inputkey->setMinimumSize(QSize(0, 30));
        inputkey->setFont(font);

        horizontalLayout_2->addWidget(inputkey);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        horizontalLayout_3->addWidget(label_2);

        inputmi = new QLineEdit(frame);
        inputmi->setObjectName(QString::fromUtf8("inputmi"));
        inputmi->setMinimumSize(QSize(0, 30));
        inputmi->setFont(font);

        horizontalLayout_3->addWidget(inputmi);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        jiami = new QPushButton(frame);
        jiami->setObjectName(QString::fromUtf8("jiami"));
        jiami->setMinimumSize(QSize(0, 50));
        jiami->setFont(font);

        horizontalLayout_4->addWidget(jiami);

        jiemi = new QPushButton(frame);
        jiemi->setObjectName(QString::fromUtf8("jiemi"));
        jiemi->setMinimumSize(QSize(0, 50));
        jiemi->setFont(font);

        horizontalLayout_4->addWidget(jiemi);


        verticalLayout->addLayout(horizontalLayout_4);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 20));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color : rgb(0,0,0,0);\n"
"}"));

        verticalLayout->addWidget(label_4);

        output = new QLineEdit(frame);
        output->setObjectName(QString::fromUtf8("output"));
        output->setMinimumSize(QSize(0, 30));
        output->setFont(font);

        verticalLayout->addWidget(output);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 20));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color : rgb(0,0,0,0);\n"
"}"));

        verticalLayout->addWidget(label_6);

        shijinzhi = new QLineEdit(frame);
        shijinzhi->setObjectName(QString::fromUtf8("shijinzhi"));
        shijinzhi->setFont(font);

        verticalLayout->addWidget(shijinzhi);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 20));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        verticalLayout->addWidget(label_7);

        outputans = new QLineEdit(frame);
        outputans->setObjectName(QString::fromUtf8("outputans"));
        outputans->setFont(font);

        verticalLayout->addWidget(outputans);


        gridLayout->addWidget(frame, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        label_5 = new QLabel(desjiami);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(label_5, 2, 1, 1, 1);


        retranslateUi(desjiami);

        QMetaObject::connectSlotsByName(desjiami);
    } // setupUi

    void retranslateUi(QWidget *desjiami)
    {
        desjiami->setWindowTitle(QCoreApplication::translate("desjiami", "Form", nullptr));
        label->setText(QCoreApplication::translate("desjiami", "\350\257\267\350\276\223\345\205\245\346\230\216\346\226\207", nullptr));
        label_3->setText(QCoreApplication::translate("desjiami", "\350\257\267\350\276\223\345\205\245\345\257\206\351\222\245", nullptr));
        label_2->setText(QCoreApplication::translate("desjiami", "\350\257\267\350\276\223\345\205\245\345\257\206\346\226\207", nullptr));
        jiami->setText(QCoreApplication::translate("desjiami", "\345\212\240\345\257\206", nullptr));
        jiemi->setText(QCoreApplication::translate("desjiami", "\350\247\243\345\257\206", nullptr));
        label_4->setText(QCoreApplication::translate("desjiami", "\344\272\214\350\277\233\345\210\266\345\212\240\345\257\206\347\273\223\346\236\234\344\270\272\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("desjiami", "\345\215\201\350\277\233\345\210\266\347\273\223\346\236\234\344\270\272\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("desjiami", "\350\247\243\345\257\206\347\273\223\346\236\234\344\270\272\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("desjiami", "\346\263\250\346\204\217\344\272\213\351\241\271\357\274\232\n"
"1\343\200\201\350\276\223\345\207\272\345\257\206\346\226\207\351\273\230\350\256\244\344\270\272\344\272\214\350\277\233\345\210\266\345\255\227\347\254\246\344\270\262\357\274\233\n"
"2\343\200\201\350\276\223\345\205\245\345\257\206\346\226\207\350\246\201\346\261\202\344\270\272\344\272\214\350\277\233\345\210\266\345\255\227\347\254\246\344\270\262\344\270\224\351\225\277\345\272\246\344\270\27264\347\232\204\345\200\215\346\225\260\357\274\214\345\220\246\345\210\231\350\247\243\345\257\206\344\274\232\345\207\272\351\224\231\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class desjiami: public Ui_desjiami {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESJIAMI_H
