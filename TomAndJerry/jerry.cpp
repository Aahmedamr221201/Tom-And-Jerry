#include "jerry.h"

Jerry::Jerry(int** board)
{
    //set image and size
    QPixmap Jerryimage("sources/Jerry.png");
    Jerryimage = Jerryimage.scaledToWidth(50);
    Jerryimage = Jerryimage.scaledToWidth(50);
    setPixmap(Jerryimage);

    //set positon
    row =1;
    column = 1;
    setPos(50+(50*column),50+(50*row));

    for(int i =0; i<10; i++)
        for(int j =0; j<10; j++){
            data[i][j] = board[i][j];
        }
}

void Jerry::setjerrydata(int board[10][10]){


}

void Jerry:: keyPressEvent(QKeyEvent* event){
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
    setPos(50+(50*column),50+(50*row));
}
