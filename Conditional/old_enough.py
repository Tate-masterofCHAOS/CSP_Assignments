character_input = input("Inset your age: ")
age = int(character_input)
if age >= 18:
    print("wow you can drive go to college and vote now")
elif age >= 16:
    print("your old enough to go to school and drive alone")
elif age >= 15:
    print("your old enough to go to school and drive as long as there is a registered adult in the car with you")
elif age >= 5:
    print("your old enough to go to school")
else:
    print("get off the keyboard you toddler")