#include <iostream>

using namespace std;

class Queue
{
private:
    int *arr;

    int rear;
    int Front;
    int Size;


public:

      Queue(int _Size)
    {
        Size=_Size;
        arr=new int[Size] {0};

        rear=0;
        Front=0;
    }

    void enqueue(int element)
    {
        if(rear<Size)
        {
            arr[rear++]=element;
            cout<<endl<<element<<endl;
        }
        else
        {
            cout<<"queue is full"<<endl;
        }

    }

    void dequeue()
    {
        if(rear>=0&&rear!=Front)
        {
            cout<<endl<<" deleted element is :"<<arr[Front++]<<endl;


        }
        else
        {
            cout<<"queue is empty"<<endl;

        }
    }

};



int main()
{
    Queue q(5);

    q.dequeue();
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(10);
    q.dequeue();
    q.dequeue();
    q.enqueue(11);
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}
