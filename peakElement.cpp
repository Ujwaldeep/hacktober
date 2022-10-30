








































Refresh

Time (IST)	Status	Lang	Test Cases	Code
2020-12-20 14:14:42	Correct	cpp	-	View
C++ (g++ 5.4)
Average Time:
30m
Your Time:
16m




Custom Input
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
int peakElement(int arr[], int n)
{
   // Your code here
   int k=*max_element(arr, arr + n);
   for(int i=0; i<n; i++)
   {
       if(arr[i]==k)
       {
           return i;
       }
   }
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool f=0;
		int A = peakElement(a,n);
		
		if(n==1)
		f=1;
		else
		if(A==0 and a[0]>=a[1])
		f=1;
		else if(A==n-1 and a[n-1]>=a[n-2])
		f=1;
		else if(a[A] >=a[A+1] and a[A]>= a[A-1])
		f=1;
		else
		f=0;
		
		cout<<f<<endl;
		
	}

	return 0;
}  // } Driver Code Ends
