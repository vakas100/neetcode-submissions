class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        operators = {"+","-","*","/"}

        for s in tokens:
            if s not in operators:
                stack.append(s)
            else:
                b = int(stack.pop())
                a = int(stack.pop())
                if s == "+":
                    stack.append(a+b)
                if s == "-":
                    stack.append(a-b)
                if s == "*":
                    stack.append(a*b)
                if s == "/":
                    stack.append(int(a/b))
            
        return int(stack[0])