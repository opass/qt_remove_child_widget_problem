#include "view1.h"
#include "view2.h"
#include <QPushButton>
#include <QVBoxLayout>

VIEW1::VIEW1(QWidget *parent) :
    QWidget(parent)
{    
    resize(400, 300);
    btn_1 = new QPushButton(this);
    btn_1->setText("btn_1");

    layout = new QVBoxLayout;
    layout->addWidget(btn_1);
    setLayout(layout);
    connect(btn_1, SIGNAL(clicked()), this, SLOT(on_btn_1_clicked()));
}

void VIEW1::on_btn_1_clicked() {
    VIEW2 *view2 = new VIEW2();
    layout->addWidget(view2);

    connect(view2, &VIEW2::leave, this, [&view2]() {
        view2->deleteLater();
    });
}

VIEW1::~VIEW1() {}
