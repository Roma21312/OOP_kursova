#ifndef WATERBODYLIST_H
#define WATERBODYLIST_H

#include <QDialog>

namespace Ui {
class WaterbodyList;
}

class WaterbodyList : public QDialog
{
    Q_OBJECT

public:
    explicit WaterbodyList(QWidget *parent = nullptr);
    ~WaterbodyList();

private:
    Ui::WaterbodyList *ui;

    void setupModelPlant(const QString& tableName, const QStringList& headers);
    void createPlantUI();

    void setupModelFish(const QString& tableName, const QStringList& headers);
    void createFishUI();

    void setupModelWaterbody(const QString& tableName, const QStringList& headers);
    void createWaterbodyUI();
};

#endif // WATERBODYLIST_H
