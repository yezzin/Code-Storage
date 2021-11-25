def solution(nums):
    answer = 0
    
    n1 = 0
    n2 = 1
    n3 = 2
    while n1 < len(nums) - 2:
        s = nums[n1] + nums[n2] + nums[n3]
        ch = False
        for i in range(2,s):
            if s % i == 0:
                ch = True
                break
        if ch == False:
            answer += 1
        
        if n3 != len(nums) - 1:
            n3 += 1
        else:
            if n2 != len(nums) - 2:
                n2 += 1
                n3 = n2 + 1
            else:
                n1 += 1
                n2 = n1 + 1
                n3 = n2 + 1

    return answer