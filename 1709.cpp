#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        vector<pair<int,int>>ans;
        for(auto &x: a){
            cin>>x;
        }
        for(auto &y : b){
            cin>>y;
       }
       int count = 0;
       for(int i= 0;i<n;i++){
        if(a[i]>b[i]){
            swap(a[i],b[i]);
            count++;
            ans.push_back({3,i+1});
        }
    }
       //ensure that numbers less than or equal to n/2 are in one array and rest in the other
       for(int j = 0;j<n-1;j++){
         if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            count++;
            ans.push_back({1,j+1});
            j=-1;
         }
         
       }
    for(int k = 0;k<n-1;k++){
         if(b[k]>b[k+1]){
            swap(b[k],b[k+1]);
            count++;
            ans.push_back({2,k+1});
            k = -1;
         }
        }
    
        
       
       cout<<count<<endl;
       for(auto it : ans){
        cout<<it.first<<" "<<it.second<<endl;
       }

    }
}
 
