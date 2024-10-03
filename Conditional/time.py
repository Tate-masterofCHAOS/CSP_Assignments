import datetime

current_time = datetime.datetime.now()
print(current_time.hour)
time_input = input("Please input time of day in military time: ")
time = int(time_input)

if time < 12:
    print("Good Morning")
elif time < 18:
    print("Good Afternoon")
else:
    print("Good Evening")