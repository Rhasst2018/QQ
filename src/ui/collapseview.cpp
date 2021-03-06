#include "collapseview.h"
#include "ui_collapseview.h"

#include "collapseviewitem.h"
#include <QDebug>


CollapseView::CollapseView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CollapseView)
{
    ui->setupUi(this);

    if(ui->scrollAreaWidgetContents->layout()!=0 )
    {
        qDebug()<<"ui->scrollAreaWidgetContents->layout已经存在";
    }

    w_layout = new QVBoxLayout(this);
    w_layout->setContentsMargins(0,0,0,0);//设置上下左右的边距均为0
    w_layout->setSpacing(0);

    w_layout->addWidget(new CollapseViewItem("我的好友",this));
    w_layout->addWidget(new CollapseViewItem("那些年",this));
    w_layout->addWidget(new CollapseViewItem("陌生人",this));
    w_layout->addStretch(1); //如果不添加这个，CollapseViewItem的高度会太大

    ui->scrollAreaWidgetContents->setLayout(w_layout);

    //ui->scrollAreaWidgetContents->resize(this->width(),this->height());

    //ui->scrollArea->resize(this->width(),this->height());
}

CollapseView::~CollapseView()
{
    delete ui;
}

void CollapseView::butClick()
{
    //ui->listWidget->setHidden(!ui->listWidget->isHidden());
    qDebug()<<"xxx";
}
