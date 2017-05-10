#include"artillery.h"
#include<QPixmap>
#include<QTimer>
#include<qmath.h>

Artillery::Artillery(QGraphicsItem *parent)
{
    //set graphics
    setPixmap(QPixmap(":/Documents/artillery.png"));

    //connect timer to shoot()
    QTimer *shoot_timer = new QTimer(this);
    connect(shoot_timer,SIGNAL(timeout()),this,SLOT(shoot()));
    shoot_timer->start(5);
}

void Artillery::shoot()
{






}
