#include <graphics.h>
#include <iostream>

using namespace std;


class Point {


    int x;
    int y;

public:
    Point(){
       x=0;
       y=0;
    }
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
    int x1,y1,r;
    Point p1;

public:
    Circle(int _x1=0,int _y1=0,int _r=0){
         x1=_x1;
         y1=_y1;
         r=_r;
    }
    //------------- Create function associated with the two points
    void print(){
             p1.set_xy(x1,y1);
             cout << "circle point:"; p1.get_xy();
              cout <<endl<< "reduis:"<<r ;
   }
   void draw(){
        p1.set_xy(x1,y1);
        circle( p1.get_x(), p1.get_y(), r);
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
