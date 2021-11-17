#include "jerry.h"

Jerry::Jerry(int board[10][10])
{
    //set image and size
    QPixmap image("sources/Jerry.png");
    image = image.scaledToWidth(50);
    image = image.scaledToWidth(50);
    setPixmap(image);

    //set positon
    row =1;
    column = 1;
    setPos(50+(50*column),50+(50*row));

   setjerrydata(board);
}

void Jerry::setjerrydata(int board[10][10]){

    for(int i =0; i<10; i++)
        for(int j =0; i<10; i++){
            data[i][j] = board[i][j];
        }

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
