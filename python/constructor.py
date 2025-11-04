class Bank:
    def __init__(self, name, age, accNo, accType, balance):
        self.name = name
        self.age = age
        self.accNo = accNo
        self.accType = accType
        self.balance = balance

    def deposit(self):
        damo = int(input("Enter the deposit amount: "))
        if damo < 0:
            print("Enter a valid amount")
        else:
            self.balance += damo
            print("Amount deposited successfully!")
        return self.balance

    def withdraw(self):
        wamo = int(input("Enter the withdrawal amount: "))
        if wamo < 0 or wamo > self.balance:
            print("Insufficient balance")
        else:
            self.balance -= wamo
            print("Amount withdrawn successfully!")
        return self.balance

    def display(self):
        print("\nAccount Details:")
        print("Account Holder:", self.name)
        print("Age:", self.age)
        print("Account No:", self.accNo)
        print("Account Type:", self.accType)
        print("Balance:", self.balance)

        # Perform deposit and withdrawal operations
        self.deposit()
        print("New balance after deposit =", self.balance)
        self.withdraw()
        print("New balance after withdrawal =", self.balance)


# Creating account objects
account1 = Bank("Vrinda", 22, "000000002121", "Savings", 6000)
account1.display()

account2 = Bank("Anu", 22, "000000002126", "Savings", 8000)
account2.display()
