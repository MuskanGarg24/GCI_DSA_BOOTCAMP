#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,x;
	int k;
	cin>>s;
	cin>>k;
	char character;
	int n=s.length();
    int index=0;
	for(int i=0;i<n;i++){
		character='z';
        if(s.length()<k){
            k=s.length();
        }
		for(int j=0;j<k;j++){
			if(s[j]<character){
				index=j;
				character=s[j];
			}
		}
		x.push_back(character);
		s.erase(s.begin()+index);
	}
	cout<<x<<endl;
	return 0;
}