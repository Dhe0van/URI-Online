a, b = map(int, input().split())

duration = ""

if a == b :
    duration = "24"
elif a < b:
    duration = b - a
elif a > b:
    duration = b - a

print(f"O JOGO DUROU {duration} HORA(S)")