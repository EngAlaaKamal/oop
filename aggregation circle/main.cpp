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


class Circle
{
private:
    Point *p;
    int x1,y1,r;
public :
    Circle()
    {
        p=NULL;
        x1=0;
        y1=0;
        r=0;
    }
     Circle(int _x1,int _y1,int _r){
         p=NULL;
         x1=_x1;
         y1=_y1;
         r=_r;
    }
    void print (Point* p1)
    {
        p=p1;
        if(p==NULL)
        {
            return;
        }
        p->set_xy(x1,y1);
        cout<<"circle point is:";
        p->get_xy();
        cout<<endl<<"reduis is:"<<r;
    }
    void draw(Point *p1){
        p=p1;
        if(p==NULL)
        {
            return;
        }
        p->set_xy(x1,y1);
        circle( p->get_x(), p->get_y(), r);
    }
    void removePoints()
    {
        p=NULL;

    }

};

int main()
{/*
    Line l;
    Point p1(4,7);

    l.addPoint(&p1,3);
    l.print();
    */
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    Circle circle(400, 300, 50);
    Point p(400,300);
    circle.draw(&p);
    circle.print(&p);
    getch();
    closegraph();


    return 0;
}
