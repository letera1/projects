while True:
    print("Select operator:")
    num1 = float(input("enter num1:"))
    choice = input("Enter choice (+   -   *   /  ): ")

    if choice in ('+', '-', '*', '/'):
        num2=float(input("enter num2:"))

        if choice == '+':
            print(num1 ,"+", num2 ,"=" ,num1+num2)
        elif choice == '-':
            print(num1 ,"-", num2, "=" ,num1-num2)
        elif choice == '*':
            print(num1 ,"*" ,num2 ,"=" ,num1*num2)
        elif choice == '/':
            if num2 != 0:
                print(num1 ,"/", num2 ,"=" ,num1/num2)
            else:
                print("Error!!!!!!!!!! Division by zero.")
    else:
        print("unknown operator")

    s= input("Do you want to stop? (yes/no): ")
    if s == 'yes':
        break