class Solution {
public:    
    int maxOperations(vector<int>& nums, int k) 
    {
        //map 의 key 는 pair가 안된 nums의 valuse값, map의 value 는 그값이 몇개 존재하는지
        //unordered_map이 map 보다 더 빠름( sort 과정이 생략 )
        unordered_map<int, int> Mp = {};
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            //지금 데이터와 매칭되는 값이 존재하는 지 확인하는 과정
            if (Mp[k- nums[i]])
            {
                Mp[k - nums[i]]--;
                count++;
            }
            else
                Mp[nums[i]]++;  // 없으면 자신의 값을 key값에 넣어주며 value 에 존재여부 추가 ( 중복데이터가 있을 수 있음 )
        }
        return count;
    }
};