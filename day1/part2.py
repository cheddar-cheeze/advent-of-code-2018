#! /bin/python3
array = set([0])
a = 0
f = open('./input', 'r')
text = f.read().strip().split()
f.close()
e = True
while e:
    for num in text:
            a += int(num)
            if a in array:
                print("number is {}".format(a))
                return
            array.add(a)
            print(a)
