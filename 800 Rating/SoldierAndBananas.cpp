#include <iostream> //docs faheem
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int i=1;
    int result=0;
    while(i<=w)
    {
        result=result+(i*k);
        ++i;
    }
    if(result>n)
    cout<<result-n<<endl;
    else
    cout<<0<<endl;
   
   return 0;
}