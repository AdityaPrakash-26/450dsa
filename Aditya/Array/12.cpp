int maxSubarraySum(int arr[], int n){
        
        int sum = INT_MIN;
        int maxSumHere = 0;
        for(int i = 0; i<n; i++) {
            maxSumHere = maxSumHere + arr[i];
            if(sum<maxSumHere){
                sum = maxSumHere;
            }
            if(maxSumHere<0){
                maxSumHere = 0;
            }
        }
        return sum;
            
    }