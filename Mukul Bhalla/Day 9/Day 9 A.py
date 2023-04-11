class Solution:
    def reverse(self, x: int) -> int:
        x = list(str(x))
        x.reverse()
        if x[-1] == '-':
            x = [x[-1]] + x
            x.pop(-1)
        x = "".join(x)
        if -2**31 <= int(x) <= ((2**31)-1):
            return int(x)
        else:
            return 0
