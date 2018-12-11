#include <iostream>

#include "Point.h"

using namespace std; 

int main(){
    std::cout<< "MAIN START HERE\n";

    Point p4 = Point();
    

    p4.shift(4,-5);
    p4.show();

    return 0;
};