#include <graphics.h>
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

class Circle{
private:
   Point p1;
   int r;

public:
    Circle(int x1=0,int y1=0,int _r=0):p1(x1,y1),r(_r){}
    Point get_point1(){
      return p1;
    }
    void draw(){
        circle( p1.get_x(), p1.get_y(), r);
    }
    void print(){
        p1.get_xy();
        cout<<"radias is:"<<r<<endl;
    }
};//end class



int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    Circle circle(400, 300, 50);

    circle.draw();
    circle.print();

    getch();
    closegraph();
    return 0;
}
