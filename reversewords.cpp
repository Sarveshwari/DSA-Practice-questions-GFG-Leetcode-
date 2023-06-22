vector < string > split(string s) {
  vector < string > words;
  bool isInside = false;
  string word = "";

  for (char c: s) {
    if (c == ' ') {
      if (isInside) {
        words.push_back(word);
        word = "";
        isInside = false;
      }
    } else {
      isInside = true;
      word += c;
    }
  }
  if (isInside)
    words.push_back(word);

  return words;
}

class Solution {
  public: string reverseWords(string s) {
    vector < string > words = split(s);

    string ans = "";

    reverse(words.begin(), words.end());

    for (int i = 0; i < words.size() - 1; i++) {
      ans += words[i];
      ans += " ";
    }
    ans += words[words.size() - 1];
    return ans;
  }
};
