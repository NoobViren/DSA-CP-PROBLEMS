  #include<bits/stdc++.h>
using namespace std;
int main(){
   
        int n;
        cin>>n;
        vector<int>v(n);
        for(int j = 0;j<n;j++){
            cin>>v[j];
        }
        sort(v.begin(),v.end());
        int mid = (n+1)/2;
        vector<int>temp(n);
        for(int i = 0;i<n;i++){
            if(i==mid-1){
                temp[i] = 2*2*mid;
            }
            else
            temp[i] = 2*abs(mid - (i+1));
        }
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        long long sum = 0;
        for(int j = 0;j<n;j++){
            sum +=temp[j]*v[j];
        }
        cout<<sum<<endl;
    }
