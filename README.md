# Cube_Scrambler

Create a simple cube scrambler game in C++11 or subsequent standard. All cubes in
the game have exactly one letter of the alphabet on each of their 6 sides. Different cubes will generally have different
patterns of letters. The purpose of the game is to form a given word of English from a group of cubes. Thus, your
program will take as input a number of cubes, each with 6 letters, and a word in the English-language alphabet. (You
may assume that the user will enter a correct English word, when prompted to do so.) The program must determine
whether the word can be formed from the given cubes, by selecting a suitable side from each cube and an appropriate
ordering of the cubes. Of course, you cannot use the same cube more than once while trying to form a given word.
For instance, given the following three cubes, {A, A, A, B, G, B}, {T, C, O, J, A, I}, and {S, D, U, G, Y, R}, you can
form the words boy, dig, so, and jar, but not the words bat or cab. You may assume that input letters could be upper
or lower case. However, the words to be formed are case insensitive. (Hint: You can convert all cube letters to one
case using masking and bit-wise logical operators and use that case consistently.)
Program input and output will be handled through the standard devices (keyboard and display) associated with
streams std::cin and std::cout. You must use recursion to implement backtracking while searching for an appropriate
arrangement of cubes to solve a given word. In addition, your code should define at least three distinct classes not
related by inheritance. The command loop in your program should respond to the following commands

1. r — Problem reset. This command allows a user to delete all the cubes and current word currently stored in
the program.
2. c — Enter new cube. This command allows interactive users to enter 6 letters that will appear on the new
cube. The program will prompt the user for the 6 letters. The format of the prompt may vary; however, the
prompt’s message should explicitly indicate how your program expects the user to enter the 6 letters (e.g., 6
prompts vs. a comma or space separated list of letters in a single line). The newly entered cube is stored in the
program and assigned a number indicating the order in which it was entered relative to other cubes (i.e., the first
cube will be number one, the second cube will be number two, and so on).
3. a — Show all cubes. Your program should display all cubes currently in the program. For each cube, the
number of the cube and the letters appearing on the cube’s sides must be displayed.
4. w — Enter new word. This widget allows interactive users to enter a new word to be solved by your cube
scrambler. The word will contain only alphabetical characters (upper and lowercase). The word is case insensitive. If another word was previously stored in the program, it will be overwritten with the new word.
5. s — Solve problem. This widget starts the task of finding an appropriate arrangement of the cubes to solve
the current problem. If the problem is solved, the program will display the cubes that make up the solution as
well as the side of each cube being used. Otherwise, the program displays a message indicating that the problem
cannot be solved.
6. q — Quit. This command quits the program.
