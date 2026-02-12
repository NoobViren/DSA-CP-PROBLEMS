#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i = 2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    if(n==1){
        cout<<"Neither prime nor composite";
    }
    else{
      bool ans = isPrime(n);
      if( ans == true){
      cout<<"prime";
    }
    else {
    cout<<"composite";
    }
 }
}