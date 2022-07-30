#include<iostream>
using namespace std;

void say_digit(int n,string a[]){
    if(n==0) return;

    int digit = n%10;
    n = n/10;

    say_digit(n,a);
    cout<<a[digit]<<" ";
}

int main()
{
    int n;
    cin>>n;
    string a[10] = {"zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    cout<<endl;
    say_digit(n,a);
    cout<<endl;
    return 0;
}