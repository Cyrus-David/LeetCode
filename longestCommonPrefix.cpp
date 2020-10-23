  string longestCommonPrefix(vector<string>& s) {
  if (s.empty()) return "";
  for (auto j = 0; ; ++j)
    for (auto i = 0; i < s.size(); ++i)
      if (s[i].size() < j || (i != 0 && s[i][j] != s[i - 1][j])) return s[i].substr(0, j);
}
