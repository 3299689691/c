#include <bits/stdc++.h>
using namespace std;
#define ll long long
//#include<iostream>
int main()
{
    int n;
    cin >> n;
    cout << n;
}
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] > target)
                left = mid;
            else if (nums[mid] < target)
                right = mid;
            else
                return mid;
        }
        return -1;
    }
};