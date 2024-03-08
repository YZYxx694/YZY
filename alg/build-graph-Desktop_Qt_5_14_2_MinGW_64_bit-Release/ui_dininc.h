/********************************************************************************
** Form generated from reading UI file 'dininc.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DININC_H
#define UI_DININC_H

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

class Ui_dininc
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *vercnt;
    QLineEdit *startv;
    QLineEdit *endv;
    QPushButton *surense;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *edgestv;
    QLineEdit *edgeedv;
    QLineEdit *edgeflow;
    QPushButton *addedge;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *calcmaxflow;
    QLineEdit *maxflow;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *dininc)
    {
        if (dininc->objectName().isEmpty())
            dininc->setObjectName(QString::fromUtf8("dininc"));
        dininc->resize(650, 400);
        gridLayout = new QGridLayout(dininc);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        frame = new QFrame(dininc);
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
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        verticalLayout->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        vercnt = new QLineEdit(frame);
        vercnt->setObjectName(QString::fromUtf8("vercnt"));
        vercnt->setMinimumSize(QSize(0, 30));
        vercnt->setFont(font);

        horizontalLayout_3->addWidget(vercnt);

        startv = new QLineEdit(frame);
        startv->setObjectName(QString::fromUtf8("startv"));
        startv->setMinimumSize(QSize(0, 30));
        startv->setFont(font);

        horizontalLayout_3->addWidget(startv);

        endv = new QLineEdit(frame);
        endv->setObjectName(QString::fromUtf8("endv"));
        endv->setMinimumSize(QSize(0, 30));
        endv->setFont(font);

        horizontalLayout_3->addWidget(endv);

        surense = new QPushButton(frame);
        surense->setObjectName(QString::fromUtf8("surense"));
        surense->setMinimumSize(QSize(100, 40));
        surense->setFont(font);

        horizontalLayout_3->addWidget(surense);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(0,0,0,0);\n"
"}"));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        edgestv = new QLineEdit(frame);
        edgestv->setObjectName(QString::fromUtf8("edgestv"));
        edgestv->setMinimumSize(QSize(0, 30));
        edgestv->setFont(font);

        horizontalLayout->addWidget(edgestv);

        edgeedv = new QLineEdit(frame);
        edgeedv->setObjectName(QString::fromUtf8("edgeedv"));
        edgeedv->setMinimumSize(QSize(0, 30));
        edgeedv->setFont(font);

        horizontalLayout->addWidget(edgeedv);

        edgeflow = new QLineEdit(frame);
        edgeflow->setObjectName(QString::fromUtf8("edgeflow"));
        edgeflow->setMinimumSize(QSize(0, 30));
        edgeflow->setFont(font);

        horizontalLayout->addWidget(edgeflow);

        addedge = new QPushButton(frame);
        addedge->setObjectName(QString::fromUtf8("addedge"));
        addedge->setMinimumSize(QSize(100, 40));
        addedge->setFont(font);

        horizontalLayout->addWidget(addedge);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        calcmaxflow = new QPushButton(frame);
        calcmaxflow->setObjectName(QString::fromUtf8("calcmaxflow"));
        calcmaxflow->setMinimumSize(QSize(150, 50));
        calcmaxflow->setMaximumSize(QSize(150, 16777215));
        calcmaxflow->setFont(font);

        horizontalLayout_2->addWidget(calcmaxflow);

        maxflow = new QLineEdit(frame);
        maxflow->setObjectName(QString::fromUtf8("maxflow"));
        maxflow->setMinimumSize(QSize(0, 30));
        maxflow->setMaximumSize(QSize(200, 16777215));
        maxflow->setFont(font);
        maxflow->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_2->addWidget(maxflow);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);


        gridLayout->addWidget(frame, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        frame->raise();

        retranslateUi(dininc);

        QMetaObject::connectSlotsByName(dininc);
    } // setupUi

    void retranslateUi(QWidget *dininc)
    {
        dininc->setWindowTitle(QCoreApplication::translate("dininc", "Form", nullptr));
        label->setText(QCoreApplication::translate("dininc", "                    \350\257\267\350\276\223\345\205\245\347\202\271\347\232\204\344\270\252\346\225\260\344\273\245\345\217\212\346\272\220\347\202\271\345\222\214\346\261\207\347\202\271", nullptr));
        surense->setText(QCoreApplication::translate("dininc", "\347\241\256\345\256\232", nullptr));
        label_2->setText(QCoreApplication::translate("dininc", "            \350\257\267\350\276\223\345\205\245\350\276\271\347\232\204\350\265\267\345\247\213\347\202\271\345\222\214\347\273\210\346\255\242\347\202\271\344\273\245\345\217\212\344\270\244\347\202\271\344\271\213\351\227\264\347\232\204\346\234\200\345\244\247\346\265\201\351\207\217", nullptr));
        addedge->setText(QCoreApplication::translate("dininc", "\346\267\273\345\212\240\350\276\271", nullptr));
        calcmaxflow->setText(QCoreApplication::translate("dininc", "\350\256\241\347\256\227\346\234\200\345\244\247\346\265\201\351\207\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dininc: public Ui_dininc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DININC_H
