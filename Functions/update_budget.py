def input_value(type):
    var = float(input(f"monthly {type}:\n"))
    return var

def percent(type, amount, income):
    per = (amount / income) * 100
    print(f"your {type} is {per:.0f}% of your income.")

def main():
    print("This is a budget calculator.")
    income = input_value("income")
    rent = input_value("rent")
    utilities = input_value("utilities")
    groceries = input_value("groceries")
    transportation = input_value("transportation")
    
    expenses = rent + utilities + groceries + transportation
    savings = income * 0.2
    spend = income - expenses - savings
    
    print(f"You make {income:.2f}")
    print(f"Your expenses are {expenses:.2f}")
    print(f"Your savings are {savings:.2f}")
    print(f"Your spending money is {spend:.2f}")
    
    percent("rent", rent, income)
    percent("utilities", utilities, income)
    percent("groceries", groceries, income)
    percent("transportation", transportation, income)
    percent("expenses", expenses, income)
    percent("savings", savings, income)
    percent("spending money", spend, income)

if __name__ == "__main__":
    main()

