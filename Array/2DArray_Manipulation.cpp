/*
To set every value in the matrix to 0 if that row or columns contains a 0.
*/

#include<iostream>
using namespace std;

int main() {
	int test_case;
	cin>>test_case;
	for(int t = 0; t < test_case; t++)
	{
	    int n;
	    cin>>n;
	    int a[n][n];
	    int arr[n][n];
	    for(int i = 0; i < n; i++)
	    {
	        for( int j = 0; j < n; j++)
	        {
	            cin>>a[i][j];
	            arr[i][j] = a[i][j];
	        }
	    }
	    for(int i = 0; i < n; i++)
	    {
	        for( int j = 0; j < n; j++)
	        {
	            if(a[i][j] == 0)
	            {
	                int k = 0;
 	                while(k < n)
	                {
	                    arr[k][j] = 0;
	                    k++;
	                }
	                int q = 0;
	                while(q < n)
	                {
	                    arr[i][q] = 0;
	                    q++;
	                }
	            }

	        }
	    }
	    for(int w = 0; w < n; w++)
	    {
	        for(int e = 0; e < n; e++)
	        {
	            cout<<arr[w][e]<<" ";
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
