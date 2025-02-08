#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;
    if (start == end) {
        return {};
    }
    while (start < end) {
        if (nums[start] + nums[end] == target) {
            return {start, end};
        }
        else if (nums[start] + nums[end] < target) {
            start++;
        }
        else {
            end--;
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout << result[0] << ", " << result[1] << endl;
    return 0;
}
