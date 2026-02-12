#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x,n,m;

        cin>>x>>n>>m;
        int min = floor(double(x)/(pow(2,m+n)));
        int max = ceil(double(x)/(pow(2,m+n)));
cout<<min<<" "<<max<<endl;

    }
    return 0;
}