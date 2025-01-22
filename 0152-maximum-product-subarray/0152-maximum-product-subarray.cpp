class Solution {
public:
    int maxProduct(vector<int>& nums) {
    //    int sum=1;
    //     int maxn=INT_MIN;
    //     if(arr.size()==1){
    //         return arr[0];
    //     }
    //     int i=0,j=1;
    //     for(int k=i;k<=j;k++){
    //         sum*=(arr[k]);
    //     }
    //     maxn=max(maxn,(sum));
    //     j++;
    //     while(j<=arr.size()-1){
    //         sum=sum*(arr[j++])/(arr[i++]);
    //         maxn=max(maxn,(sum));
    //     }
    //     return maxn;
    long long prod=1;
    long long max=nums[0];
    for(int i=0;i<nums.size();i++){
        if(prod==0 || prod<INT_MIN)prod=1;
        prod*=nums[i];
        if(prod>max) max=prod;
    }
    prod=1;
    for(int i=nums.size()-1;i>=0;i--){
        if(prod==0 || prod<INT_MIN)prod=1;
        prod*=nums[i];
        if(prod>max) max=prod;
    }
    return max;
    } 
    
};


// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         // Initialize variables
//         long long maxProduct = nums[0]; // To store the maximum product
//         long long currentProduct = 1;  // For forward traversal
//         long long reverseProduct = 1;  // For backward traversal
//         for (int i = 0; i < nums.size(); i++) {
//             if (currentProduct == 0 || currentProduct < INT_MIN) currentProduct = 1;
//             currentProduct *= nums[i];
//             maxProduct = max(maxProduct, currentProduct);
//         }
//         for (int i = nums.size() - 1; i >= 0; i--) {
//             if (reverseProduct == 0 || reverseProduct < INT_MIN) reverseProduct = 1;
//             reverseProduct *= nums[i];
//             maxProduct = max(maxProduct, reverseProduct);
//         }
//         return maxProduct;
//     }
// };
