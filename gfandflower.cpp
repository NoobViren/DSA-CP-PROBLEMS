#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long a1 = min(a,c);
        long long a2 = min(b,d);
        if(a1>=a2){
            cout<<"Gellyfish"<<endl;

        }
        else {
            cout<<"Flower"<<endl;
        }
        
    }
 }

