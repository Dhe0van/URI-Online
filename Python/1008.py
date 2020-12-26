number = int(input())
workHoursInMonth = float(input())
salaryPerHour = float(input())

salary = (workHoursInMonth / 30) * salaryPerHour * 30

print("NUMBER = %i \nSALARY = U$ %.2f" % (number, salary))
