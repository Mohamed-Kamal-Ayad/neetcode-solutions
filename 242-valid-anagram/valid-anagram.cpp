class Solution {
public:
    bool isAnagram(string s, string t) {
            if (s.size() != t.size()) return false;

            unordered_map<char, int> smap;
            unordered_map<char, int> tmap;

            for (int i = 0; i < s.size(); i++) {
                smap[s[i]]++;
                tmap[t[i]]++;
            }

            for (auto c : smap) {
                if (tmap[c.first] != c.second) return false;
            }
            return true;
    }
};