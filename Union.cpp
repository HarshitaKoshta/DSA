#include<iostream>
using namespace std;    

int main(){
    int n1, n2;
    cin>>n1;
    int arr1[n1];
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }

    cin>>n2;
    int arr2[n2];
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }
    
    int i=0,j=0;
    int last = -1e9;   // store last printed element

    while(i<n1 && j<n2){
        if(arr1[i] < arr2[j]){
            if(arr1[i] != last){
                cout<<arr1[i]<<" ";
                last = arr1[i];
            }
            i++;
        }
        else if(arr1[i] > arr2[j]){
            if(arr2[j] != last){
                cout<<arr2[j]<<" ";
                last = arr2[j];
            }
            j++;
        }
        else{
            if(arr1[i] != last){
                cout<<arr1[i]<<" ";
                last = arr1[i];
            }
            i++;
            j++;
        }
    }

    while(i<n1){
        if(arr1[i] != last){
            cout<<arr1[i]<<" ";
            last = arr1[i];
        }
        i++;
    }

    while(j<n2){
        if(arr2[j] != last){
            cout<<arr2[j]<<" ";
            last = arr2[j];
        }
        j++;
    }
}