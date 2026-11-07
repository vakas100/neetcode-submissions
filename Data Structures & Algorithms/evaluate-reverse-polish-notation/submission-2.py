class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        result = None
        operators = ["+","-","*","/"]

        for s in tokens:
            if s not in operators:
                stack.append(s)
            else:
                b = int(stack.pop())
                a = int(stack.pop())
                if s == "+":
                    result = a+b
                    stack.append(result)
                if s == "-":
                    result = a-b
                    stack.append(result)
                if s == "*":
                    result = a*b
                    stack.append(result)
                if s == "/":
                    result = a/b
                    stack.append(result)
            
        return int(stack[0])