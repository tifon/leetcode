class Solution {
public:
   int climbStairs(int n) {
      map<int, int> map;
      return climbStairsDP(n, map);
   }

   int climbStairsDP(int n, map<int, int>& map) {
      if (n < 0) return 0;
      else if (n == 0) return 1;
      else if (map[n] > 0) return map[n];
      else
      {
         map[n] = climbStairsDP(n - 1, map) + climbStairsDP(n - 2, map);
         return map[n];
      }
   }

};
