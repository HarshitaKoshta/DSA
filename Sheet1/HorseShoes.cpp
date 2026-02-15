#include<iostream>
using namespace std;

int main(){
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    
    int unique = 0;

   if((s1==s2) || (s1==s3) || (s1==s4)){
        unique++;
    }
    if( (s2==s3) || (s2==s4)){
        
        unique++;
    }
    if(s3==s4){
        unique++;
    }
    cout<<unique; 
    return 0;
}

// #include <iostream>
// using namespace std;

// int main(){
//     int s1,s2,s3,s4;
//     cin>>s1>>s2>>s3>>s4;
//     int count=0;
//     int a[4] = {s1,s2,s3,s4};
//     for (int i=0;i<3;i++){
//         if(a[i]!=a[i+1]){
//             count++;
//         }
    
//     }
//     cout<<4-count;
//     return 0;
// }