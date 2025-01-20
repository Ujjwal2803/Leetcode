class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> p{nums1.begin(),nums1.end()};
        vector<int> intersection;
        // for(int i=0;i<nums1.size();i++){
        //     for(int j=0;j<nums2;j++){
        //         if(arr[i]==arr[2]){
        //             cout<<arr[i];
        //             break;
        //         }
        //     }
        // }
        for(int j:nums2){
         if (p.find(j) != p.end()) {
            intersection.push_back(j);
            p.erase(j); 
        }
    }
    return intersection;
    }
};