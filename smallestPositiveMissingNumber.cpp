








































Refresh

Time (IST)	Status	Lang	Test Cases	Code
2021-07-23 18:17:10	Correct	cpp	-	View
2021-07-23 18:16:54	Wrong	cpp	-	View
2021-07-23 18:15:42	Wrong	cpp	-	View
2021-07-23 18:14:49	Wrong	cpp	-	View
C++ (g++ 5.4)




Custom Input
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
            int count[n+1]={0};
        // Your code here
            for(int i=0; i<=n; i++){
                if(arr[i]>=0 && arr[i]<n){
                    count[arr[i]]++;
                }
            }
            for(int i=1; i<=n; i++){
                if(count[i]==0)
                return i;
            }
       return n+1;
    } 
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends
