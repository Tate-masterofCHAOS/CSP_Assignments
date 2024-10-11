usr = int(input("Give me a number: "))
one = input("Give me a short word: \n")
two = input("Give me another short word: \n")
three = one + two

for i in range(usr + 1):
    if i % 3 == 0 and i % 5 == 0:
        print(three)
    elif i % 3 == 0:
        print(one)
    elif i % 5 == 0:
        print(two)
    else:
        print(i)

