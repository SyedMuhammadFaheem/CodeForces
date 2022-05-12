#include <iostream> //docs faheem
using namespace std;
int main()
{
    int lines,x=0;
    cin>>lines;
    for(int i=0;i<lines;i++)
    {
        string s;
        cin>>s;
        if(s[0]=='+' || s[1]=='+')
        ++x;
        else
        --x;
    }
    cout<<x<<endl;

   
   return 0;
}