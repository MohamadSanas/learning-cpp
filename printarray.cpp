#include<iostream>
using namespace std;

int main(){
    int count;
    cout<<"Enter the count of numbers: ";
    cin>>count;
    int *arr=new int[count];
    cout<<"Enter the numbers: ";
    for(int i=0;i<count;i++){
        cin>>arr[i];
    }

    cout<<"Numbers are: ";
    for(int j=0;j<count;j++){
        cout<<arr[j]<<" ";
    }


    return 0;
}