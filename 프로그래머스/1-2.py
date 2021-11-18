def solution(skill, skill_trees):
    answer = 0
    for x in skill_trees:
        # print(x)
        for t in x:
            if t not in skill:
                x = x.replace(t, "")
        # print('after:',x)  
        if x in skill and skill.find(x) == 0:
            answer += 1

    return answer