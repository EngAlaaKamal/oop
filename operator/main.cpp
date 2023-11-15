#include <iostream>

using namespace std;



class Stack
{

private :
    int *arr;
    int top;//current size
    int Size;//full size

public:
    Stack(int _Size) //user give size only
    {
        Size=_Size;
        top=0;
        arr=new int[Size] {0};
    }

    Stack(Stack &s) //user give size only
    {
        Size=s.Size;
        top=s.top;
        arr=new int[Size] {0};
    }


    void setSize(int s)
    {
        Size=s;
    }

    int getSize(void)
    {
        return Size;
    }



    void push(int element)
    {
        if(top<Size)
        {

            arr[top]=element;
            cout<<endl<<arr[top]<<endl;
            top++;
        }
        else
        {
            cout<<"stack is full"<<endl;
        }
    }

    void pop()
    {
        //cout<<arr[1];
        if(top>0)
        {
            cout<<endl<<"popped element is :"<<arr[--top]<<endl;
            //top--;
        }
        else
        {
            cout<<"stack is empty"<<endl;

        }
    }
  //overload = operator
    Stack operator=(Stack & s){
	top=s.top;
	Size=s.Size;
	delete[] arr;//delete

	arr=new int [Size];//rellaction

	for(int i=0; i<=top; i++){
		arr[i]=s.arr[i];
	}

	return *this;
}



~Stack()
    {
        delete[] arr;
    }



};
 //--------------------------------------



class Complex{
private:
    double real;
    double image;

public:
    Complex(double _real,double _image){
      real=_real;
      image=_image;
    }
     void setReal(double _real) {
        real+=_real;
    }

     double getReal() {
        return real;
    }

    void setImage(double _image) {
         image=_image;
    }

      double getImage() {
        return image;
    }


    Complex operator+(const Complex& c){
       return Complex(real+c.real,image+c.image);
    }

    Complex operator-(const Complex& c){
       return Complex(real-c.real,image-c.image);
    }
    Complex operator*(const Complex& c){
       return Complex((real * c.real) - (image * c.image),
                       (real * c.image) + (image * c.real));
    }
    int operator==(const Complex& c){
       return (real == c.real) && (image == c.image);
    }
    int operator!=(const Complex& c) {
        return !(*this == c);
    }

    Complex operator += (const Complex &c ){
	real =real +c.real;
	image=image+c.image;
	return *this;
}

   Complex operator ++(){
      real++;
      return *this;
   }
   Complex operator --(){
      real--;
      return *this;
   }
   Complex operator ++(int){
       Complex temp=*this;
       real++;
       return temp;
   }
    Complex operator --(int){
       Complex temp=*this;
       real--;
       return temp;
   }
    operator float(){
        return  0;
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


 friend ostream& operator<<(ostream& os, const Complex& c);


};

ostream& operator<<(ostream& os, const Complex& c) {
    os << c.real;
    if (c.image > 0) {
        os << "+" << c.image << "j";
    } else if (c.image < 0) {
        os << c.image << "j";
    }
    return os;
}



int main()
{
   Complex c1(4,5);
   Complex c2(6,7);
   Complex c3=c1+c2;
   c3.print();

   c3=c1-c2;
   c3.print();

   c3=c1*c2;
   c3.print();

   (c1++).print();
   c1.print();
   (++c1).print();

   (c1--).print();
   c1.print();
   (--c1).print();
   cout<<(float)c2<<endl;

  cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;



   //----------=operator on stack
   Stack s(5);
   s.push(7);
   s.push(8);
   s.push(6);
   Stack s1(8);
   s1=s;
   s1.push(3);
   s1.pop();
   s1.pop();
   s1.pop();
   s1.pop();
   s1.pop();


    return 0;
}
