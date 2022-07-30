#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int total_subsequence = 0;

void subsequence(string s,string ans,int index){
    if(index >= s.length()){
       cout<<ans<<endl;
       total_subsequence++;
       return;
    } 

    subsequence(s,ans,index+1);
    ans.push_back(s[index]);
    subsequence(s,ans,index+1);
}

int main()
{
    string s;
    cin>>s;

    string ans = "";
    subsequence(s,ans,0);
    cout<<"Total_Subsequence : "<<total_subsequence<<endl;
    return 0;
}