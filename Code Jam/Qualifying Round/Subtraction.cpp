#include <iostream> //docs faheem
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int index,min=999999999;
        int n,b;
        cin>>n>>b;
        vector<int> v(n);
        for(int j=0;j<n;j++)
        {
            cin>>v[j];
            if(min>v[i])
            index=j;
        }
        if(n!=1)
        {
            for(int k=0;k<n && v.size()!=1;k++)
            {

                min=999999999;
                int value=v[index];
                v.erase(v.begin()+index,v.end()-index);
                for(int j=0;j<n;j++)
                {
                    v[j]-=value;
                    if(min>v[j])
                    index=j;
                }
            }
        }
        if(v[0]==b)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    



    }
    

   
   return 0;
}