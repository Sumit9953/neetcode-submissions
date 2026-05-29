class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(auto ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }else {
                  if(!st.empty()){
                    char topch = st.top();
                    if(ch == ')' && topch == '('){
                        st.pop();
                    }else if(ch == '}' && topch == '{'){
                        st.pop();
                    }else if(ch == ']' && topch == '['){
                        st.pop();
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }
            }
        }

        return st.size() == 0 ? true : false;
    }
};
