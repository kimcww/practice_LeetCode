class Solution {
public:
    string interpret(string command) {
        string ret;
        for (int i = 0 ; i < command.size(); i++)
        {
            if (command[i] == '(' || command[i] == ')')
            {
                if (command[i + 1] == ')')
                    ret += 'o';
                continue;
            }
            ret += command[i];
        }
        return ret;
    }
};