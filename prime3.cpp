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
void count(int n){//prints the first n prime numbers
   int i = 2;
   while(n){
    if(isPrime(i)){
        cout<<i<<" ";
        n--;
    }
    i++;
   }
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    count(n);
}