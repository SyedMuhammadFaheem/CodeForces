#include <iostream> //docs faheem
#include <vector>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int index;
    vector<int> arr;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=48 && s[i]<=57)
        {
            arr.push_back(s[i]-48);
            index=i;
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
        if(i+1!=arr.size())
        cout<<"+";
    }

   
   return 0;
}