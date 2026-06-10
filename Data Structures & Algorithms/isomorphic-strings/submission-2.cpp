class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        std::unordered_map<char, char> sToTMap{};
        std::unordered_map<char, char> tToSMap{};

        for (size_t i{}; i < s.size(); ++i) {
            if (sToTMap.contains(s[i])) {
                if (sToTMap.at(s[i]) != t[i]) return false;
                continue;
            }
            
            if (tToSMap.contains(t[i])) {
                if (tToSMap.at(t[i]) != s[i]) return false;
                continue;
            }

            sToTMap[s[i]] = t[i];
            tToSMap[t[i]] = s[i];
        }

        return true;
    }
};