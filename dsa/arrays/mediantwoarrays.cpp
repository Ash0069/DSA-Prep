#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double mergeSortedArray(vector<int> &nums1, vector<int> &nums2){
    vector<int> merged(nums1.size() + nums2.size());
    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());
    int s = merged.size();
    if (s % 2 == 1) {
        return merged[s / 2];
    }
    return (merged[s / 2 - 1] + merged[s / 2]) / 2.0;
}