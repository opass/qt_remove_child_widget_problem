#include "view2.h"
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>

VIEW2::VIEW2(QWidget *parent) :
    QWidget(parent)
{
    label = new QLabel(this);
    label->setText("view2");
    btn_leave = new QPushButton(this);
    btn_leave->setText("leave");

    layout = new QHBoxLayout;
    layout->addWidget(label);
    layout->addWidget(btn_leave);
    setLayout(layout);

    connect(btn_leave, SIGNAL(clicked()), this, SIGNAL(leave()));
}

VIEW2::~VIEW2(){ }
