#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    vector <char> a;

    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            a.push_back(s[i]);
        }
    }

    sort(a.begin(), a.end());

    for(int j=0;j<a.size();j++){
        if(j==a.size()-1){
            cout<<a[j];
        }else{
            cout<<a[j]<<"+";
        }
    }
    return 0;
}