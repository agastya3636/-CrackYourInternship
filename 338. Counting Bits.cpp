class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> v;
        for (int i = 0; i <= n; i++)
        {
            int k = __builtin_popcount(i);
            v.push_back(k);
        }
        return v;
    }
};