class Solution:
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        l = len(s)

        point1 = 0
        point2 = 0

        full_len = 2 * l - 1
        half = int(full_len / 2)
        arr = [half]
        for i in range(1, arr[0]):
            arr.append(half - i)
            arr.append(half + i)

        # i = 1
        # while i <= 2 * l - 3:
        for i in arr:

            flag = False

            if i % 2:
                p1, p2 = int((i - 1) / 2), int((i + 1) / 2)
            else:
                p1, p2 = int(i / 2), int(i / 2)

            if s[p1] == s[p2]:
                flag = True

                while p1 > 0 and p2 < l - 1 and s[p1 - 1] == s[p2 + 1]:
                    p1 -= 1
                    p2 += 1

            if flag and p2 - p1 > point2 - point1:
                point1, point2 = p1, p2

                if point2 - point1 >= min(i, full_len - i) * 2 - 1:
                    break

            i += 1

        return s[point1:point2 + 1]


if __name__ == '__main__':

    s = "321012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210012321001232100123210123210012321001232100123210123"

    r = Solution().longestPalindrome(s)
    print(r)
