inputAgeInDays = int(input())

years = inputAgeInDays // 365
months = inputAgeInDays % 365 // 30
days = inputAgeInDays % 365 % 30

print(f"{years} ano(s)")
print(f"{months} mes(es)")
print(f"{days} dia(s)")
