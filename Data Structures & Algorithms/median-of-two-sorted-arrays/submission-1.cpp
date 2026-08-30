class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<double>sorted;
        
        int i=0;
        int j=0;
        while(i<n1&&j<n2){
            if(nums1[i]<=nums2[j]){
                sorted.push_back(nums1[i]);
                i++;
            }
            else{
                sorted.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n1){
            sorted.push_back(nums1[i]);
            i++;
        }
        while(j<n2){
            sorted.push_back(nums2[j]);
            j++;
        }
        for(auto x:sorted){
            cout<<x<<endl;
        }
        double med;
        int m = n1+n2;
        if(m%2==1){
            med = sorted[(m/2)];
        }
        else{
            med = sorted[(m/2)]/2+sorted[(m/2)-1]/2;
        }
        return med;
    }
};
