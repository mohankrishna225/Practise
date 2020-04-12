testCases = int(input())
 
for cases in range(testCases):
    varA = list(map(int, input().strip().split()))
    steps = varA[1]
    n = varA[0]
    result = 0
 
    for grid in range(n):
        lA = list(map(str, input().strip().split()))
 
        # print(lA)
        counter = 1
        i = 1
 
        if lA[0] == 'P':  # FIRST CHECK FROM LEFT SIDE
            while counter <= steps and i < len(lA):
                if lA[i] == 'T':
                    lA[0] = 'X'
                    lA[i] = 'X'
                    result = result + 1
                    break
                    pass
                i = i + 1
                counter = counter + 1
                pass
            pass
 
        if lA[len(lA) - 1] == 'P':  # FIRST CHECK FROM RIGHT SIDE
            i = len(lA) - 2
            counter = 1
            while counter <= steps and i >= 0:
                if lA[i] == 'T':
                    lA[len(lA) - 1] = 'X'
                    lA[i] = 'X'
                    result = result + 1
                    break
                    pass
                i = i - 1
                counter = counter + 1
                pass
            pass
 
        i = 1  # THEN WE CHECK BETWEEN 0 AND lan(lA)
        while i <= (len(lA) - 2):
            check = True
 
            if lA[i] == 'P':
                counter = 1
                j = i + 1
 
                while counter <= steps and j < len(lA):
                    if lA[j] == 'T':
                        lA[i] = 'X'
                        lA[j] = 'X'
                        result = result + 1
                        check = False
                        break
                        pass
                    counter = counter + 1
                    j = j + 1
                    pass
 
                if check:
                    counter = 1
                    j = i - 1
                    while counter <= steps and j >= 0:
                        if lA[j] == 'T':
                            lA[i] = 'X'
                            lA[j] = 'X'
                            result = result + 1
                            break
                            pass
                        counter = counter + 1
                        j = j - 1
                        pass
                    pass
                pass
            i = i + 1
            pass
        # print(lA)
        lA.clear()
        # print("Result at grid %d = %d" % (grid, result))
        pass
    print(result)
    pass
