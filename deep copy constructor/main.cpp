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


~Stack()
    {
        delete[] arr;
    }



};


   int main()
{
    Stack s (5);
    Stack s2 (s);//call default copy constructor
    s.pop();
    s.push(1);
    s2.push(2);
    s.push(5);
    s.push(6);
    s2.pop();
    s.pop();
    s.push(7);
    s.pop();
    s.pop();
    s2.pop();
    s2.push(7);
    s.pop();
    s2.pop();



    return 0;
}
