//
//  Name: Yuya Oguchi
//  COEN 70
//  Chapter 2, Project 5
//  1/13/2016
//  Location class with some functions

class location {
private:
    double x;
    double y;
    double z;

public:
    location();
    void locate(double,double,double);
    void shift(double,double,double);
    void getlocation();
    void rotate(int, double);

};
