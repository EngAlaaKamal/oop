#include <iostream>
#include <graphics.h>

using namespace std;

template<class T>
class Stack
{

private :
    T *arr;
    int top;//current size
    int Size;//full size

public:
    Stack(int _Size) //user give size only
    {
        Size=_Size;
        top=0;
        arr=new T[Size] {0};
    }

    void setSize(int s)
    {
        Size=s;
    }

    int getSize(void)
    {
        return Size;
    }



    void push(T element)
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


~Stack()
    {
        delete[] arr;
    }



};

int main()
{

    Stack<int> s(10);
    Stack <double> s1(4);
    s.pop();
    s.push(1);
    s1.push(5.8);
    s.push(6);
    s.pop();
    s.pop();
    s.push(7);
    s.pop();
    s.pop();
    s.pop();
    s.push(7);
    s1.pop();
    s1.push(2.8);
    s1.pop();


    return 0;
}
