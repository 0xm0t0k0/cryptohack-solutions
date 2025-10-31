
key1 = bytes.fromhex("73626960647f6b206821204f21254f7d694f7624662065622127234f726927756d")

for i in range(256):
    attempt =  bytes(b ^ i for b in key1)
    try:
        print(attempt.decode())
    except UnicodeDecodeError:
        pass

