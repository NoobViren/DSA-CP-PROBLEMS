#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int>nums(n);
        for(int i = 0;i<n;i++){
            cin>>nums[i];
        }
        int l = 0,r=1;
        int sum = nums[0];
        int m = *max_element(nums.begin(),nums.end());
        
        while(r<n){
            if(((nums[l]%2==0 && nums[r]%2!=0) || (nums[l]%2!=0 && nums[r]%2==0))  ){
                
                sum = max(nums[r] ,sum + nums[r]);
                
            }
            else{
                
                sum = nums[r];
            }
            m = max(m,sum);
           
                
            
            l++;
            r++;
            
        }
    
        cout<<m<<endl;
    }
}