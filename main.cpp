#include <iostream>

using namespace std;

void swapPtr(int *a,int *b);
void swapRef(int &a,int &b);

int main (){
int a=6;
int b=8;
swapRef(a,b);
swapPtr(&a,&b);

    return 0;
}


void swapRef(int &a,int &b){
int temp =a;
a=b;
b=temp;
printf("%d %d",a,b);
}

void swapPtr(int *a,int *b){
int temp =*a;
*a=*b;
*b=temp;
printf("%d %d",*a,*b);
}

