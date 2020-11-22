  int lengthOfLongestSubstring(string s) {
      vector<int> dict(256, -1); //storage for all ascii characters
      int start = -1, maxL = 0; 

      for (int i = 0; i < s.length(); i++) {
          if (dict[s[i]] > start) {
              start = dict[s[i]];
          }   
          dict[s[i]] = i; //updates the character's current index
          maxL = max(maxL, i - start);
      }

      return maxL;
  }
