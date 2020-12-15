class Solution {
public:
    string interpret(string command) {
        string ret;
        for (int i = 0 ; i < command.size(); i++)
        {
            if (command[i] == '(')
            {
                if (command[i + 1] == ')')
                    ret += 'o';
                continue;
            }
            else if(command[i] == ')')
                continue;
            
            ret += command[i];
        }
        return ret;
    }
};