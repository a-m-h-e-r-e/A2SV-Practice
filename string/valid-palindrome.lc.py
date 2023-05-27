class Solution(object):
    def isPalindrome(self, s):
        pal = ''.join(c for c in s if c.isalnum())  
        pal = pal.lower()
        for i in range(si // 2):
            if pal[i] != pal[si - i - 1]:
                return False
        return True


