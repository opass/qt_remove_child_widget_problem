#ifndef VIEW2_H
#define VIEW2_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>

class VIEW2 : public QWidget
{
    Q_OBJECT

public:
    explicit VIEW2(QWidget *parent = 0);
    ~VIEW2();

signals:
    void leave();

private:
    QLabel *label;
    QPushButton *btn_leave;
    QHBoxLayout *layout;
};

#endif // VIEW2_H
