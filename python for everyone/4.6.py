def computepay(h, r):
    overtime = h - 40

    if overtime <=0:
        pay = h * r
    else:
        pay = 40 * r + 1.5 * r * overtime
    return pay

hrs = input("Enter Hours:")
h = float(hrs)

rate = input("Enter Rate")
r = float(rate)

p = computepay(10, 20)
print("Pay", p)

