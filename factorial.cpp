#include<iostream>
using namespace std;

int main(){
    int num;
    int ans=1;
    cout<<"Enter the number: ";
    cin>>num;

    if(num<0){
        cout<<"Please enter a positive number";
    }
    else if(num==1||num==0){
        ans =1;
    }
    else{
        for(int i=2;i<=num;++i){
            ans *= i;
        }
    }
    cout<<"Factorial of "<<num<< " is = "<<ans;
}