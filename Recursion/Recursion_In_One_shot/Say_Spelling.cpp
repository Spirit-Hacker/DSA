#include<iostream>
#include<algorithm>
using namespace std;

void Say(int n,string a[]){
        if(n==0) return;

        int D = n%10;
        n = n/10;

        Say(n,a);
        cout<<a[D]<<"  ";
}

int main()
{
    int n;
    cin>>n;

    string a[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    Say(n,a);
    return 0;
}