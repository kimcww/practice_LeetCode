class Solution {
public:
    int numberOfMatches(int n) {
        int matches = 0;
        while (1 < n)
        {
            matches += n / 2;
            n -= n/2;
        }
        return matches;
    }
};