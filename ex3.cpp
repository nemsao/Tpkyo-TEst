def is_balanced_string(s):
    stack = []
    opening_brackets = {'{', '[', '('}
    closing_brackets = {'}', ']', ')'}
    bracket_pairs = {'{': '}', '[': ']', '(': ')'}

    for char in s:
        if char in opening_brackets:
            stack.append(char)
        elif char in closing_brackets:
            if not stack:
                return False
            top = stack.pop()
            if bracket_pairs[top] != char:
                return False
    
    return len(stack) == 0


# Đọc số lượng test case
N = int(input())

# Đọc và kiểm tra từng test case
for _ in range(N):
    test_case = input().strip()
    is_balanced = is_balanced_string(test_case)
    print(is_balanced)