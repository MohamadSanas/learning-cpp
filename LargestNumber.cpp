#include<iostream>
using namespace std;
 int main(){
    int count;
    cout<<"enter the count of numbers: \n";
    cin>>count;
    int num[count];
    cout<<"enter the numbers: \n";
    for(int i =0;i<count;i++){
        cin>>num[i];
    }
    int largest= num[0];

    for(int j=0;j<count;j++){
        if(largest<num[j]){
            largest=num[j];
        }
    }

    cout<<largest;


    return 0;
 }