class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;

        //Create stack1 with string s elements
        for(int i=0;i<s.length();i++){
            if(!st1.empty() && s[i]=='#')
                st1.pop();
            else if(st1.empty() && s[i]=='#');
            else
                st1.push(s[i]);
        }
        //Create stack2 with string t elements
        for(int i=0;i<t.length();i++){
            if(!st2.empty() && t[i]=='#')
                st2.pop();
            else if(st2.empty() && t[i]=='#');
            else
                st2.push(t[i]);
        }
        //Compare two stacks
        cout<<"st1.size:"<<st1.size()<<" "<<"st2.size:"<<st2.size()<<"\n";
        if(st1.size()!= st2.size())
            return false;

        while(!st1.empty()){
            if(st1.top() != st2.top()){
                return false;
            }
            st1.pop();
            st2.pop();
        }

        return true;
    }
};
