# phone_book={}
# phone_book['Me']= 20
# phone_book['Basma'] ="present"

# vlaue = phone_book.get("Basma")
# print(vlaue)

voted = {}
def check_vote(name):
    if voted.get(name):
    print("Kick them out!")
else:
voted[name] = True
print("let them vote")