#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <infodialog.h>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    InfoDialog *dialog=new InfoDialog(this);

    connect(dialog,&InfoDialog::accepted,[=](){
           QString position= dialog->getPosition();
           QString Os=dialog->getFavouriteOS();
           qDebug()<<"Dialog Accepted ,Position is "<<position<<" and Favourite OS is "<<Os;
           ui->label->setText("Your position is: "+position+" and your Favourite OS is "+Os);
       });
               connect(dialog,&InfoDialog::rejected,[=](){
                   QString position=dialog->getPosition();
                   QString os=dialog->getFavouriteOS();
                   qDebug()<<"Dialog Rejected";

               });
               dialog->show();
               dialog->raise();
               dialog->activateWindow();


}
