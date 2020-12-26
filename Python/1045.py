a, b, c = map(float, input().split())

myList = a, b, c
myList = list(myList)
myList.sort(reverse=True)

a = myList[0]
b = myList[1]
c = myList[2]

if a >= b + c:
    print("NAO FORMA TRIANGULO")
elif a**2 == b**2 + c**2:
    print("TRIANGULO RETANGULO")
elif a**2 > b**2 + c**2:
    print("TRIANGULO OBTUSANGULO")
    if a == b == c:
        print("TRIANGULO EQUILATERO")
    elif a == b != c or a == c != b or b == c != a:
        print("TRIANGULO ISOSCELES")

else:
    print("TRIANGULO ACUTANGULO")
    if a == b == c:
        print("TRIANGULO EQUILATERO")
    elif a == b != c or a == c != b or b == c != a:
        print("TRIANGULO ISOSCELES")
