#include <iostream> //docs faheem
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count1=0,count2=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            count2=0;
            ++count1;
            if(count1==7)
            break;
        }
        else
        {
            count1=0;
            ++count2;
            if(count2==7)
            break;
        }
    }
    if(count1==7 || count2==7)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;



   
   return 0;
}