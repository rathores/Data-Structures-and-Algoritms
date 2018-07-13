/*
This can also be specified as Sort an Array of 0,1,2 in ascending order.
Here we use 3 iterators as low, mid and high for sorting the array.
    -High points to the end of the array
    -Low points to the start of the array
    -Mid is present at the beginning of the array
*/

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,mid,high,low,temp;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        mid = 0;
        low = 0;
        high = n - 1;
        while(mid <= high)
        {
            if(a[mid] == 2)
            {
               temp = a[mid];
               a[mid] = a[high];
               a[high] = temp;
               high--;
            }
            else if(a[mid] == 1)
            {
                mid++;
            }
            else
            {
                temp = a[mid];
                a[mid] = a[low];
                a[low] = temp;
                mid++;
                low++;
            }
        }
        for(int k = 0; k < n; k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
