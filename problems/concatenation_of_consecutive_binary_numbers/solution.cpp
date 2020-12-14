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
    // long long int 사용하니 값오류 ( 너무 큰 값 ) int64를 사용해서
    // int32 로 통일하는 방법 %1000000007 feat.google
    
    int concatenatedBinary(int n) 
    {
        long long ret = 0;

        for (int i = 1; i <= n; i++)
            ret = (ret << cntBinary(i))%max + i;

        return ret;
    }
};