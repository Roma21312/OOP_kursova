#include "dialogwaterbody.h"
#include "ui_dialogwaterbody.h"

DialogWaterbody::DialogWaterbody(DBManager* dbManager, QWidget *parent)
    : QDialog(parent),
    dbManager(dbManager),
    ui(new Ui::DialogWaterbody)
{
    ui->setupUi(this);
    dialogFish = new DialogFish(dbManager);
    dialogPlant = new DialogPlant(dbManager);
}

DialogWaterbody::~DialogWaterbody()
{
    delete ui;
}

void DialogWaterbody::on_AddFishPB_clicked()
{
    dialogFish->show();
}

void DialogWaterbody::on_AddPlantPB_clicked()
{
    dialogPlant->show();
}
