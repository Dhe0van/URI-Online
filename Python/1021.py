# 100, 50, 20, 10, 5, 2, 1
# 1.00, 0.50, 0,25, 0.10, 0.05, 0.01

nota = float(input())

print("NOTAS:")
print("%d nota(s) de R$ 100.00" % (nota//100))
nota %= 100
print("%d nota(s) de R$ 50.00" % (nota//50))
nota %= 50
print("%d nota(s) de R$ 20.00" % (nota//20))
nota %= 20
print("%d nota(s) de R$ 10.00" % (nota//10))
nota %= 10
print("%d nota(s) de R$ 5.00" % (nota//5))
nota %= 5
print("%d nota(s) de R$ 2.00" % (nota//2))
nota %= 2

print("MOEDAS:")
print("%d moeda(s) de R$ 1.00" % (nota//1))
nota %= 1
print("%d moeda(s) de R$ 0.50" % (nota//0.50))
nota %= 0.50
print("%d moeda(s) de R$ 0.25" % (nota//0.25))
nota %= 0.25
print("%d moeda(s) de R$ 0.10" % (nota//0.10))
nota %= 0.10
print("%d moeda(s) de R$ 0.05" % (nota//0.05))
nota %= 0.05
print("%d moeda(s) de R$ 0.01" % (nota//0.01))
nota %= 0.01
