/*

Here a given array is to be sorted such that
    1. All the odd numbers are present at the beginning of the array in descending order
    2. All even numbers are present after the odd numbers in ascending order.

For Example Given Array -arr = {7,2,3,5,4,1,10}
Output should be - 7,5,3,1,2,4,10

*/

#include<iostream>
using namespace std;

void Specific_Sort(int a[],int bego, int lasto, int bege, int laste, int n)
{
    int temp;
    for(int i = bego; i <= lasto-1 ; i++)
    {
        for(int j = i+1; j <= lasto; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

    }
    for(int i = bege; i <= laste-1; i++)
    {
        for(int j = i+1; j <= laste; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int s = 0; s < n; s++)
        cout<<a[s]<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,mid,low,high;
        cin>>n;
        int a[n];
        for(int q = 0; q < n; q++)
            cin>>a[q];

        mid = 0;
        low = 0;
        high = n-1;
        while(mid <= high)
        {
            if(a[mid] % 2 == 0 && a[high] %2 == 0)
                high--;
            else if(a[mid] % 2 != 0 && a[high] % 2 != 0)
            {
                mid++;
            }
            else if(a[mid] % 2 ==0 && a[high] % 2 != 0)
            {
                int temp;
                temp = a[mid];
                a[mid] = a[high];
                a[high] = temp;
                high--;
                mid++;
            }
            else if(a[mid] % 2 != 0 && a[high] % 2 == 0)
            {
                high--;
                mid++;
            }
            low= mid;
        }

        if(a[low] % 2 == 0)
        {
            int bego = 0;
            int lasto = low -1;
            int bege = low;
            int laste = n-1;
            Specific_Sort(a,bego, lasto, bege, laste,n);
        }
        else
        {
            int bego = 0;
            int lasto = low;
            int bege = low+1;
            int laste = n;
            Specific_Sort(a,bego, lasto, bege, laste,n);
        }
        cout<<"\n";
    }
    return 0;
}
