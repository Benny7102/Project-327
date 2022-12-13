# Project-327

Team Name:
CodingForFun

Team Members:
Kenneth Byun (kbyun1@bu.edu)
Jeff Guan (jguan25@bu.edu)
Benny Li (bennyli@bu.edu)
Carson Mooc (cmooc@bu.edu)

Overview:
Enter a talltale game where your choices determine the outcome. Making the same choices won't also give the same outcome. Collected treasures along the way throughout the story and meet your goal that you set at the beganning of the story. 

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
