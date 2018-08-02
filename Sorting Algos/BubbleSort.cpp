/*
            BUBBLE SORT APPROACH
After every iteration, the largest element of the list is places at the end of the array.

Time Complexity - Worst Case- O(n*n) [When array is in reverse order]
                - Best Case - O(n) [When array is sorted]
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int temp;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n ; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
