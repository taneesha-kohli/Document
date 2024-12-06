#include<iostream>
#include<iomanip>
using namespace std;
const int n=3;

void swapmat(int arr1[n][n],int arr2[n][n])
{
int temp;
 for(int i=0;i<n;i++)        
        {
            for(int j=0;j<n;j++)
            {
                temp=arr1[i][j];
                arr1[i][j]=arr2[i][j];
                arr2[i][j]=temp;

            }
        }  
}

int main()
{
int arr1[n][n]={{3,5,7},
                {9,8,2},
                {1,3,8}};
int arr2[n][n]={{5,8,4},
                {1,2,5},
                {6,9,2}};

        cout<<"First Matrix : "<<endl;
        for(int i=0;i<n;i++)        
        {
            for(int j=0;j<n;j++)
            {
                cout<< setw(4) <<arr1[i][j];
            }
            cout<<endl;
        }
        cout<<"Second Matrix : "<<endl;
        for(int i=0;i<n;i++)        
        {
            for(int j=0;j<n;j++)
            {
                cout<< setw(4) <<arr2[i][j];
            }
            cout<<endl;
        }

     swapmat(arr1,arr2);

        cout<<"After swap of matrix :"<<endl;
           cout<<"First Matrix : "<<endl;
        for(int i=0;i<n;i++)        
        {
            for(int j=0;j<n;j++)
            {
                cout<< setw(4) <<arr1[i][j];
            }
            cout<<endl;
        }
        cout<<"Second Matrix : "<<endl;
        for(int i=0;i<n;i++)        
        {
            for(int j=0;j<n;j++)
            {
                cout<< setw(4) <<arr2[i][j];
            }
            cout<<endl;
        }
return 0;
}