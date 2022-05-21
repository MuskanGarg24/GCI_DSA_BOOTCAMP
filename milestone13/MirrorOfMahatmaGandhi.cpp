/*
On the way to Dandi March, Gandhijee carried a mirror with himself.
When he reached Dandi, he decided to play a game with the tired people to give them some strength.
At each turn of the game he pointed out a person and told him to say a number N(possibly huge) of his choice.
The number was called lucky if that equals it's mirror image.
*/



#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s)
{
    string result = s.substr(0,s.length());
    reverse(s.begin(), s.end());

    if(s==result){
		return true;
	}
    else{
		return false;
	}
}

bool isMirror(string s)
{
    for(int i = 0; i < s.length(); i++){
    	if(s[i] != '0' && s[i] != '1' && s[i] != '8'){
			return false;
		}
	}
	return true;
}

int main(){
    int t;
	cin>>t;

    while(t--){
        string s; 
		cin>>s;
        if (isMirror(s) && palindrome(s)){
			cout<<"YES"<<endl;
		}
        else{
			cout<<"NO"<<endl;
		}
    }
    return 0;
}