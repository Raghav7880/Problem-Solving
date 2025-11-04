#include <bits/stdc++.h>
using namespace std;

int digitSum(int a){
    int sum=0;
    while(a>0){
        int b=a%10;
        sum+=b;
        a/=10;
    }
    return sum;
}

int countPrime(int a,int b){
    int count=0;
    for(int i=a;i<=b;i++){ 
        bool t=true;
        if(i<2) t=false;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                t=false;
                break;
            }
            
        }
        if(i==2) t=true;
        if(t){
            int dSum=digitSum(i);
            if(dSum%2==0) count++;
        }
    }
    return count;
}

int main() {
    int a,b;
    cin>>a>>b;
    int d=countPrime(a,b);
    cout<<d;

}
