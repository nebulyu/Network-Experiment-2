/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget_exp8_4;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_54;
    QWidget *widget_controller;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_55;
    QComboBox *comboBox_localIp;
    QLabel *label_56;
    QLineEdit *lineEdit_port;
    QLabel *label_57;
    QLineEdit *lineEdit_fileName;
    QPushButton *pushButton_start;
    QWidget *widget_debug;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_58;
    QTextBrowser *textBrowser_debug;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(874, 485);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        widget_exp8_4 = new QWidget(centralWidget);
        widget_exp8_4->setObjectName("widget_exp8_4");
        widget_exp8_4->setGeometry(QRect(10, 10, 856, 462));
        verticalLayout_19 = new QVBoxLayout(widget_exp8_4);
        verticalLayout_19->setSpacing(5);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName("verticalLayout_19");
        verticalLayout_19->setContentsMargins(5, 5, 5, 5);
        label_54 = new QLabel(widget_exp8_4);
        label_54->setObjectName("label_54");
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\261\211\344\273\252\346\227\227\351\273\221 90S")});
        font.setPointSize(15);
        font.setBold(true);
        label_54->setFont(font);
        label_54->setAlignment(Qt::AlignCenter);

        verticalLayout_19->addWidget(label_54);

        widget_controller = new QWidget(widget_exp8_4);
        widget_controller->setObjectName("widget_controller");
        horizontalLayout_23 = new QHBoxLayout(widget_controller);
        horizontalLayout_23->setSpacing(5);
        horizontalLayout_23->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        horizontalLayout_23->setContentsMargins(5, 5, 5, 5);
        label_55 = new QLabel(widget_controller);
        label_55->setObjectName("label_55");
        label_55->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(label_55);

        comboBox_localIp = new QComboBox(widget_controller);
        comboBox_localIp->setObjectName("comboBox_localIp");

        horizontalLayout_23->addWidget(comboBox_localIp);

        label_56 = new QLabel(widget_controller);
        label_56->setObjectName("label_56");
        label_56->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(label_56);

        lineEdit_port = new QLineEdit(widget_controller);
        lineEdit_port->setObjectName("lineEdit_port");

        horizontalLayout_23->addWidget(lineEdit_port);

        label_57 = new QLabel(widget_controller);
        label_57->setObjectName("label_57");
        label_57->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(label_57);

        lineEdit_fileName = new QLineEdit(widget_controller);
        lineEdit_fileName->setObjectName("lineEdit_fileName");

        horizontalLayout_23->addWidget(lineEdit_fileName);

        pushButton_start = new QPushButton(widget_controller);
        pushButton_start->setObjectName("pushButton_start");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_start->sizePolicy().hasHeightForWidth());
        pushButton_start->setSizePolicy(sizePolicy1);

        horizontalLayout_23->addWidget(pushButton_start);

        horizontalLayout_23->setStretch(0, 1);
        horizontalLayout_23->setStretch(1, 2);
        horizontalLayout_23->setStretch(2, 1);
        horizontalLayout_23->setStretch(3, 2);
        horizontalLayout_23->setStretch(6, 2);

        verticalLayout_19->addWidget(widget_controller);

        widget_debug = new QWidget(widget_exp8_4);
        widget_debug->setObjectName("widget_debug");
        verticalLayout_20 = new QVBoxLayout(widget_debug);
        verticalLayout_20->setSpacing(5);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName("verticalLayout_20");
        verticalLayout_20->setContentsMargins(5, 5, 5, 5);
        label_58 = new QLabel(widget_debug);
        label_58->setObjectName("label_58");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\261\211\344\273\252\346\227\227\351\273\221 90S")});
        font1.setBold(true);
        label_58->setFont(font1);
        label_58->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(label_58);

        textBrowser_debug = new QTextBrowser(widget_debug);
        textBrowser_debug->setObjectName("textBrowser_debug");

        verticalLayout_20->addWidget(textBrowser_debug);


        verticalLayout_19->addWidget(widget_debug);

        verticalLayout_19->setStretch(0, 1);
        verticalLayout_19->setStretch(1, 2);
        verticalLayout_19->setStretch(2, 10);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Launch a search director</p></body></html>", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\346\234\254\345\234\260\345\234\260\345\235\200</p></body></html>", nullptr));
        label_56->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\347\253\257\345\217\243</p></body></html>", nullptr));
        lineEdit_port->setText(QCoreApplication::translate("MainWindow", "8088", nullptr));
        label_57->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\346\254\242\350\277\216\351\241\265\346\226\207\344\273\266</p></body></html>", nullptr));
        lineEdit_fileName->setText(QCoreApplication::translate("MainWindow", "index.html", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250\346\234\215\345\212\241\345\231\250", nullptr));
        label_58->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Debug</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
