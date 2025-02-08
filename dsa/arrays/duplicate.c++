#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> removeDuplicate(vector<int>& nums) {
    int start = 0;
    if (nums.size() <= 1) {
        return nums;
    }
    sort(nums.begin(), nums.end());
    while(start < (nums.size() - 1)) {
        if(nums[start] == nums[start + 1]){   
            nums.erase(nums.begin()+start);
        }
        start++;
    }
    return nums;
}

int main() {
    vector<int> nums = {2, 3, 2, 4, 5, 6, 5};
    vector<int> result = removeDuplicate(nums);
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
