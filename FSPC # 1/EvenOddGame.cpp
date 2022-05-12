#include <iostream> //docs faheem
#include <vector>
#include <limits>
using namespace std;
long long int max(int mode,long long int* array,long long int n)
{
    long long int max=INT64_MIN,index;
    if(mode==1)
    {
        for(int i=0;i<n;i++)
        {
            if(max<array[i] && array[i]%2==0 && array[i]!=-1)
            {
                max=array[i];
                index=i;
            }
        }

    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(max<array[i] && array[i]%2!=0 && array[i]!=-1)
            {
                index=i;
                max=array[i];
            }
        }
    }
    array[index]=-1;
    return max;
}
bool check(long long int array[],long long int n)
{
    for(int i=0;i<n;i++)
    {
        if(array[i]!=-1)
        return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n,scoreBob=0,scoreAlice=0;
        cin>>n;
        long long int* arr=new long long int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        while(!check(arr,n))
        {
            long long int evenMax=max(1,arr,n);
            long long int oddMax=max(0,arr,n);
            if(evenMax>oddMax)
            scoreAlice+=evenMax;
            else
            {
                oddMax=max(0,arr,n);
            }
            if(evenMax<oddMax)
            scoreBob+=oddMax;
            else
            {
                evenMax=max(1,arr,n);
            }
            
        }
        if(scoreAlice>scoreBob)
        cout<<"Alice"<<endl;
        else if(scoreAlice<scoreBob)
        cout<<"Bob"<<endl;
        else
        cout<<"Tie"<<endl;
    }

   
   return 0;
}