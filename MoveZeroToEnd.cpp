#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,1,0,0,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[count]);
            cout<<arr[i]<<" "<<arr[count]<<endl;
            count++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}