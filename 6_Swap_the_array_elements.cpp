class Solution{
  public:
    void swapElements(int arr[], int n){
        int i = 0;
        while(i < n){
            if(i + 2 < n){
                int temp = arr[i];
                arr[i] = arr[i + 2];
                arr[i + 2] = temp;
            }
            i++;
        }
    }
};
