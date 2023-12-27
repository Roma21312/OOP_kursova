#include "fishlist.h"
#include "ui_fishlist.h"

FishList::FishList(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FishList)
{
    ui->setupUi(this);
}

FishList::~FishList()
{
    delete ui;
}
