a, b, c = map(float, input().split())

if b + c > a and a + c > b and a + b > c:
    result = a + b + c
    print("Perimetro = %.1f" % (result))
else:
    result = ((a+b)*c)/2
    print("Area = %.1f" % (result))
