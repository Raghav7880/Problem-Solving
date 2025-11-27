#include <bits/stdc++.h>
using namespace std;

bool fun(pair<int , int>key1 ,pair<int ,int>key2){
    return key1.second>key2.second;
}


int main() {
	int n;
	cin>>n;
	vector<int>v(n);
	map<int,int>map;
	for(int i=0;i<n;i++){
	    cin>>v[i];
	    map[v[i]]++;
	}
	
	vector<pair <int , int > >vec (map.begin(),map.end());
    sort(vec.begin() , vec.end() ,fun);
    
    for(auto p:vec){
        cout<<p.first<<" ";
    }
}
