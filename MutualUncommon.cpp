#include <bits/stdc++.h>
using namespace std;

int main() {
	int m,n;
	cin>>m>>n;
	int arr1[m];
	int arr2[n];
	for(int i=0;i<m;i++) cin>>arr1[i];
	for(int i=0;i<n;i++) cin>>arr2[i];
	
	set<int>set1;
	set<int>set2;
	for(int i:arr1) set1.insert(i);
	for(int i:arr2) set2.insert(i);
	
	set<int> result;
	set_intersection(set1.begin(),set1.end(),set2.begin(),set2.end(),inserter(result,result1.begin()));
	
	int ans=(m-result.size())*(n-result.size());
	cout<<ans;

}
