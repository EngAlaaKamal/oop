#include <iostream>

using namespace std;


class Point {


    int x;
    int y;

public:

    Point(int _x,int _y){
      x=_x;
      y=_y;
    }
    void set_x(int _x){
       x=_x;
    }
    int get_x(){
       return x;
    }


    void set_y(int _y){
       y=_y;
    }
    int get_y(){
       return y;
    }

    void set_xy(int _x, int _y){
       y=_y;
       x=_x;
    }

    void get_xy(){
      cout<<"("<<x<<","<<y<<")"<<endl;
    }


};//end class

class Line{
   Point p1;
   Point p2;

public:

    Line(int x1=0,int y1=0,int x2=0,int y2=0):p1(x1,y1),p2(x2,y2){}

    //for composition
    Line():p1(3,8),p2(5,9){}

    Point get_point1(){
      return p1;
    }
    Point get_point2(){
      return p2;
    }

    void print(){
       p1.get_xy();
       p2.get_xy();
    }


};

int main()
{
    Line l(4,8,9,3);
    l.print();


    return 0;
}
