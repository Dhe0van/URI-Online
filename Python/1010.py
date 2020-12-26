product1, unit1, price1 = input().split()
product1, unit1, price1 = int(product1), int(unit1), float(price1)

product2, unit2, price2 = input().split()
product2, unit2, price2 = int(product2), int(unit2), float(price2)

total = (unit1 * price1) + (unit2 * price2)

print("VALOR A PAGAR: R$ %.2f" % (total))
