#include <bits/stdc++.h>
using namespace std;

int smallInRight(int arr[],int indx,int num ,int a){
    int count=0;
    for(int i=indx+1;i<a;i++){
        if(arr[i]<num) count++;
    }
    return count;
}

int main() {
    int a;
    cin>>a;
    int arr[a];
    int ans[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<a;i++){
        int d=smallInRight(arr,i,arr[i],a);
        ans[i]=d;
    }
    
    for(int i=0;i<a;i++){
        cout<<ans[i]<<" ";
    }

}
