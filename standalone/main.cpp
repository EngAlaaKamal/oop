/* C++ Program to add two Complex Numbers */
#include<iostream>
using namespace std;
class complex{
private:
    int real;
    int image;

public:
    void setReal(int r){
     real=r;
    }

    int getReal(){
     return real;
    }

    void setImage(int i){
     image=i;
    }

    int getImage(){
     return image;
    }


    };

    //standalone function

   void print(complex c)
    {
        if(c.getImage()>0){
        cout<<c.getReal()<<"+"<<c.getImage()<<"i"<<endl;
        }else if(c.getImage()<0){
         cout<<c.getReal()<<c.getImage()<<"i"<<endl;
        }else{
         cout<<c.getReal() <<endl;
        }


    }



complex add(complex c,complex c1){
        c1.setReal(c1.getReal()+ c.getReal());
        c1.setImage(c1.getImage()+ c.getImage());

        return c1;
    }



int main()
    {



        complex c2;
        complex c3;
        complex c4;

        int r1,i1,r2,i2;
        cout<<"Enter real and imaginary part of first complex number"<<endl;
        cin>>r1>>i1;
        cout<<"Enter real and imaginary part of second complex number"<<endl;
        cin>>r2>>i2;
        c2.setReal(r1);
        c2.setImage(i1);
        c3.setReal(r2);
        c3.setImage(i2);
        c3=add(c2,c3);

          print(c3);



    return 0;
    }
