#include<bits/stdc++.h>
using namespace std;
bool isPrime(int k){
    for(int i = 2;i<=sqrt(k);i++){
        if(k%i==0){
            return false;
        }
    }
    return true;
}
void print(int n){//prints all prime numbers from 1 to n....
    for(int i = 2;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
   int n;
   cout<<"enter a number";
   cin>>n;
   print(n);
}