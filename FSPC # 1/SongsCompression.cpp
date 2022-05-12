#include <iostream> //docs faheem
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    int* arr=new int[n];
    int* arr1=new int[n];
    vector<int> diff;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cin>>arr1[i];
        sum+=arr[i];
        diff.push_back(arr1[i]-arr[i]);
    }
    if(sum>m)
    {

        sort(diff.begin(),diff.end());
        int i=0;
        for(;sum>m && i<n;i++)
        {
            sum+=diff[i];
        }
        if(sum<=m)
        cout<<i<<endl;
        else
        cout<<-1<<endl;
    }
    else
    cout<<0<<endl;
   return 0;
}