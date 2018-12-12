#include <iostream>

#include "Point.h"

using namespace std; 

int main(){
    std::cout<< "MAIN START HERE\n";

    Point p4 = Point();
    Point p = Point(10,5);

    p4.shift(4,-5);
    p4.show();
    p4.moveTo(p);
    p4.show();
    p4.moveTo(9,8);
    p4.show();


    Point* pointeur4 = &p4;

    cout <<"pointeur:"<< pointeur4<<"\n";

    Point p5 = Point();
    p5.moveTo( *pointeur4);
    p5.show();

    return 0;
};