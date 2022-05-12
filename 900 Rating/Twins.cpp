#include <iostream> //docs faheem
using namespace std;
int main()
{
    int n,total=0;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        total+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int count=0,sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum>(total-sum))
        break;
        sum+=arr[i];
        ++count;
    }
    cout<<count<<endl;

   
   return 0;
}