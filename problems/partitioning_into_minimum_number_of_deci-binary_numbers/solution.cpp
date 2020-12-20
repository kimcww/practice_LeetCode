class Solution {
public:
    int minPartitions(string n) {
            int result = 0;
        do
        {
            int zeroCnt = 0;
            for (int i = 0; i < n.size(); i++)
            {
                if (n[i] != '0')
                {
                    zeroCnt++;
                    n[i]--;
                }
            }
            if (!zeroCnt)
                break;

            result++;
        } while (true);
        return result;
    }
};