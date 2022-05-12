#include <iostream> //docs faheem
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int m=0;m<t;m++)
    {
        cin>>n;
        int* arr=new int[n];
        int count=0;
        bool check=false;
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            int j;
            for(j=i+1;j<n;j++)
            {
                if(arr[j]<arr[i])
                {
                    ++count;
                    check=true;
                    break;
                }
            }
            if(check)
            {
                int index=i;
                for(int k=i;k<=j;k++)
                {
                    for(int l=index;l<=(j-k-1);l++)
                    {
                        if(arr[k]>arr[l])
                        {
                            int temp=arr[k];
                            arr[k]=arr[l];
                            arr[l]=temp;
                        }
                    }
                }
                i=j+1;
            }
            check=false;
        }
        cout<<count<<endl;
    }

   
   return 0;
}