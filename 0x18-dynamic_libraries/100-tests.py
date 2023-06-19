import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
c= 12
cops.add.argtypes = [ctypes.py_object]
c = cops.add(a, b)
print("{} + {} = {}".format(a, b, c))
#print("{} - {} = {}".format(a, b, cops.sub(a, b)))
#print("{} x {} = {}".format(a, b, cops.mul(a, b)))
#print("{} / {} = {}".format(a, b, cops.divide(a, b)))
#print("{} % {} = {}".format(a, b, cops.mod(a, b)))
