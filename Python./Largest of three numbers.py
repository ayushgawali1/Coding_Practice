no_1 = int(input("Enter the No-1 : "))
no_2 = int(input("Enter the NO-2 : "))
no_3 = int(input("Enter the NO-3 : "))

if no_1 > no_2 and no_1 > no_3:
    print("No-1 is the Largest.")
elif no_2 > no_1 and no_2 > no_3:
    print("No-2 is the Largest.")
elif no_3 > no_2 and no_3 > no_1:
    print("No-3 is the Largest.")
elif no_1 == no_2 == no_3 :
    print("All are equal")
else :
    print("Error")
