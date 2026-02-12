#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&a,int i){
    int left = 2*i+1;
    int right = 2*i +2;
    int largest = i;
    if(a[left]>a[largest]){
        largest = left;
    }
    if(a[right]>a[largest]){
        largest = right;
    }
    
   if(largest!=i){
    swap(a[i],a[largest]);
     heapify(a,largest);
   }
}
vector<int>heapsort(vector<int>&a){
    int n = a.size();
    int hs = n;
    while(hs>0){
        swap(a[0],a[n-1]);
        hs--;
        heapify(a,0);
    }
    return a;
}
int main(){
    vector<int>v = {3,7,4,8,5,9};
    vector<int>ans = heapsort(v);
    for(auto x : ans) cout<<x<<" ";
}