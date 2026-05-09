#name = input("what is your name?")
#remove spaces from the user input starting and ending
#name = name.strip()

#capitaize the first letter the user input 
#name =name.capitalize()

#capitalize the first letter of each word of the user input 
#name = name.title()

#you can also use 
#name = name.strip().title()

#another way, to do it  better according to me, 
# remove unnecessary spaces and capitalize all the user inputs 
name = input("what is your name?").strip().title()

#spliting the users name and surname into two seperate strings - first and last 
first ,last =name.split(" ")#spliting after the space " "

print(f"Hello {first}")

