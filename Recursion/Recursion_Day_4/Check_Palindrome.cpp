#include<iostream>
using namespace std;

bool Check_palindrome(string str,int i,int j){
    if(i>j) return false;

    if(str[i] == str[j]) return true;
    bool check = Check_palindrome(str,i+1,j-1);
    return check;
}

int main()
{
    string s;
    getline(cin,s);

    int i=0,j=s.length()-1;

    bool ans = Check_palindrome(s,i,j);

    if(ans) cout<<"pallindrome\n";
    else cout<<"Not palindrome\n";
    return 0;
}