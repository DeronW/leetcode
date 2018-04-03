class Solution:
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        t = [x for x in s.split(' ') if x != '']
        return len(t[-1]) if t else 0