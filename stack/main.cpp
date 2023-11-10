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
    int Size;
    cout << "Enter Size" << endl;
    cin>>Size;
    Stack s(10);
    s.pop();
    s.push(1);
    s.push(5);
    s.push(6);
    s.pop();
    s.pop();
    s.push(7);
    s.pop();
    s.pop();
    s.pop();
    s.push(7);
    s.pop();
    s.pop();


    return 0;
}
