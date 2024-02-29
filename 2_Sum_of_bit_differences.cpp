class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    long long sum = 0;
	    for(int i = 0; i < 31; i++){
	        long long countOnes = 0;
	        for(int j = 0; j < n; j++){
	            if(arr[j] & (1<<i)) countOnes++;
	        }
	        sum += (countOnes * (n - countOnes) * 2);
	    }
	    return sum;
	}
};
