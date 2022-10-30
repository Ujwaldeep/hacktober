long long  merge(long long l, long long mid, long long h, long long arr[]){

        long long i = l, j = mid+1, k = 0;

        long long n = h-l+1;

        long long b[n];

        long long ans = 0;

        while(i<=mid && j<=h){

            if(arr[i]<=arr[j]){

                b[k] = arr[i];

                i++; k++;

            }else{

                ans += mid-i+1;

                b[k] = arr[j];

                j++;k++;

            }

        }

        if(i>mid){

            while(j<=h){

                b[k] = arr[j];

                j++;k++;

            }

        }else{

            while(i<=mid){

                b[k] = arr[i];

                i++;k++;

            }

        }

        for(int p=0; p<n; p++){

            arr[l+p] = b[p];

        }

        return ans;

        

    }

    long long mergesort(long long l, long long h, long long arr[]){

        

        if(l<h){

            long long mid = (l+h)/2;

            long long ans1 = mergesort(l,mid,arr);

            long long ans2 = mergesort(mid+1,h,arr);

            long long ans = merge(l,mid,h,arr);

            return ans1 + ans2 + ans;

        }

        return 0;

    }

    long long int inversionCount(long long arr[], long long N)

    {

        long long l = 0;

        long long h = N-1;

        

        long long ans = mergesort(l,h,arr);

        return ans;

        

    }
