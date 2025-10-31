from itertools import cycle

key1 = bytes.fromhex("0e0b213f26041e480b26217f27342e175d0e070a3c5b103e2526217f27342e175d0e077e263451150104")
key2 = bytes.fromhex("0e0b213f26041e")
result = b"crypto{"



key_fragment = bytes(a^b for a , b in zip(key2, result))

print(type(key_fragment), key_fragment)

key = b"myXORkey"

last = bytes(x ^ y for x , y in zip(key1, cycle(key)))

print(type(last), last)