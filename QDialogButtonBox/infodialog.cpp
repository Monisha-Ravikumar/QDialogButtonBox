#include "infodialog.h"
#include "ui_infodialog.h"
#include <QDebug>
infoDialog::infoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infoDialog)
{
    ui->setupUi(this);
}

infoDialog::~infoDialog()
{
    delete ui;
}


void infoDialog::on_buttonBox_2_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton=ui->buttonBox_2->standardButton(button);

       if(stdButton==QDialogButtonBox::Ok)

       {

       accept();

       qDebug()<<"Ok button clicked";

       }
       if(stdButton==QDialogButtonBox::Cancel)

       {

       reject();

       qDebug()<<"Cancel button clicked";

       }
       if(stdButton==QDialogButtonBox::Save)

       {

       accepted();

       qDebug()<<"Save button clicked";

       }
       if(stdButton==QDialogButtonBox::SaveAll)

       {

       accept();

       qDebug()<<"SaveAll button clicked";

       }
       if(stdButton==QDialogButtonBox::No)

       {

       reject();

       qDebug()<<"No button clicked";

       }
       if(stdButton==QDialogButtonBox::NoToAll)

       {

       rejected();

       qDebug()<<"NoToAll button clicked";

       }
       if(stdButton==QDialogButtonBox::Open)

       {

       open();

       qDebug()<<"Open button clicked";

       }
}
