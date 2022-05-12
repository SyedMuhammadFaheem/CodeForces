#include <iostream> //docs faheem
using namespace std;
int main()
{
    int t,r,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int r,c;
        cin>>r>>c;
        cout<<"Case #"<<i+1<<": "<<endl;
        for(int j=0;j<r;j++)
        {
            if(j==0)
            {
                cout<<"..+";
                for(int k=0;k<(c-1);k++)
                cout<<"-+";
            }
            else
            {
                cout<<"+";
                for(int k=0;k<c;k++)
                cout<<"-+";
            }
            if(j>0)
            cout<<endl<<"|.|";
            else
            cout<<endl<<"..|";
            for(int k=0;k<(c-1);k++)
            {
                cout<<".|";
            }
            if(j+1==r)
            {
                cout<<endl;
                cout<<"+";
                for(int k=0;k<c;k++)
                {
                    cout<<"-+";
                }
            }
            cout<<endl;
        }
    }

   
   return 0;
}