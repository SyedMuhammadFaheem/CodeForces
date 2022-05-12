#include <iostream> //docs faheem
using namespace std;
int main()
{
    int d;
    cin>>d;
    int count=0;
    int max=5;
    while(d>0)
    {
        if(max<=d)
        d-=max;
        else
        {
            --max;
            continue;
        }
        ++count;
    }
    cout<<count<<endl;

   
   return 0;
}