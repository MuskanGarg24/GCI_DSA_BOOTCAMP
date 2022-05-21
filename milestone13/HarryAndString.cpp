/*
Harry was studying a magic book that categorizes the magic spells into 3 categories - Good , Worst and Bad. If any spell contains all the vowels in alphabetical order then that spell is categorized as Good. If it contains the vowels in reverse alphabetical order , then that spell is categorized as Worst. All the other spells that do not fall in any of the categories before are categorized as Bad.

Now Harry tries to evaluate himslef by solving a spell categorization exercise at the end of the book , but since he is confused can you help him by solving the problems.

Note: The spell is a word of lower case English alphabets only. If there are no vowels in the string, then the spell is classified as "Good".
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s,s1="";
        cin>>s;

        int i;
        for(i=0; i<s.length(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                s1+=s[i];
            }
        }
        string g=s1;
        sort(g.begin(), g.end());
        string w=g;
        reverse(w.begin(),w.end());
        if(s1==g){
            cout<<"Good"<<endl;
        }
        else if(s1==w){
            cout<<"Worst"<<endl;
        }
        else{
            cout<<"Bad"<<endl;
        }
    }
    return 0;
}