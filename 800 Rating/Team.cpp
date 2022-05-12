#include <iostream> //docs faheem
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        if((n1==1 && n2==1) || (n2==1 && n3==1) || (n1==1 && n3==1))
        ++count;

    }
    cout<<count<<endl;

   
   return 0;
}