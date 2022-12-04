# Даны х, у, г. Напишите программу, вычисляющую а, Ь
import math

x = float(input("Ведите x: "))
y = float(input("Ведите y: "))
z = float(input("Ведите z: "))

print("a =", y + x / (y**2 + abs(x**2 / (y + x**3 / 3))))
print("b =", math.log1p(abs(y - (abs(x))**0.5) *(x - y / (z + x**2 / 4))))
