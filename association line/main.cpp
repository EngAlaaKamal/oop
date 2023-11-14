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

class Line{
    int x1,y1,x2,y2;

public:

    Line(int _x1=0,int _y1=0,int _x2=0,int _y2=0){
         x1=_x1;
         y1=_y1;
         x2=_x2;
         y2=_y2;
    }



    //------------- Create function associated with the two points
    void print(Point p1,Point p2){
             p1.set_xy(x1,y1);
             p2.set_xy(x2,y2);
             cout << "line start point:"; p1.get_xy();
              cout << "line end point:";p2.get_xy() ;
   }
};

int main()
{

    Point p1;
    Point p2;
    Line l1(1,2,3,5);
     l1.print(p1,p2);
    return 0;
}

