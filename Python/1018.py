# 100, 50, 20, 10, 5, 2, 1

nota = int(input())

print(nota)
print("%d nota(s) de R$ 100,00" % (nota/100))
nota %= 100
print("%d nota(s) de R$ 50,00" % (nota/50))
nota %= 50
print("%d nota(s) de R$ 20,00" % (nota/20))
nota %= 20
print("%d nota(s) de R$ 10,00" % (nota/10))
nota %= 10
print("%d nota(s) de R$ 5,00" % (nota/5))
nota %= 5
print("%d nota(s) de R$ 2,00" % (nota/2))
nota %= 2
print("%d nota(s) de R$ 1,00" % (nota/1))
nota %= 1
