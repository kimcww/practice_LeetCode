class Solution {
public:
    string createOneString(vector<string>& word1)
    {
	    string ret;
	    for (auto W : word1)
		    ret += W;
	    return ret;
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string left = createOneString(word1);
        string right = createOneString(word2);

        bool bRet = !(left.compare(right));

	    return bRet;
    }
};