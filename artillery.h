#ifndef ARTILLERY_H
#define ARTILLERY_H

#include<QGraphicsPixmapItem>
#include<QObject>
#include<QGraphicsItem>

class Artillery : public QGraphicsPixmapItem,public QObject{

    Q_OBJECT

public:
    Artillery(QGraphicsItem *parent = 0);

public slots:
    void shoot();

private:

};

#endif // ARTILLERY_H
