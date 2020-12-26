sellerName = input()
fixedSalary = float(input())
totalSellByHim = float(input())

fifteenPercentTotal = (15/100 * totalSellByHim)
TOTAL = float(fixedSalary + fifteenPercentTotal)


print("TOTAL = R$ %.2f" % (TOTAL))
