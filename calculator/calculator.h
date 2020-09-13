#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class calculator; }
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();

private:
    Ui::calculator *ui;

private slots:
    void NumPress();
    void MathButtons();
    void EqualButton();
    void ChangeNumberSign();
    void Clear();
    void Memory();
    void MemoryAdd();
    void MemoryClear();
};
#endif // CALCULATOR_H
