#include<iostream>
using namespace std;

int checkprime(int num1){
    if(num1==0||num1==1){
        return 0;
    }
    for(int i =2;i<num1;i++){
        if(num1%i==0){
            return 0;
        }
    }
        return 1;
    
}

int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    bool result=checkprime(num);
    if (result==1){
        cout<<num<<" is a prime number.";
    }
    else{
        cout<<num<<" is not a prime number. ";
    }

}