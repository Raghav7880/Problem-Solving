#include <bits/stdc++.h>
using namespace std;

bool checkPalindrom(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1]) return false;
    }
    return true;
}

int main() {
    string s;
    int m;
    cin>>s>>m;
    
    string a=s.substr(m)+s.substr(0,m); //left rotate
    string b=s.substr(s.size()-m)+s.substr(0,s.size()-m);//right rotate
    if(checkPalindrom(a)||checkPalindrom(b)) cout<<"TRUE";
    else cout<<"FALSE";

}
