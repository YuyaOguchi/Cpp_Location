//
//  Name: Yuya Oguchi
//  COEN 70
//  Chapter 2, Project 5
//  1/13/2016
//  Location class with some functions
#include <iostream>
#include <cmath>
#include "location.h"
using namespace std;

location::location() {
    x = 0;
    y = 0;
    z = 0;
}

void location::locate(double xloc,double yloc,double zloc){
    x = xloc;
    y = yloc;
    z = zloc;
}
void location::shift(double xshift,double yshift,double zshift){
    x = x + xshift;
    y = y + yshift;
    z = z + zshift;
}

void location::getlocation(){
    cout << "x:" << x << " y:" << y << " z:" << z << endl;
}

void location::rotate(int axis, double angle){
    if(axis == 1){
        y = y*cos(angle)-z*sin(angle);
        z = y*sin(angle)+z*cos(angle);
    }else if(axis == 2){
        x = x*cos(angle)+z*sin(angle);
        z = -x*sin(angle)+z*cos(angle);
    }else if(axis == 3){
        x = x*cos(angle)-y*sin(angle);
        y = x*sin(angle)+y*cos(angle);
    }
}

int main()
{
   location s;
   s.locate(2.5,0,2.0);
   s.getlocation();
   s.shift(0,1,0);
   s.getlocation();
   s.rotate(1,50);// ((rotate around x = 0, y = 1, z = 2),angle)
   s.getlocation();

}
