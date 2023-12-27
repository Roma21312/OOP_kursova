#include "dialogplant.h"
#include "ui_dialogplant.h"

DialogPlant::DialogPlant(DBManager* dbManager, QWidget *parent)
    : QDialog(parent),
    dbManager(dbManager),
    ui(new Ui::DialogPlant)
{
    ui->setupUi(this);
}

DialogPlant::~DialogPlant()
{
    delete ui;
}
