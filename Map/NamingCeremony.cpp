#include <bits/stdc++.h>
using namespace std;

bool fun(pair<string , int>key1 ,pair<string ,int>key2){
    return key1.second>key2.second;
}

int main() {
	int n;
	cin>>n;
	vector<string>v(n);
	map<string,int>map;
	for(int i=0;i<n;i++){
	    cin>>v[i];
	    map[v[i]]++;
	}
	
	vector<pair <string , int > >vec (map.begin(),map.end());
    sort(vec.begin() , vec.end() ,fun);
    int max=0,min=1000;
    for(auto p:vec){
        if(p.second>max){
            max=p.second;
        }
        if(p.second<min) min=p.second;
    }
    
    for(auto p:vec){
       if(p.second==min){
           cout<<p.first<<" ";
           break;
       }
    }
    for(auto p:vec){
       if(p.second==max){
           cout<<p.first<<" ";
           break;
       }
    }
}