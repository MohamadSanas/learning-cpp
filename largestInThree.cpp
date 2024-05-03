#include<iostream>
using namespace std;

int main(){
    double num1,num2,num3;
    cout<<"Enter three numbers: \n";
    cin>>num1;
    cin>>num2;
    cin>>num3;

    if(num1>=num2 && num1 >= num3){
        cout<<num1<< " largest number. ";
    }

    else if(num2>= num1 && num2>= num3){
        cout<<num2<< " is the largest number. ";
    }

    else {
        cout<<num3<< " is the largest number. ";
    }

    return 0;

}