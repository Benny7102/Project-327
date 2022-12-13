# Project-327

Team Name:
CodingForFun

Team Members:
Kenneth Byun (kbyun1@bu.edu)
Jeff Guan (jguan25@bu.edu)
Benny Li (bennyli@bu.edu)
Carson Mooc (cmooc@bu.edu)

Overview:
Enter a dungeon crawler game in which you collect gold and defeat enemies along the way. Increase your strength by purchasing different items to defend yourself from enemies. Explore new locations that open new doors and create more opportunities to find new things. Gather enough treasure in your journey to win the game! 

How to compile the game:
In order to play our game, it must first be compiled so make sure your computer has a properly functioning compiler. In the terminal, you must navigate to the folder Project-327. Once you're inside, type in the following in the terminal:

g++ -c main.cpp

g++ -c mc.cpp

g++ -c enemy.cpp

g++ -c Minotaur.cpp

g++ -c Ghost.cpp

g++ -c Skull.cpp

g++ -c Rogueknight.cpp

g++ -c RuinedCity.cpp

g++ -c Bridge.cpp

g++ -c Cave.cpp

g++ -c options.cpp

g++ -o main main.o mc.o enemy.o Minotaur.o Ghost.o Skull.o Rogueknight.o RuinedCity.o Bridge.o Cave.o options.o

./main
