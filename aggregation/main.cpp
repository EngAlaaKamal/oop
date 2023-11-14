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
class Line
{
    Point *p;
    Point *pp;
    int x1,y1,x2,y2;
public :
    Line()
    {
        p=NULL;
        pp=NULL;
        x1=0;
        y1=0;
        x2=0;
        y2=0;

    }
    void addPoint (Point *p1,Point *p2)
    {
        p=p1;
        pp=p2;

        //cout<<
        //cout<<


    }


    void print ()
    {
        if(p==NULL ||pp==NULL )
        {
            return;
        }
        cout<<"first point is:";
        p->get_xy();
        cout<<endl<<"second point is:";
        pp->get_xy();

    }


    void removePoints()
    {
        p=NULL;
        pp=NULL;
    }

};

int main()
{
    Line l;
    Point p1(4,7);
    Point p2(5,3);
    l.addPoint(&p1,&p2);
    l.print();


    return 0;
}
