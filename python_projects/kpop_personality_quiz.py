import time

#simulate typing effect by printing out characters consecutively with a slight delay
def timeCounter(tim = 0.25, text = ''):
    for x in text:
        time.sleep(tim)
        print(x, end='')
    print()

#class to store information about quiz questions
class Question:
    def __init__(self, questionText, multipleChoiceOptions=None):
        self.questionText = questionText
        self.multipleChoiceOptions = multipleChoiceOptions

        def __repr__(self):
            return '{'+ self.questionText +', '+ str(self.multipleChoiceOptions) + '}'

#function that displays a quiz question and multiple choice options then get user input
def quizQuestion(prompt, ans1, ans2, ans3, ans4, ans5):
    timeCounter(0.15, prompt)
    options = f"{ans1}\n{ans2}\n{ans3}\n{ans4}\n{ans5}"
    print(options)
    timeCounter(0.1, 'Please choose a number: ')
    while True:
        try:
            ans = int(input())
            return ans
        except ValueError:
            print('Invalid response, try again:')

##initialize variables to keep track of score
counter = 0
check = True

#range of values that determine which member you are based on your score
hyejuRange = range(1,11) 
hyunjinRange = range(11, 21)
gowonRange= range(21, 31)
viviRange = range(31, 41)
yeojinRange = range(41, 51)

#describe the purpose of the quiz
timeCounter(0.05, "Welcome to the quiz! Which member of LOOSSEMBLE are you most like?")

timeCounter(0.05, "This quiz will tell you which member of LOOSSEMBLE you are most like based on your answers.\nNow let's get started!")
 
#array of question objects to store the question text that displays to the user
questions = [
Question("What is your favorite LOONA song?", ["1. Paint The Town", "2. Hi High", "3. Curiosity", "4. Valentine Girl", "5. Satellite"]),

Question("What do you enjoy doing in your free time?", ["1. Play video games", "2. Exercising", "3. Writing in your diary", "4. Traveling", "5. Sleeping"]),

Question("What do you hate the most?", ["1. Greeting people", "2. People touching your bed", "3. Bugs", "4. Too hot/cold weather", "5. Waking up in the morning"]),

Question("Which food would you prefer?", ["1. Meringue cookies", "2. Pickled squid", "3. Tteokbokki", "4. Bibimbap", "5. Watermelon"]),

Question("Who is your favorite member of LOOSSEMBLE?", ["1. Gowon", "2. Vivi", "3. Yeojin", "4. Hyunjin", "5. Hyeju"]),

Question("What is your favorite flower?", ["1. Lobelia", "2. Forget-me-not", "3. Plum blossom", "4. Gerbera", "5. Daisy"]),
]

##for loop to iterate over the questions array. display multiple-choice options after the question and before fetching the user's input.
for question in questions:
    counter += quizQuestion(question.questionText,
*question.multipleChoiceOptions)

##print result based on score
print("You are most like ", end='')

while check == True:
    if counter in hyejuRange:
            print('Hyeju')
            print('You and Hyeju both love to relax in your room, playing video games, and eating desserts such as merengue cookies and chocolate cake. You are hard-working, level-headed, and hanging out with your friends makes you the happiest.')
            check = False
    elif counter in hyunjinRange:
            print('Hyunjin')
            print('You and Hyunjin both love eating bread, spicy pickled food, and exercising. You always make people around you laugh and are very outgoing!')
            check = False
    elif counter in gowonRange:
            print('Gowon')
            print('You and Gowon both love to relax, write in your diary, and go out for tteokbokki. You are a bit shy and sometimes keep to yourself, but that does not stop you from lighting up the room with your bright personality!')
            check = False
    elif counter in viviRange:
            print('Vivi')
            print('You and Vivi both love to travel, eat bibimbap, and hate extreme weather. You are funny and down-to-earth and everyone loves to be around you. You are welcoming and everyone around you feels comfortable with you.')
            check = False
    elif counter in yeojinRange:
            print('Yeojin')
            print('You and Yeojin both love to sleep in, eat watermelon on a hot summer day, and love fashion. You are loud, outgoing, and have a bold and fearless personality.')
            check = False
