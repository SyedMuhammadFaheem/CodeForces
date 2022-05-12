#include <iostream> //docs faheem
#include <map>
#include <utility>
#include <algorithm>
using namespace std;
map <int,int> m;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        int result=1;
        int* arr=new int[n];
        int* tempArr=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            tempArr[j]=arr[j];
        }
        if(n>1)
        {
            sort(tempArr,tempArr+n);
            for(int j=0;j<n;j++)
            m[tempArr[j]]=j+1;
            for(int j=0;j<n;j++)
            arr[j]=m[arr[j]];
            for(int j=1;j<n;j++)
            {
                if((arr[j]-arr[j-1]!=1))
                ++result;
            }
            if(result<=k)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;

        }
        else
        cout<<"YES"<<endl;
        m.clear();


    }

   
   return 0;
}