








































Refresh

Time (IST)	Status	Lang	Test Cases	Code
2022-04-12 23:46:47	Correct	cpp	166 / 166	View
2022-04-12 23:44:19	Wrong	cpp	1 / 166	View
2022-04-12 23:44:01	Wrong	cpp	1 / 166	View
2022-03-12 23:05:29	Time Limit Exceeded	cpp	141 / 166	View
2022-03-12 22:58:47	Wrong	cpp	1 / 166	View
2022-03-12 22:53:16	Correct	cpp	166 / 166	View
2022-03-12 22:52:28	Wrong	cpp	1 / 166	View
C++ (g++ 5.4)
Average Time:
25m
Your Time:
5m




Custom Input

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
    //   map<int,int> m;
    //   for(int i=l; i<=r; i++){
    //       m[arr[i]]++;
    //   }
    //   int cnt = 0;
    //   for(auto x:m){
    //     //   cout<<x.first<<" "<<cnt<<endl;
    //       cnt += x.second;
    //       if(cnt >=k){
    //           return x.first;
               
    //       }
           
    //   }
    
    sort(arr,arr+r+1);
    // for(int i=l; i<=r; i++)cout<<arr[i]<<" ";
    // cout<<endl;
    return arr[k-1];
    }
};
