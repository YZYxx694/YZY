/********************************************************************************
** Form generated from reading UI file 'rsa.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RSA_H
#define UI_RSA_H

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

class Ui_rsa
{
public:
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *inputp;
    QLineEdit *inputq;
    QLineEdit *inpute;
    QPushButton *inputprime;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *outputt;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *outpubkey;
    QLineEdit *outputn;
    QLabel *label_5;
    QLineEdit *outprikey;
    QGridLayout *gridLayout;
    QPushButton *inputesure;
    QLabel *label_7;
    QLineEdit *inputpubn;
    QLineEdit *cybrotext;
    QLabel *label_8;
    QLineEdit *inputpube;
    QLineEdit *inputplaintext;
    QLabel *label_6;
    QGridLayout *gridLayout_3;
    QLineEdit *inputprin;
    QLineEdit *outplaintext;
    QLabel *label_9;
    QLineEdit *inputprid;
    QLabel *label_11;
    QPushButton *pushButton_4;
    QLineEdit *inputcrybotext;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *rsa)
    {
        if (rsa->objectName().isEmpty())
            rsa->setObjectName(QString::fromUtf8("rsa"));
        rsa->resize(900, 600);
        gridLayout_4 = new QGridLayout(rsa);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        frame = new QFrame(rsa);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color : white;\n"
"}\n"
"QFrame#frame{\n"
"	 background-color:white;\n"
"	border-radius: 15px;\n"
"	background-image: url(:/prefix1/back.jpg);\n"
"}*{\n"
"	background-color :white;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        horizontalLayout->addWidget(label);

        inputp = new QLineEdit(frame);
        inputp->setObjectName(QString::fromUtf8("inputp"));
        inputp->setMinimumSize(QSize(0, 30));
        inputp->setFont(font);

        horizontalLayout->addWidget(inputp);

        inputq = new QLineEdit(frame);
        inputq->setObjectName(QString::fromUtf8("inputq"));
        inputq->setMinimumSize(QSize(0, 30));
        inputq->setFont(font);

        horizontalLayout->addWidget(inputq);

        inpute = new QLineEdit(frame);
        inpute->setObjectName(QString::fromUtf8("inpute"));
        inpute->setMinimumSize(QSize(0, 30));
        inpute->setFont(font);

        horizontalLayout->addWidget(inpute);

        inputprime = new QPushButton(frame);
        inputprime->setObjectName(QString::fromUtf8("inputprime"));
        inputprime->setMinimumSize(QSize(200, 50));
        inputprime->setFont(font);

        horizontalLayout->addWidget(inputprime);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout_2->addWidget(label_4, 0, 2, 1, 1);

        outputt = new QLineEdit(frame);
        outputt->setObjectName(QString::fromUtf8("outputt"));
        outputt->setMinimumSize(QSize(0, 30));
        outputt->setFont(font);

        gridLayout_2->addWidget(outputt, 2, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout_2->addWidget(label_3, 0, 1, 1, 1);

        outpubkey = new QLineEdit(frame);
        outpubkey->setObjectName(QString::fromUtf8("outpubkey"));
        outpubkey->setMinimumSize(QSize(0, 30));
        outpubkey->setFont(font);

        gridLayout_2->addWidget(outpubkey, 2, 2, 1, 1);

        outputn = new QLineEdit(frame);
        outputn->setObjectName(QString::fromUtf8("outputn"));
        outputn->setMinimumSize(QSize(0, 30));
        outputn->setFont(font);

        gridLayout_2->addWidget(outputn, 2, 0, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout_2->addWidget(label_5, 0, 3, 1, 1);

        outprikey = new QLineEdit(frame);
        outprikey->setObjectName(QString::fromUtf8("outprikey"));
        outprikey->setMinimumSize(QSize(0, 30));
        outprikey->setFont(font);

        gridLayout_2->addWidget(outprikey, 2, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        inputesure = new QPushButton(frame);
        inputesure->setObjectName(QString::fromUtf8("inputesure"));
        inputesure->setMinimumSize(QSize(200, 50));
        inputesure->setFont(font);

        gridLayout->addWidget(inputesure, 1, 2, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        inputpubn = new QLineEdit(frame);
        inputpubn->setObjectName(QString::fromUtf8("inputpubn"));
        inputpubn->setMinimumSize(QSize(0, 30));
        inputpubn->setFont(font);

        gridLayout->addWidget(inputpubn, 0, 2, 1, 1);

        cybrotext = new QLineEdit(frame);
        cybrotext->setObjectName(QString::fromUtf8("cybrotext"));
        cybrotext->setMinimumSize(QSize(0, 30));
        cybrotext->setFont(font);

        gridLayout->addWidget(cybrotext, 1, 4, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout->addWidget(label_8, 1, 3, 1, 1);

        inputpube = new QLineEdit(frame);
        inputpube->setObjectName(QString::fromUtf8("inputpube"));
        inputpube->setMinimumSize(QSize(0, 30));
        inputpube->setFont(font);

        gridLayout->addWidget(inputpube, 0, 1, 1, 1);

        inputplaintext = new QLineEdit(frame);
        inputplaintext->setObjectName(QString::fromUtf8("inputplaintext"));
        inputplaintext->setMinimumSize(QSize(0, 30));
        inputplaintext->setFont(font);

        gridLayout->addWidget(inputplaintext, 1, 1, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        inputprin = new QLineEdit(frame);
        inputprin->setObjectName(QString::fromUtf8("inputprin"));
        inputprin->setMinimumSize(QSize(0, 30));
        inputprin->setFont(font);

        gridLayout_3->addWidget(inputprin, 0, 2, 1, 1);

        outplaintext = new QLineEdit(frame);
        outplaintext->setObjectName(QString::fromUtf8("outplaintext"));
        outplaintext->setMinimumSize(QSize(0, 30));
        outplaintext->setFont(font);

        gridLayout_3->addWidget(outplaintext, 1, 4, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout_3->addWidget(label_9, 0, 0, 1, 1);

        inputprid = new QLineEdit(frame);
        inputprid->setObjectName(QString::fromUtf8("inputprid"));
        inputprid->setMinimumSize(QSize(0, 30));
        inputprid->setFont(font);

        gridLayout_3->addWidget(inputprid, 0, 1, 1, 1);

        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout_3->addWidget(label_11, 1, 3, 1, 1);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(200, 50));
        pushButton_4->setFont(font);

        gridLayout_3->addWidget(pushButton_4, 1, 2, 1, 1);

        inputcrybotext = new QLineEdit(frame);
        inputcrybotext->setObjectName(QString::fromUtf8("inputcrybotext"));
        inputcrybotext->setMinimumSize(QSize(0, 30));
        inputcrybotext->setFont(font);

        gridLayout_3->addWidget(inputcrybotext, 1, 1, 1, 1);

        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        gridLayout_3->addWidget(label_10, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        gridLayout_4->addWidget(frame, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer, 2, 1, 1, 1);


        retranslateUi(rsa);

        QMetaObject::connectSlotsByName(rsa);
    } // setupUi

    void retranslateUi(QWidget *rsa)
    {
        rsa->setWindowTitle(QCoreApplication::translate("rsa", "Form", nullptr));
        label->setText(QCoreApplication::translate("rsa", "\350\257\267\350\276\223\345\205\245\344\270\244\344\270\252\347\264\240\346\225\260p,q\345\222\214\345\257\206\351\222\245e:", nullptr));
        inputprime->setText(QCoreApplication::translate("rsa", "\347\241\256\345\256\232", nullptr));
        label_4->setText(QCoreApplication::translate("rsa", "\345\205\254\351\222\245(e,n):", nullptr));
        label_2->setText(QCoreApplication::translate("rsa", "n = p*q:", nullptr));
        label_3->setText(QCoreApplication::translate("rsa", "t = (p-1)*(q-1):", nullptr));
        label_5->setText(QCoreApplication::translate("rsa", "\347\247\201\351\222\245(d,n):", nullptr));
        inputesure->setText(QCoreApplication::translate("rsa", "\347\241\256\345\256\232", nullptr));
        label_7->setText(QCoreApplication::translate("rsa", "\350\257\267\350\276\223\345\205\245\346\230\216\346\226\207(\346\230\216\346\226\207\351\234\200\345\260\217\344\272\216n):", nullptr));
        label_8->setText(QCoreApplication::translate("rsa", "\345\257\206\346\226\207\344\270\272:", nullptr));
        label_6->setText(QCoreApplication::translate("rsa", "\350\257\267\350\276\223\345\205\245\345\205\254\351\222\245(e,n):", nullptr));
        label_9->setText(QCoreApplication::translate("rsa", "\350\257\267\350\276\223\345\205\245\347\247\201\351\222\245(d,n):", nullptr));
        label_11->setText(QCoreApplication::translate("rsa", "\346\230\216\346\226\207\344\270\272:", nullptr));
        pushButton_4->setText(QCoreApplication::translate("rsa", "\347\241\256\345\256\232", nullptr));
        label_10->setText(QCoreApplication::translate("rsa", "\350\257\267\350\276\223\345\205\245\345\257\206\346\226\207:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rsa: public Ui_rsa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RSA_H
