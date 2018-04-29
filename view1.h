#ifndef VIEW1_H
#define VIEW1_H

#include <QWidget>
#include <QPushButton>

class VIEW1 : public QWidget
{
    Q_OBJECT

public:
    explicit VIEW1(QWidget *parent = 0);
    ~VIEW1();

public slots:
    void on_btn_1_clicked();
private:
    QPushButton *btn_1;
    QLayout *layout;
};

#endif // VIEW1_H
