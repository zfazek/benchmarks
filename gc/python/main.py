class Data():
    size = 1024
    arr = []


print("Hello")
checksum = 0
for i in range(0, 1000000):
    data = Data()
    for j in range(0, data.size):
        data.arr.append(j)
        checksum += data.arr[j]
print(checksum)