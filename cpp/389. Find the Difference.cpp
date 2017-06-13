/*Given two strings s and t which consist of only lowercase letters.
String t is generated by random shuffling string s and then add one more letter at a random position.
Find the letter that was added in t.

Example:
Input:
s = "abcd"
t = "abcde"

Output: e

Explanation:
'e' is the letter that was added.*/


class Solution {
public:
    char findTheDifference(string s, string t) {
        // 我们也可以使用位操作Bit Manipulation来做，利用xor的性质，相同位返回0，这样相同的字符都抵消了，剩下的就是后加的那个字符
        // Be careful how ans is initialized
        char ans = 0;
        for (char c : s) ans ^= c;
        for (char c : t) ans ^= c;
        return ans;
        
        /*
        // 我们也可以直接用加和减，相同的字符一减一加也抵消了，剩下的就是后加的那个字符
        char ans = 0;
        // First minus each c from s, then add each c from t
        for (char c : s) ans -= c;
        for (char c : t) ans += c;
        return ans;
        */
    }
};





