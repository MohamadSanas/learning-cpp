#include<iostream>
using namespace std;
int main(){
    double num1,num2,val;
    cout<<"Enter two numbers to swap ";
    cin>>num1;
    cin>>num2;
    cout<<"before swap:\nnumber 1="<<num1<<"\nnumber 2="<<num2;
    val=num1;
    num1=num2;
    num2=val;
    cout<<"\nafter swap:\nnumber 1="<<num1<<"\nnumber 2 ="<<num2;

    return 0;
}