#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count1=0;
    int count2=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        ++count1;
        else
        ++count2;
    }
    if(count1>count2)
    cout<<"Anton"<<endl;
    else if(count2>count1)
    cout<<"Danik"<<endl;
    else
    cout<<"Friendship"<<endl;
    
    
    
}