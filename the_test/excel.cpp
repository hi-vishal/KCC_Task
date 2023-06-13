class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(char str: columnTitle){
            int num = str - 'A' + 1;
            ans = (ans*26) + num;
        }return ans;
    }
};
