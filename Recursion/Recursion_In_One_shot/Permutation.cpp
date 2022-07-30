#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int total = 0;

void Permutation(string s,int index){
    if(index >= s.length()){
        cout<<s<<endl;
        total++;
        return;
    }
   for(int i=index;i<s.length();i++){
        swap(s[index],s[i]);
        Permutation(s,index+1);

        // Backtrack  :-  Means, it takes string back to its initial state.
        swap(s[i],s[index]);
   }

}

int main()
{
    string s;
    cin>>s;
    cout<<endl<<endl;

    Permutation(s,0);
    cout<<"Total permutations of string are : "<<total<<endl;
    
    return 0;
}