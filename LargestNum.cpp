#include<iostream>
using namespace std;
int main(){
    double num1,num2;
    cout<<"Enter two number";
    cin>>num1;
    cin>>num2;
    if (num1>num2){
        cout<<num1<<" is greater then "<<num2;
    }
    else if(num1<num2){
        cout<<num2<<" is greater then "<<num1;
    }
    else{
        cout<<num1<<" and "<<num2<<" are equal";
    }

    return 0;
}