#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double num,po;
    cout<<"Enter a number = \n";
    cin>>num;
    cout<<"Enter the value of power: \n";
    cin>>po;

    double value=pow(num,po) ;
    cout<<value;

    return 0;

}