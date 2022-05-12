#include <iostream> //docs faheem
#include <limits>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {

        long long int n;
        cin>>n;
        long long int* arr=new long long int[n];
        long long int s=0;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        for(int j=1;j<n;j++)
        {
            s= max(s,arr[j-1]*arr[j]);
        }
        cout<<s<<endl;
    }

   
   return 0;
}