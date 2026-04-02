#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cout<<"enter string: ";
    cin>>s;

    int i = 0;
    int j = s.size() - 1;

    while(i<j){
        if(s[i] == s[i+1] && s[i] != s[j]){
            swap(s[i+1], s[j]);
            i++;
        }
        else if(s[i] == s[i+1] && s[i] == s[j]){
            j--;
        }
        else if(s[i] != s[i+1]){
            i++;
        }
    }

    // for(int i = 0; i<s.size(); i++){
    //     if()
    // }

    cout<<s;

   return 0;
}