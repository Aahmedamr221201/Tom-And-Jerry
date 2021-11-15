#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QKeyEvent>
#include <QList>

class player: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT;
private:
    int data[10][10]; // array to store the grid
    int row;
    int column;

public:
    player(int b[10][10]);
    //void KeyPressEvent(QKeyEvent* event);
public slots: //has to be public slot for key handling
     void KeyPressEvent(QKeyEvent* event);
};

#endif // PLAYER_H
