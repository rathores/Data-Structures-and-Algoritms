/*
              SELECTION SORT APPROACH
    1. Select the minimum i.e smallest element from the array.
    2. Swap the smallest element from the beginning element

-> This means, Selection Sort works with the help of two separate internal array list such that the
starting part of the list is sorted ( ascending order ) and the end part is unsorted. Thus selecting
the smallest element from the array and placing it at the start of the array is Selection Sort.

Time Complexity -  O(n*n)
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i< n; i++)
    {
        cin>>a[i];
    }
    int least, temp, pos;
    for(int i = 0; i < n ; i++)
    {
        //Initialize least variable with the initial array element for each iteration
        least = a[i];
        for(int j = i+1; j < n; j++)
            //To find the smallest element from the array
            if(a[j] < least)
            {
                least = a[j];
                pos = j;
               //Swap the smallest element with the starting element of the array
                temp = a[pos];
                a[pos] = a[i];
                a[i] = temp;
            }
    }
    cout<<"\n";
    //To print the sorted array
      for(int i = 0; i< n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
