#include<iostream>
using namespace std;

bool check(string s){
    int start = 0;
    int end = s.size()-1;

    if(s[start] != s[end]){
        return false;
    }
    else{
        start++;
        end--;
    }
    return true;
}

int main()
{
    string s;
    getline(cin,s);

    if(check(s)) cout<<"pallindrome\n";
    else cout<<"not a pallindrome\n";

    return 0;
}