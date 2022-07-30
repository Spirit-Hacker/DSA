#include<iostream>
using namespace std;

string Reverse(string str,int i,int j){
        if(i>j) return str;

        swap(str[i],str[j]);
        return Reverse(str,i+1,j-1);
}

int main()
{
    string s;
    getline(cin,s);

    int i=0,j=s.length()-1;
    cout<<Reverse(s,i,j)<<endl;

    return 0;
}