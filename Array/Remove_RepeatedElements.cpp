/*
This Program is to remove all the repeated Elements from a given array

Input:  arr[] = 8,8,2,5,6,9,9,2,5
Output: arr[] = 8,2,5,6,9
*/

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for(int j = 0; j < n; j++)
        {
          int k = j + 1;
          while(k < n+1 )
          {
              if(a[j] == a[k])
                {
                    a[k] = -1;
                }
                k++;
        }
        }
        for(int z = 0; z < n; z++)
        {
            if(a[z] != -1)
                cout<<a[z]<<" ";
        }

        cout<<"\n";
    }
    return 0;
}
