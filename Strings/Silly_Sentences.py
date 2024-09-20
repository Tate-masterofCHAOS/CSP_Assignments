import sys

def main():
    animal = input("Name an animal: ")
    place = input("Name a place: ")
    verb = input("Name a past tense verb: ")
    
    sentence = "The " + animal.strip() + " went to the " + place.strip() + " and " + verb.strip() + " with his friend the angry turtle"
    print(sentence)

if __name__ == "__main__":
    main()

