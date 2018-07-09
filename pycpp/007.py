def inverse(x):
    is_neg = x < 0
    if is_neg: x * -1
    y = 0
    while x > 0:
        y = y * 10 + x % 10
        x //= 10
    return -y if is_neg else y
