class Solution {
public:
    bool iaAlphaNumeric(char ch) {
        return (ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9' ||
                ch >= 'a' && ch <= 'z');
    }

    bool isPalindrome(string s) {
        int st = 0;
        int end = s.length() - 1;

        while (st <= end) {
            while (st < end && !iaAlphaNumeric(s[st])) {
                st++;
            }

            while (st < end && !iaAlphaNumeric(s[end])) {
                end--;
            }

            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            st++;
            end--;
        }

        return true;
    }
};
