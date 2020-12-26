a,b,c = map(int,input().split())

# Menyatukan ketiga variabel menjadi satu
ascend = a,b,c
# Ubah dulu jadi list
ascend = list(ascend)
# Ini yang urutan normal seperti semula tidak di urutkan
normal = ascend
# Proses untuk mengurutkan
ascend = sorted(ascend)

print(f"{ascend[0]}\n{ascend[1]}\n{ascend[2]}\n")
print(f"{normal[0]}\n{normal[1]}\n{normal[2]}")