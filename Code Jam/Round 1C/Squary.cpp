#include <iostream> //docs faheem
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int n,k;
        cin>>n>>k;
        long int* arr=new long int[n];
        long int sum=0,sqSum=0;
        for(int j=0;j<n;j++)
        {   
            sum+=arr[j];
            sqSum+=(arr[j]*arr[j]);
        }
        long int result;
        if(sqSum==sum)
        {
            result=0;
            cout<<"Case #"<<i+1<<result<<endl;
        }
        else if(result!=0)
        {
            cout<<"Case #"<<i+1<<result<<endl;
        }
        else
        cout<<"IMPOSSIBLE"<<endl;


    }

   
   return 0;
}