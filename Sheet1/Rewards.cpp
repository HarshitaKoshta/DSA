#include<iostream>
using namespace std;

int main(){
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int b1,b2,b3;
    cin>>b1>>b2>>b3;
    int n;
    cin>>n;

    int Tcup = a1+a2+a3;
    int Tmedal = b1+b2+b3;

    int cupS = Tcup/5;
    if(Tcup%5!=0){
        cupS++;
    }

    int medalS = Tmedal/10;
    if(Tmedal%10!=0){
        medalS++;
    }
     
    if(medalS+cupS<=n){
        cout<<"YES";
    }
    else
        cout<<"NO";    

return 0;
}