
class Solution:
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        
        CODES = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]

        r = set()

        for word in words:
            t = ''
            for i in word:
                t += CODES[ord(i)-97]
            r.add(t)

        return len(r)

if __name__ == '__main__':
    r = Solution().uniqueMorseRepresentations(["gin", "zen", "gig", "msg"])
    print(r)