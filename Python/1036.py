# bhaskara formula atau rumus ABC
from math import sqrt
a, b, c = input().split()
a, b, c = float(a), float(b), float(c)

diskriminan = sqrt((b**2) - (4*a*c))

try:
    bhaskara1 = (-b + diskriminan) / 2*a
    bhaskara2 = (-b - diskriminan) / 2*a
    print("R1 = %.5f" % (bhaskara1))
    print("R2 = %.5f" % (bhaskara2))
except ZeroDivisionError or diskriminan < 1 :
    print("Impossivel calcular")
