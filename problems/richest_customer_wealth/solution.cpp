class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int biggest = 0;
        for (auto king : accounts)
        {
            int current = 0;
            for (auto slave : king)
                current += slave;
            if (biggest < current)
                biggest = current;
        }
        return biggest;
    }
};