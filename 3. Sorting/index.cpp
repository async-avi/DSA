#include <bits/stdc++.h>
using namespace std;


string largestNumber(vector<int>& nums) {
        string final = "";
        for(int i = nums.size() - 1; i >= 0; i--){
            final+=to_string(nums[i]);
        }

        return final;
}
int main(){
    vector<int> nums = {10,2};
    // int arr[] = {3,3,2,2,2,1};
    string res = largestNumber(nums);
    cout << res << endl;
    return 0;
}