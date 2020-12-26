a, b, c = input().split()
a, b, c = float(a), float(b), float(c)

luasSegitigaSiku = (a * c) / 2
luasLingkaran = 3.14159 * c**2
luasTrapesium = (a + b) * c / 2
luasPersegi = b * b
luasPersegiPanjang = a * b

print("TRIANGULO: %.3f" % (luasSegitigaSiku))
print("CIRCULO: %.3f" % (luasLingkaran))
print("TRAPEZIO: %.3f" % (luasTrapesium))
print("QUADRADO: %.3f" % (luasPersegi))
print("RETANGULO: %.3f" % (luasPersegiPanjang))
