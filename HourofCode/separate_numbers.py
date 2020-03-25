def validate(s, first):
    while s:
        print(s,"   ",first)
        if s.startswith(first):
            s = s[len(first):]
            print(s)
            first = str(int(first) + 1)
            print(first)
        else:
            return False
    return True

def separateNumbers(s):
    if s[0] == '0' and len(s) > 1:
        return "NO"
    else:
        for ind in range(1, len(s)//2 + 1):
            first = s[:ind]
            print(first)
            if validate(str(s), first):
                return "YES " + first
    return "NO"
            

testcases = int(input().strip())
for tc in range(testcases):
    s = input().strip()
    print(separateNumbers(s))

