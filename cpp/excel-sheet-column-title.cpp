//https://leetcode.com/problems/excel-sheet-column-title/

class Solution {
public:

   string convertToTitle(int n) {
      string result;
      while (n > 0)
      {
         int i = n % 26;
         if (!i) { i = 26; n = int(n / 26) -1; }
         else n = int(n / 26);
         result = char(64 + i) + result;
         
      }
      return result;
   }
};
