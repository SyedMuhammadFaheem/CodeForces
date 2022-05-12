#include <iostream> //docs faheem
using namespace std;
int main()
{
    int** arr=new int*[5];
    int col,row;
    for(int i=0;i<5;i++)
    {
        arr[i]=new int[5];
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                row=i;
                col=j;
            }
        }
    }
    int result;
    if(row==2 && col==2)
    result=0;
    else if(row<2 && col>2)
    result=(2-row)+(col-2);
    else if(row>2 && col<2)
    result=(row-2)+(2-col);
    else if(row<2 && col<2)
    result=(2-row)+(2-col);
    else if(row>2 && col>2)
    result=(row-2)+(col-2);
    else if(row==2 && col>2)
    result=(col-2);
    else if(row==2 && col<2)
    result=(2-col);
    else if(col==2 && row>2)
    result=(row-2);
    else if(col==2 && row<2)
    result=(2-row);
    cout<<result<<endl;


   
   return 0;
}