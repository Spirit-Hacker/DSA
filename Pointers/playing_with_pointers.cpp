
// pointer stores address of a number stored in main memory of PC.

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int num = 5;
    cout<<num<<endl;

    cout<<"Address is : "<<&num<<endl;

    int *ptr = &num;
    cout<<"value is "<<*ptr<<endl;
    cout<<"Address is "<<ptr<<endl;

    double d = 4.2233;
    double *ptr2 = &d;

    cout<<"value is "<<*ptr2<<endl;
    cout<<"Address is "<<ptr2<<endl;

    cout<<"size of integer "<<sizeof(num)<<endl;
    cout<<"size of pointer "<<sizeof(ptr)<<endl;

    cout<<"size of double "<<sizeof(d)<<endl;
    cout<<"size of pointer "<<sizeof(ptr2)<<endl;

    return 0;
}