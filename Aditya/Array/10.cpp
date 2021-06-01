//modifying the array
int findDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int ans = 0;
    for(int i = 0; i<nums.size()-1; i++){
        if(nums[i] == nums[i+1]){
            ans = nums[i];
        }
    }
    return ans;
}

//without modifying the array
int findDuplicate2(vector<int>& nums) {
    int n = nums.size() - 1;
    int arr[n+1];
    for(int i = 0; i<=n; i++){
        arr[i] = 0;
    }

    for(int i = 0; i<=n; i++){
        arr[nums[i]]++;
    }

    int ans = -1;
    for(int i = 0; i<=n; i++){
        if(arr[i]>=2){
            ans = i;
        }
    }
    return ans;
}