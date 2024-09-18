income = float(input("This is a budget calculator. How much do you make a month?\n"))
rent = float(input("How much does your rent cost?\n"))
utilities = float(input("How much does your utilities cost?\n"))
groceries = float(input("How much do your groceries cost?\n"))
transportation = float(input("How much does your transportation cost?\n"))

expenses = rent + utilities + groceries + transportation
savings = income * 0.2
spend = income - expenses - savings

print(f"You make {income:.2f}")
print(f"Your expenses are {expenses:.2f}")
print(f"Your savings are {savings:.2f}")
print(f"Your spending money is {spend:.2f}")

prent = (rent / income) * 100
putilities = (utilities / income) * 100
ptransportation = (transportation / income) * 100
psavings = (savings / income) * 100
pexpenses = (expenses / income) * 100

print(f"Your rent is {int(prent)}% of your income.")
print(f"Your utilities is {int(putilities)}% of your income.")
print(f"Your transportation is {int(ptransportation)}% of your income.")

