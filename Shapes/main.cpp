#include <iostream>
#include <graphics.h>


using namespace std;

class Shape{
protected:
    int color;
public:
    void setColor(int c){
       if(c>=0&&c<=15){
        color=c;
       }
    }
    int getColor(){
       return color;
    }

    virtual void draw(){
        cout<<"general shape"<<endl;
    }
    virtual ~Shape() {}

};

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

class Circle: public Shape {
private:
   Point p1;
   int r;

public:
    Circle(int x1=0,int y1=0,int _r=0):p1(x1,y1),r(_r){}
    Point get_point1(){
      return p1;
    }
    void draw(){
        setcolor(color);
        circle( p1.get_x(), p1.get_y(), r);
    }
    void print(){
        p1.get_xy();
        cout<<"radias is:"<<r<<endl;
    }
};//end class

class Line: public Shape {
private:
   Point p1;
   Point p2;

public:
    Line(int x1=0,int y1=0,int x2=0,int y2=0):p1(x1,y1),p2(x2,y2){}

    void draw(){
        setcolor(color);
        line( p1.get_x(), p1.get_y(),p2.get_x(), p2.get_y());
    }
    void print(){
        p1.get_xy();
        p2.get_xy();
    }
};//end class


class RRectangle: public Shape {
private:
   Point p1;
   Point p2;

public:
    RRectangle(int x1=0,int y1=0,int x2=0,int y2=0):p1(x1,y1),p2(x2,y2){}

    void draw(){
        setcolor(color);
        rectangle( p1.get_x(), p1.get_y(),p2.get_x(), p2.get_y());
    }
    void print(){
        p1.get_xy();
        p2.get_xy();
    }
};//end class


int main()
{
    int numShapes ,choice;
    cout << "Enter the number of shapes: ";
    cin>>numShapes;

     Shape** shapes =(Shape**) malloc(numShapes * sizeof(Shape*));
    for (int i = 0; i < numShapes; i++) {
        cout << "Select shape type for shape -> (1. Line, 2. Rectangle, 3. Circle): ";
        cin >> choice;


        
        switch (choice) {
            case 1:
                shapes[i]=new Line(200,200,300,400);
                break;
            case 2:
                shapes[i]=new RRectangle(40,20,100,200);
                break;
            case 3:
                shapes[i]=new Circle(500,200,40);
                break;
            default:
                cout << "Invalid choice. Skipping shape.\n"<<endl;
        }
        shapes[i]->setColor(13);
    }
     // Draw all shapes
     int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TC\\BGI");

 for (int i = 0; i < numShapes; i++) {
        shapes[i]->draw();
    }

      getch();
    closegraph();
     // Free memory for shapes
    for (int i = 0; i < numShapes; i++) {
        delete shapes[i];
    }
    free(shapes);

    return 0;
}
