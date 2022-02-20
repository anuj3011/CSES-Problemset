#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            arr[i]+=arr[i-1];
        }
    while(q-->0){
        int a,b;
        cin>>a>>b;
        a--,b--;
        if(a==0)
            cout<<arr[b];
        else
            cout<<arr[b]-arr[a-1];
        cout<<endl;
    }
}