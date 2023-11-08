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


    void print()
    {
        if(image>0){
        cout<<real<<"+"<<image<<"i"<<endl;
        }else if(image<0){
         cout<<real<<image<<"i"<<endl;
        }else{
         cout<<real;
        }
    }
	/* Function to add two complex numbers */
     complex add(complex c){
        complex c1;
        c1.setReal(real+c.getReal());
        c1.setImage(image+c.getImage());

        return c1;
    }

    };




int main()
    {
        complex c1;
        int r,i;
        cout<<"Enter real complex number"<<endl;
        cin>>r;
        c1.setReal(r);
        cout<<"Enter imaginary part of complex number"<<endl;
        cin>>i;
        c1.setImage(i);
        c1.print();


        //--------------
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
        c4=c3.add(c2);

        c4.print();



    return 0;
    }
