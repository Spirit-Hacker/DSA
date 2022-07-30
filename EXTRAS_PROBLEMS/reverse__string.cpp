#include<iostream>
using namespace std;

string reverse(string str){
    int s = 0;
    int e = str.size()-1;

    while(s<e){
        swap(str[s++],str[e--]);
    }
    return str;
}

int main()
{
    string str;
    getline(cin,str);

    cout<<reverse(str)<<endl;
    return 0;
}