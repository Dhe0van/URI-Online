n1, n2, n3, n4 = input().split()
n1, n2, n3, n4 = float(n1), float(n2), float(n3), float(n4)

media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / (2 + 3 + 4 + 1)

print("Media: %.1f" % (media))

if media > 7.0:
    print("Aluno aprovado.")
elif media < 5.0:
    print("Aluno reprovado.")
else:
    print("Aluno em exame.")
    exam = float(input())
    if media >= 5.0 and media <= 6.9:
        print("Nota do exame: %.1f" % (exam))
        if exam > 5.0:
            print("Aluno aprovado.")
        else:
            print("Aluno reprovado.")
        final = (media + exam) / 2
        print("Media final: %.1f" % (final))
