#include "player.h"

player::player(int b[10][10])
{
    row=1;
    column=1;

    QPixmap image("jerrys4-removebg-preview.png");

    image=image.scaledToHeight(50);
    image= image.scaledToWidth(50);
    setPixmap(image);

     //guys there is an error in the vtable of the player but i have no idea wth that is tbh
    setPos(50 + column * 50, 50 + row * 50);
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            data[i][j]=b[i][j]; //copying in array from outside into local array
        }
    }

}

void player::KeyPressEvent(QKeyEvent* event){ //
    //here we are checking collision with walls to make sure you can't move into a wall
    if(event->key() ==Qt::Key_Up && data[row-1][column] >=0){
        row--;
    }
    else if(event->key()==Qt::Key_Down && data[row+1][column] >=0){
        row++;
    }
    else if(event->key() == Qt::Key_Right && data[row][column+1]>=0){
        column++;
    }
    else if(event->key()==Qt::Key_Left && data[row][column-1]>=0){
        column--;
    }

    //cout<<"i";
}
