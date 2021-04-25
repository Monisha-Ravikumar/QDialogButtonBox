#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QDebug>
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
    /*Open a existing directories*/
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "c:\\",
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);
    qDebug()<<"Your choosen directory is:"<<dir;

    /*To Open a file*/
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "c:\\",
                                                    tr("Images (*.png *.xpm *.jpg)"));
     qDebug()<<"Your choosen file is:"<<dir;

     /*To choose multiple files*/
     QStringList files = QFileDialog::getOpenFileNames(
                             this,
                             "Select one or more files to open",
                             "/home",
                             "Images (*.png *.xpm *.jpg)");
      qDebug()<<"Your multiple file is:"<<dir;

      /*To Save a file*/
      QString filename = QFileDialog::getSaveFileName(this, tr("Save File"),
                                 "/home/jana/untitled.png",
                                 tr("Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)"));
       qDebug()<<"Your file is saved "<<dir;

 }
