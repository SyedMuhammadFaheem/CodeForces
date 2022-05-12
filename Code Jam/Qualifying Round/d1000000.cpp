#include <iostream> //docs faheem
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        int* arr=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        bool check=false;
        for(int k=0;k<n;k++)
        {

            for(int l=1;l<(n-k-1);l++)
            {
                if(arr[l-1]>arr[l])
                {
                    check=true;
                    int temp=arr[l-1];
                    arr[l-1]=arr[l];
                    arr[l]=temp;
                }
            }
            if(!check)
            break;
        }
        int count=1;
        for(int a=0;a<n;a++)
        {
            if(arr[a]>=count)
            ++count;

        }
        --count;
        cout<<"Case #"<<i+1<<": "<<count<<endl;
        delete[] arr;

    }

   
   return 0;
}