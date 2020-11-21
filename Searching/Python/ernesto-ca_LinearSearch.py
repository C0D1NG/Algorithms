
# LINEAR SEARCHING WITH DATA STRUCTURE -- ERNESTO-CA

class Person:
   
     # instance attributes
    def __init__(self, name, id, sig):
        self.name = name
        self.id = id
        self.next = sig

counter = None
# add elements    
def addPerson(name, id):
    global counter
    newPerson = Person
    
    if (counter == None):
        newPerson = Person(name,id, None)
        counter = newPerson
        
    else:
        newPerson = Person(name,id,counter)
        counter = newPerson    

# Linear search (recursive) use "id" to find a person 
def linearSearchPerson(person, id):
    if(person != None):
        if(person.id == id):
            print("I found ", person.name)
        else:
            linearSearchPerson(person.next, id)
    else:
        print("I found nobody") 
        
# --------------TEST-------------

# add persons to the data structure (linear list)
addPerson("Ernesto", 22)
addPerson("Brenda", 21)
addPerson("Jonathan", 28)
# search for someone
linearSearchPerson(counter, 21)

