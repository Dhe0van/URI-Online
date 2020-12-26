inputSeconds = int(input())

hours = inputSeconds // 3600
minutes = inputSeconds % 3600 // 60
seconds = inputSeconds % 3600 % 60

print(f"{hours}:{minutes}:{seconds}")
