class Solution{
public:
	long long maxProduct(int *arr, int n) {
        int minVal = arr[0];
        int maxVal = arr[0];

        int maxProduct = arr[0];

        for (int i = 1; i < n; i++) {

            // When multiplied by -ve number,
            // maxVal becomes minVal
            // and minVal becomes maxVal.
            if (arr[i] < 0)
                swap(maxVal, minVal);

            // maxVal and minVal stores the
            // product of subarray ending at arr[i].
            maxVal = max(arr[i], maxVal * arr[i]);
            minVal = min(arr[i], minVal * arr[i]);

            // Max Product of array.
            maxProduct = max(maxProduct, maxVal);
        }

        // Return maximum product found in array.
        return maxProduct;

	}
};