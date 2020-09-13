#include "calculator.h"
#include "ui_calculator.h"

double calcValue = 0.0;
double memoryVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcValue));
    QPushButton *numButtons[10];
    for(int i = 0; i < 10; i++) {
        QString butName = "Button" + QString::number(i);
        numButtons[i] = calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPress()));
    }

    connect(ui->Add, SIGNAL(released()), this, SLOT(MathButtons()));
    connect(ui->Subtract, SIGNAL(released()), this, SLOT(MathButtons()));
    connect(ui->Divide, SIGNAL(released()), this, SLOT(MathButtons()));
    connect(ui->Multiply, SIGNAL(released()), this, SLOT(MathButtons()));
    connect(ui->Equals, SIGNAL(released()), this, SLOT(EqualButton()));
    connect(ui->ChangeSign, SIGNAL(released()), this, SLOT(ChangeNumberSign()));
    connect(ui->Clear, SIGNAL(released()), this, SLOT(Clear()));

    connect(ui->Memory, SIGNAL(released()), this, SLOT(Memory()));
    connect(ui->MemoryAdd, SIGNAL(released()), this, SLOT(MemoryAdd()));
    connect(ui->MemoryClear, SIGNAL(released()), this, SLOT(MemoryClear()));

}

calculator::~calculator()
{
    delete ui;
}

void calculator::NumPress() {
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)) {
        ui->Display->setText(butVal);
    } else {
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g',16));
    }
}

void calculator::MathButtons() {
    divTrigger = false;
    multTrigger = false;
    subTrigger = false;
    addTrigger = false;
    QString displayVal = ui -> Display -> text();
    calcValue = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if (QString::compare(butVal, "/", Qt::CaseInsensitive) == 0) {
        divTrigger = true;
    } else if(QString::compare(butVal, "*", Qt::CaseInsensitive) == 0) {
        multTrigger = true;
    } else if (QString::compare(butVal, "-", Qt::CaseInsensitive) == 0) {
        subTrigger = true;
    } else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0) {
        addTrigger = true;
    }
    ui->Display->setText("");

}

void calculator::EqualButton() {
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    if(addTrigger || subTrigger || multTrigger || divTrigger)
        if(addTrigger) {
            solution = calcValue + dblDisplayVal;
        } else if(subTrigger) {
            solution = calcValue - dblDisplayVal;
        } else if(multTrigger) {
            solution = calcValue * dblDisplayVal;
        } else {
            solution = calcValue / dblDisplayVal;
        }

    ui->Display->setText(QString::number(solution));

}

void calculator::ChangeNumberSign() {
    QString displayVal = ui->Display->text();
    QRegExp reg ("[-]?[0-9.]*");
    if(reg.exactMatch(displayVal)) {
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;
        ui->Display->setText(QString::number(dblDisplayValSign));
    }

}

void calculator::Clear() {
    ui->Display->setText("");
}


void calculator::Memory() {
    ui->Display->setText(QString::number(memoryVal));
}

void calculator::MemoryAdd() {
    QString tempValue = ui->Display->text();
    memoryVal = tempValue.toDouble();
}

void calculator::MemoryClear() {
    memoryVal = 0.0;
}
