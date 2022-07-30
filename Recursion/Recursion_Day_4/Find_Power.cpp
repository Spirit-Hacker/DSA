#include<iostream>
using namespace std;

int find_power(int a,int b){
    if(b == 0) return 1;
    if(b == 1) return a;

    int answer = find_power(a,b/2);
    if(b%2 == 0){
        return answer * answer;
    }
    else {
        return a * answer * answer; 
    }
}

int main()
{
    int a,b;
    cin>>a>>b;

    int ans = find_power(a,b);
    cout<<ans<<endl;
    return 0;
}