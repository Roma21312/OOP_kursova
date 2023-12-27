#ifndef PLANTLIST_H
#define PLANTLIST_H

#include <QDialog>

namespace Ui {
class PlantList;
}

class PlantList : public QDialog
{
    Q_OBJECT

public:
    explicit PlantList(QWidget *parent = nullptr);
    ~PlantList();

private:
    Ui::PlantList *ui;
};

#endif // PLANTLIST_H
