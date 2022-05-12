#include <iostream> //docs faheem
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int* players=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>players[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(players[i]>=players[k-1] && players[i]>0)
        ++count;
    }
    cout<<count<<endl;

   
   return 0;
}