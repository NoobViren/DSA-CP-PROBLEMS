#include<bits/stdc++.h>
using namespace std;
void print(int n){
    int m = n-1;
    for(int i = 1;i<=n;i++){
     
        for(int j = m;j>=1;j--){//for printing leading spaces 
           cout<<"  ";
        }
        
        for(int k = 1;k<=i;k++){//increasing sequence
            cout<<k%10<<" ";
        }
        for(int l=i-1;l>=1;l--){ //decreasing sequence
            cout<<l%10<<" ";
        }
        for(int x = i-1;x>=1;x--){
            cout<<" ";
        }
        m--;
        cout<<'\n';
    }
}
int main(){
    int n;
    
    cout<<"enter number of rows";
    cin>>n;
    print(n);
}