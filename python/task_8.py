# Треугольник задан координатами своих вершин. Напишите программу вычисления периметра и площади треугольника.
def distance(x1, y1, x2, y2):
    dx = x1 - x2
    dy = y1 - y2
    return (dx**2 + dy**2)**0.5

x1 = float(input("Ведите x1: "))
y1 = float(input("Ведите y1: "))
x2 = float(input("Ведите x2: "))
y2 = float(input("Ведите y2: "))
x3 = float(input("Ведите x3: "))
y3 = float(input("Ведите y3: "))
a = distance(x1, y1, x2, y2)
b = distance(x1, y1, x3, y3)
c = distance(x2, y2, x3, y3)
P = a + b + c
p = P / 2
print("Периметр треугольника", P)
print("Площадь треугольника", (p * (p - a) * (p - b) * (p - b))**0.5)
