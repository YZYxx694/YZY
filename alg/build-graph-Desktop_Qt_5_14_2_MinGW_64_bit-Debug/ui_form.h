/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *giveans;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *answer;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *startver;
    QLineEdit *endver;
    QLineEdit *edgeweight;
    QPushButton *addedge;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *count;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *surecnt;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(800, 450);
        gridLayout_2 = new QGridLayout(Form);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        frame = new QFrame(Form);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color : white;\n"
"}\n"
"QFrame#frame{\n"
"	 background-color:white;\n"
"	border-radius: 15px;\n"
"	background-image: url(:/prefix1/back.jpg);\n"
"}*{\n"
"	background-color : white;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        giveans = new QPushButton(frame);
        giveans->setObjectName(QString::fromUtf8("giveans"));
        giveans->setMinimumSize(QSize(100, 50));
        QFont font;
        font.setPointSize(12);
        giveans->setFont(font);

        horizontalLayout_3->addWidget(giveans);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        answer = new QLineEdit(frame);
        answer->setObjectName(QString::fromUtf8("answer"));
        answer->setEnabled(true);
        answer->setMinimumSize(QSize(0, 30));
        answer->setMaximumSize(QSize(200, 16777215));
        answer->setFont(font);
        answer->setCursor(QCursor(Qt::IBeamCursor));

        horizontalLayout_3->addWidget(answer);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        horizontalLayout_2->addWidget(label_2);

        startver = new QLineEdit(frame);
        startver->setObjectName(QString::fromUtf8("startver"));
        startver->setMinimumSize(QSize(0, 30));
        startver->setFont(font);

        horizontalLayout_2->addWidget(startver);

        endver = new QLineEdit(frame);
        endver->setObjectName(QString::fromUtf8("endver"));
        endver->setMinimumSize(QSize(0, 30));
        endver->setFont(font);

        horizontalLayout_2->addWidget(endver);

        edgeweight = new QLineEdit(frame);
        edgeweight->setObjectName(QString::fromUtf8("edgeweight"));
        edgeweight->setMinimumSize(QSize(0, 30));
        edgeweight->setFont(font);

        horizontalLayout_2->addWidget(edgeweight);

        addedge = new QPushButton(frame);
        addedge->setObjectName(QString::fromUtf8("addedge"));
        addedge->setMinimumSize(QSize(100, 40));
        addedge->setFont(font);

        horizontalLayout_2->addWidget(addedge);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        count = new QLineEdit(frame);
        count->setObjectName(QString::fromUtf8("count"));
        count->setMinimumSize(QSize(0, 30));
        count->setMaximumSize(QSize(200, 16777215));
        count->setFont(font);

        horizontalLayout->addWidget(count);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        surecnt = new QPushButton(frame);
        surecnt->setObjectName(QString::fromUtf8("surecnt"));
        surecnt->setMinimumSize(QSize(100, 40));
        surecnt->setMaximumSize(QSize(100, 16777215));
        surecnt->setFont(font);

        horizontalLayout->addWidget(surecnt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 4, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        frame->raise();

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        giveans->setText(QCoreApplication::translate("Form", "\350\256\241\347\256\227\346\234\200\345\260\217\351\200\240\344\273\267", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "\350\257\267\350\276\223\345\205\245\350\276\271\347\232\204\350\265\267\347\202\271\357\274\214\347\273\210\347\202\271\345\222\214\351\200\240\344\273\267\357\274\232", nullptr));
        addedge->setText(QCoreApplication::translate("Form", "\346\267\273\345\212\240\350\276\271", nullptr));
        label->setText(QCoreApplication::translate("Form", "\350\257\267\350\276\223\345\205\245\347\202\271\347\232\204\344\270\252\346\225\260\357\274\232", nullptr));
        surecnt->setText(QCoreApplication::translate("Form", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
