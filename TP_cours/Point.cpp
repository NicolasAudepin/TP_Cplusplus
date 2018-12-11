#include <iostream>
#include "Point.h"
using namespace std;

int x=0;
int y=0;

Point::Point(){
    x=0;
    y=0;
    cout<< "empty constructor \n";
}

Point::Point(int _x, int _y){
    x=_x;
    y=_y;
    cout <<"create"<< x <<" "<<y<<endl;

};


Point::~Point(){
    cout << "destroy\n";
};




void Point::show(){
    cout <<"show "<< x <<" "<<y<<endl;
};


void Point::shift(int _x, int _y){
    x+=_x;
    y+=_y;
}


void Point::set_x(int _x){
    x=_x;
};
void Point::set_y(int _y){
    y=_y;
};

int Point::get_x(){
    return(x);
};

int Point::get_y(){
    return y;
};


