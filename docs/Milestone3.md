Milestone 3 - Development and Refactoring

- ⚙️ Features added
	Tested Save and Load functionality.
	Improved puzzle reset and player number editing.
	Tested conflict detection and puzzle completion.
	Verified input validation and original number protection.

- 🧱 Updates to your system design
	Continued using three separate classes:
	SudokuBoard: Stores and displays the board.
	SudokuChecker: Checks moves and puzzle completion.
	SudokuPuzzle: Creates puzzles and handles saving and loading.

- 🧹 Refactoring improvements
	I refactored the createPuzzle() function in SudokuPuzzle.cpp. I used a temporary variable called number to select the puzzle value before updating the board and identifying original clues. This removed repeated code and made the function easier to read.
	I also improved the save function so it checks whether writing to the file was successful.

- 💭 What you changed and why
	I made these changes to improve code organization, readability, and reliability. I also tested the main 
	game features to make sure everything worked correctly.

Testing and Improvements
	Tested Sudoku puzzle completion detection.
	Tested duplicate number detection in rows, columns, and 3x3 boxes.
	Tested invalid letter input.
	Tested invalid row, column, and number ranges.
	Tested entering and erasing player numbers.
	Tested that original puzzle clues remain protected.
	Tested the Reset feature.
	Tested saving and loading a game.
	Tested the menu options and game flow.
	Captured screenshots of program features and test results.
	Removed temporary testing code after testing.
	Rebuilt the project successfully after cleanup.
	Refactored the createPuzzle() function to reduce repeated code when loading puzzle values and identifying original clues.
	Tested both Sudoku puzzles after refactoring to confirm they still display correctly.