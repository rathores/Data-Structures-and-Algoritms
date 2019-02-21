/*
Max sum of sub array can be determined using Kadane's Algorithm in O(n) time complexity.
Here, we use 2 variables -> 1. to keep track of current maximum 2. to keep track of max value so far.
current max is calculted for the entire array and when it is greater than max so far , max so far is updated accordingly.
*/

#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
int current_max;
int max_sum;
for(int i = 0;i <n;i++)
{
    cin>>arr[i];
}
current_max = arr[0];
max_sum = arr[0];
for(int i = 1; i< n ; i++)
{
    current_max = max(arr[i], current_max+arr[i]);

    max_sum = max(max_sum, current_max);

}
cout<<"\n Total: "<<max_sum<<"\n";
return 0;
}
