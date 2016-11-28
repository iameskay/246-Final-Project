#include <iostream>
#include <map>
#include "oblock.h"

using namespace std;

void oblock::updateBoard(string** board){
for(int i=0;i<4;i++){
Coordinate *c=blockCoord[i];
int x=c->getX(c);
int y=c->getY(c);
cout<<"("<<x<<", "<<y<<")"<<endl;
board[x][y]="O";
}
}

void oblock::initialize(string** board){
state=1;
carriedOver=new Coordinate;
blockCoord[0]=new Coordinate;
blockCoord[0]->setCoord(3, 0);

blockCoord[1]=new Coordinate;
blockCoord[1]->setCoord(3, 1);

blockCoord[2]=new Coordinate;
blockCoord[2]->setCoord(4, 0);

blockCoord[3]=new Coordinate;
blockCoord[3]->setCoord(4, 1);

for(int i=0;i<4;i++){
Coordinate *c=blockCoord[i];
int x=c->getX(c);
int y=c->getY(c);
cout<<"("<<x<<", "<<y<<")"<<endl;
board[x][y]="O";
}
}

void oblock::clockwise(string** board){
}

void oblock::anticlockwise(string** board){

}