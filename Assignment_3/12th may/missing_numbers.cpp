class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        sort(array.begin(),array.end());
        for(int i=0;i<n;i++){
            if(i+1!=array[i]){
                return i+1;
            }
        }
    }
};
