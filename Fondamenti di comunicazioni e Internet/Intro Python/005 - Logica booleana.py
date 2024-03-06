a = True
b = False

print("a = " , a)
print("b = " , b , "\n")

#AND logico
print("a AND b = ", end="")         #Con end="" non andiamo a capo alla fine del print
if (a and b):
    print("V")
else:
    print("F")

#OR logico
print("a OR b = ", end="")         #Con end="" non andiamo a capo alla fine del print
if (a or b):
    print("V")
else:
    print("F")

#NOT logico
print("!a = " , not(a), end="")         #Con end="" non andiamo a capo alla fine del print