#include<iostream>
using namespace std;

int addnum(int num1,int num2){
    return num1+num2;
}

int multiplynum(int num1, int num2){
    return num1*num2;
}

int main(){
    int num1,num2,num3,num4;
    cout<<"Enter two number to add: \n";
    cin>>num1;
    cin>>num2;
    cout<<num1<<" + "<<num2<<" = "<<addnum(num1,num2)<<endl;
    cout<<"Enter two number to multiply: \n";
    cin>>num3;
    cin>>num4;
    cout<<num3 <<" + "<<num4<<" = "<<multiplynum(num3,num4)<<endl;
    return 0;
}