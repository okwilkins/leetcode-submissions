class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.strip().lower()
        s = [c for c in s if c.isalnum()]
        
        i = 0
        for i in range(len(s)):
            if (s[i] != s[len(s) - 1 - i]):
                return False
            
        return True
        