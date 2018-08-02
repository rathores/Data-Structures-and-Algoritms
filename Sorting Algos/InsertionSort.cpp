#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], minimum, j;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for(int i = 1; i < n; i++)
    {
        minimum = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > minimum)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = minimum;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
