#ifndef MANAGER_H
#define MANAGER_H

#include <QObject>

class Manager : public QObject
{
    Q_OBJECT
public:
    explicit Manager(QObject *parent = nullptr);

private:
    time_t my_date;
    time_t new_date;

signals:

public slots:
    int get_time();
};

#endif // MANAGER_H
