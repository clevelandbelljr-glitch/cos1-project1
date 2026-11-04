Sudoku Game with Checker Assistant

Prototype Design - Week 2

1. Class Design
The program currently uses three main classes beyond main().

SudokuBoard
	Creates and manages the 9x9 Sudoku board.
	Displays the board with clear 3x3 section borders.
	Allows numbers to be placed into individual cells.
	Retrieves numbers from the board.

SudokuChecker
	Checks whether a player's move is valid.
	Checks rows, columns, and 3x3 sections for duplicate numbers.
	Determines whether the Sudoku board has been completed correctly.
	Allows players to correct their own entries without creating duplicates.

2. Data Structures
The program uses two-dimensional vectors to manage the Sudoku board and orignal puzzle clues.

SudokuBoard
	Uses vector<vector<bool>> to track orignal puzzle cells.
	True identifies an original number that cannot be changed.
	False identifies an empty cell where the player can enter a number.

The main program also tracks:
	Menu selection.
	Row and colun selected by the player.
	Number entered by the player.

3. Program Flow
																						
 1.The program starts in main().
 2.	The Sudoku board, checker, and puzzle objects are created.
 3.	The starting puzzle is loaded onto the board.
 4.	Welcome instructions and the game menu are displayed.
 5.	The player selects an option.
 6.	The program responds to the selection:
      Display the Sudoku board.
	  Enter or change a number.
	  Check puzzle completion.
	  Exit the game.
 7. When a player enters a number, the program validates the input and checks Sudoku rules.
 8. If the move is valid, the board is updated.
 9. The menu repeats until the player selects Exit.
 10. The program ends with a closing message.

4. User interaction
	
The player can:
	View the Sudoku board.
	Enter numbers into empty spaces.
	Correct numbers they previously entered.
	Check whether the puzzle is complete. 
	Exit the game.

The program provides feedback when:
	A move is accepted.
	A move violates Sudoku rules.
	A player attempts to change an original puzzle number.
	A player enters letters instead of numbers.
	The player enters a value outside the allowed range.

Future Improvements

Planned features for continued development include:
	A hint system.
	An option to erase player-entered numbers.
	Puzzle progress tracking.
	Saving and loading games.
	Improved colors and visual presentation.

Prototype Goal

The goal of this project is to create an interactive Sudoku game in C++ that allows players 
to solve puzzles while receiving assistance with checking their moves. The project uses 
separate classes, vectors, input validation, and a menu-driven program structure.