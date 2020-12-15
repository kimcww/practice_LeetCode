//1
//110
//11011
//shift binary count



class Solution {
    int max = 1e9+7;
public:
    int cntBinary(int n)
    {
        int count = 0;
        for (int i = 0; 0 < n; i++)
        {
            n = n / 2;
            count++;
        }
        return count;
    }
    
    // int 사용하니 runtime 오류
    
    int concatenatedBinary(int n) 
    {
        long long ret = 0;

        for (int i = 1; i <= n; i++)
            ret = (ret << cntBinary(i))%max + i;

        return ret;
    }
};