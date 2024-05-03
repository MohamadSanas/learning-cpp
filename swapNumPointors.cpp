#include<iostream>
using namespace std;

void swap(int *n1, int *n2){
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}

int main(){
    int num1,num2;
    cout<<"Enter the numbers: ";
    cin>>num1;
    cin>>num2;

    cout<<"First Number : "<<num1;
    cout<<"\nSecond Number :  "<<num2;
    swap(&num1,&num2);
    cout<<"\nAfter swap\n";

    cout<<"first number: "<<num1;
    cout<<"\nSecond number: "<<num2;
 
    return 0;
}