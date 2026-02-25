#include<iostream>
#include<set>
using namespace std;

int main(){

    int n1, n2;
    cin >> n1;

    int arr1[n1];
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    cin >> n2;

    int arr2[n2];
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }

    set<int> st;
    
    for(int i = 0; i < n1; i++){
        st.insert(arr1[i]);
    }

    for(int i = 0; i < n2; i++){
        if(st.find(arr2[i]) != st.end()){
            cout << arr2[i] << " ";
            st.erase(arr2[i]); // prevents duplicate printing
        }
    }

    return 0;
}