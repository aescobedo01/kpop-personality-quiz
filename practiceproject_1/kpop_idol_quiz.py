import time

def timeCounter(tim = 0.25, text = ''):
    for x in text:
        time.sleep(tim)
        print(x, end='')
    print()

##may remove
class Question:
    def __init__(self, questionText, multipleChoiceOptions=None):
        self.questionText = questionText
        self.multipleChoiceOptions = multipleChoiceOptions

        def __repr__(self):
            return '{'+ self.questionText +', '+ str(self.multipleChoiceOptions) + '}'
##  

def quizQuestion(prompt, ans1, ans2, ans3, ans4, ans5):
    timeCounter(0.15, prompt)
    options = f"{ans1}\n{ans2}\n{ans3}\n{ans4}\n{ans5}"
    timeCounter(0.1, options)
    timeCounter(0.1, 'Please write the number: ')
    while True:
        try:
            ans = int(input())
            return ans
        except ValueError:
            print('Invalid response, try again:')

counter = 0
check = True
hyejuRange = range(1,11) 
#[1,2,3,4,5,6,7,8,9,10]
hyunjinRange = range(11, 21)
#[11,12,13,14,15,16,17,18,19,20]
gowonRange= range(21, 31)
#[21,22,23,24,25,26,27,28,29,30]
viviRange = range(31, 41)
#[31,32,33,34,35,36,37,38,39,40]
yeojinRange = range(41, 51)
#[41,42,43,44,45,46,47,48,49,50]

timeCounter(0.05, "Welcome to the quiz! Which member of LOOSSEMBLE are you?")

timeCounter(0.05, "This quiz will tell you which member of LOOSSEMBLE you are based on your answers.\nAre you ready?")

'''quizQuestion('What is your favorite LOONA song?', '1. Paint The Town', '2. Hi High', '3. Curiosity', '4. Valentine Girl', '5. Satellite')

quizQuestion('What do you enjoy doing in your free time?', '1. Play video games', '2. Exercising', '3. Writing in your diary', '4. Traveling', '5. Sleeping')

quizQuestion('What do you hate the most?', '1. Greeting people', '2. People touching your bed', '3. Bugs', '4. Too hot/cold weather', '5. Waking up in the morning')

quizQuestion('Which food would you prefer?', '1. Meringue cookies', '2. Pickled squid', '3. Tteokbokki', '4. Bibimbap', '5. Watermelon')

quizQuestion('Who is your favorite member of LOOSSEMBLE?', '1. Gowon', '2. Vivi', '3. Yeojin', '4. Hyunjin', '5. Hyeju')

quizQuestion('What is your favorite flower?', '1. Lobelia', '2. Forget-me-not', '3. Plum blossom', '4. Gerbera', '5. Daisy')'''

##may remove
#quizQuestion 
questions = [
Question("What is your favorite LOONA song?", ["1. Paint The Town", "2. Hi High", "3. Curiosity", "4. Valentine Girl", "5. Satellite"]),

Question("What do you enjoy doing in your free time?", ["1. Play video games", "2. Exercising", "3. Writing in your diary", "4. Traveling", "5. Sleeping"]),

Question("What do you hate the most?", ["1. Greeting people", "2. People touching your bed", "3. Bugs", "4. Too hot/cold weather", "5. Waking up in the morning"]),

Question("Which food would you prefer?", ["1. Meringue cookies", "2. Pickled squid", "3. Tteokbokki", "4. Bibimbap", "5. Watermelon"]),

Question("Who is your favorite member of LOOSSEMBLE?", ["1. Gowon", "2. Vivi", "3. Yeojin", "4. Hyunjin", "5. Hyeju"]),

Question("What is your favorite flower?", ["1. Lobelia", "2. Forget-me-not", "3. Plum blossom", "4. Gerbera", "5. Daisy"]),
]

'''for question in quizQuestion:
    if (question.multipleChoiceOptions != None):
        print(f"{question.questionText}?")
        for option in question.multipleChoiceOptions:
            print(option)
            userInput = input()
        else:
            print(f"{question.questionText}?")
            userInput = input()'''

for question in questions:
    counter += quizQuestion(question.questionText,
*question.multipleChoiceOptions)
######

print("You are ", end='')

while check == True:
    if counter in hyejuRange:
            print('Hyeju')
            print('You are most like hyeju bc yasdasdudadhadvajd yada yada.')
            check = False
    elif counter in hyunjinRange:
            print('Hyunjin')
            print('Wow lorem ipsum yada')
            check = False
    elif counter in gowonRange:
            print('Gowon')
            print('somehting about gowon here')
            check = False
    elif counter in viviRange:
            print('Vivi')
            print('lorem ipsum vivi')
            check = False
    elif counter in yeojinRange:
            print('Yeojin')
            print('something here')
            check = False

'''while check == True:
    for b in hyejuRange:
        if b == counter:
            print('Hyeju')
            print('You are most like hyeju bc yasdasdudadhadvajd yada yada. ')
            check = False
    for a in hyunjinRange:
        if a == counter:
            print('Hyunjin')
            print('Wow lorem ipsum yada')
            check = False
    for d in gowonRange:
        if d == counter:
            print('Gowon')
            print('somehting about gowon here')
            check = False
    for i in viviRange:
        if i == counter:
            print('Vivi')
            print('lorem ipsum vivi')
            check = False
    for e in yeojinRange:
        if e == counter:
            print('Yeojin')
            print('something here')
            check = False
            '''