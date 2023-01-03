#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxRotateFunction(vector<int> &nums)
    {

        int sum = 0;
        int f = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            f += i * nums[i];
        }

        int ans = f;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            f = f + sum - nums[n - 1 - i] * n;
            ans = max(f, ans);
        }
        return ans;
    }
};
int main()
{
    vector<int> num = {4,3,2,6};
    Solution s;
    cout << s.maxRotateFunction(num);
    return 0;
}