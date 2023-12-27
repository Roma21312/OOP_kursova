#include "plantlist.h"
#include "ui_plantlist.h"

PlantList::PlantList(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PlantList)
{
    ui->setupUi(this);
}

PlantList::~PlantList()
{
    delete ui;
}
