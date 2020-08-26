/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_13;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QLineEdit *Display;
    QPushButton *pushButton_4;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QPushButton *pushButton_14;
    QPushButton *pushButton_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_11;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName(QString::fromUtf8("calculator"));
        calculator->resize(377, 314);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(calculator->sizePolicy().hasHeightForWidth());
        calculator->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_8, 2, 3, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_5, 1, 4, 1, 1);

        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_13, 3, 3, 1, 1);

        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_1, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_7, 2, 2, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_6, 2, 1, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid grey;\n"
"	color: #ffffff\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_4, 1, 3, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_10, 3, 0, 1, 1);

        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_12, 3, 2, 1, 1);

        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_14, 3, 4, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_9, 2, 4, 1, 1);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_11, 3, 1, 1, 1);

        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_15, 4, 0, 1, 1);

        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy1.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy1);
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_16, 4, 1, 1, 1);

        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        sizePolicy1.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy1);
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_17, 4, 2, 1, 1);

        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        sizePolicy1.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy1);
        pushButton_18->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_18, 4, 3, 1, 1);

        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        sizePolicy1.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy1);
        pushButton_19->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #696969;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_19, 4, 4, 1, 1);

        calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 377, 21));
        calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        calculator->setStatusBar(statusbar);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "calculator", nullptr));
        pushButton->setText(QCoreApplication::translate("calculator", "4", nullptr));
        pushButton_8->setText(QCoreApplication::translate("calculator", "*", nullptr));
        pushButton_5->setText(QCoreApplication::translate("calculator", "M+", nullptr));
        pushButton_13->setText(QCoreApplication::translate("calculator", "+", nullptr));
        pushButton_1->setText(QCoreApplication::translate("calculator", "7", nullptr));
        pushButton_3->setText(QCoreApplication::translate("calculator", "9", nullptr));
        pushButton_7->setText(QCoreApplication::translate("calculator", "6", nullptr));
        pushButton_6->setText(QCoreApplication::translate("calculator", "5", nullptr));
        Display->setText(QCoreApplication::translate("calculator", "0.0", nullptr));
        pushButton_4->setText(QCoreApplication::translate("calculator", "/", nullptr));
        pushButton_10->setText(QCoreApplication::translate("calculator", "1", nullptr));
        pushButton_12->setText(QCoreApplication::translate("calculator", "3", nullptr));
        pushButton_14->setText(QCoreApplication::translate("calculator", "M", nullptr));
        pushButton_2->setText(QCoreApplication::translate("calculator", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("calculator", "M-", nullptr));
        pushButton_11->setText(QCoreApplication::translate("calculator", "2", nullptr));
        pushButton_15->setText(QCoreApplication::translate("calculator", "AC", nullptr));
        pushButton_16->setText(QCoreApplication::translate("calculator", "0", nullptr));
        pushButton_17->setText(QCoreApplication::translate("calculator", "+/-", nullptr));
        pushButton_18->setText(QCoreApplication::translate("calculator", "-", nullptr));
        pushButton_19->setText(QCoreApplication::translate("calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
