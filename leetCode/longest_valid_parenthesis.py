s = ")()())"

def longestValidParentheses(s) :
        stack = [-1]
        l = 0
        for i,p in enumerate(s) :
            if p == ")" :
                stack.pop()
                if len(stack) == 0 :
                    stack.append(i)
                else :
                    l = max(l , i - stack[-1])
                    
            elif p == "(" :
                stack.append(i)
                
        return l
print(longestValidParentheses(s))