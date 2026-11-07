class MinStack:

    def __init__(self):
        self.stack = []
        self.minstack = []

    def push(self, val: int) -> None:
        self.stack.append(val)
        self.minstack.append(val)
        self.minstack.sort()

    def pop(self) -> None:
        popped = self.stack.pop()
        self.minstack.remove(popped)

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.minstack[0]
        
