#include "dialogfish.h"
#include "ui_dialogfish.h"

DialogFish::DialogFish(DBManager* dbManager, QWidget *parent)
    : QDialog(parent),
    dbManager(dbManager),
    ui(new Ui::DialogFish)
{
    ui->setupUi(this);
}

DialogFish::~DialogFish()
{
    delete ui;
}
