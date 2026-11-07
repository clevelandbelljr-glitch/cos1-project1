> Use this worksheet to plan the next phase of your project **before you begin coding**
> Be clear, specific, and intentional—this will guide your development this week.

---
## 📌 Project Overview

**Project Name:**
→   Sudoku Game with Checker Assistant
  
**What does your program currently do? (1–3 sentences)**   
→ My program is a C++ Sudoku game that allows players to view a puzzle, enter and change numbers, and check their progress. It checks rows, columns, and 3x3 boxes for duplicate numbers while protecting the original puzzle numbers. The game uses a menu to let players choose what they want to do.

---
## 🔍 Current Progress Check  
  
**What is working right now?**   
→   The Sudoku board displays correctly, players can enter and change numbers, and the checker validates rows, columns, and 3x3 boxes. Original puzzle numbers are protected. and the menu and input validation are working.
  
**What is NOT working or incomplete?**   
→   The game does not have a hint system or an option to erase numbers yet. Saving and loading a game is not implemented.
  
**What feels confusing or messy in your code?**   
→ I am still learning the different classes work together, especially how to organize the code and use loops, if statements, pointers, and references. I want to improve my understanding of how everything connects as the project grows.

---
## 🚀 Feature Planning  
  
List the features you plan to add or improve this week.  
  
### Feature 1  
**Name:**   
→   Improved Player input and Error handling.
  
**What does this feature do?**   
→   Allows players to enter and change their own Sudoku numbers while protecting the original puzzle numbers. It also handles incorrect input, such as entering letters instead of numbers.
  
**Why is this feature important?**   
→   It makes the game easier to use, prevents players from accidentally changing original puzzle numbers, and helps the program handle mistakes without crashing. 
  
---
### Feature 2  
**Name:**   
→   Improved Sudoku Board Display
  
**What does this feature do?**   
→  Adds clear horizontal and vertical borders to separate the Sudoku board into nine 3x3 sections, making the board easier to read.  

  
**Why is this feature important?**   
→   It improves the appearance of the game and helps players the different sections of the Sudoku puzzle more easily.
  
---
  
### Feature 3 (optional)  
**Name:**   
→   
  
**What does this feature do?**   
→   
  
**Why is this feature important?**   
→   
  
---
## 🧩 System Design Updates  
  
**Will you need to create any new classes? If so, which ones?**   
→ I do not need to create a new class for the improvements completed this week. My existing three classes are handling the current features. 
  
**Will you modify any existing classes? How?**   
→   I modified the SudokuChecker class to allow players to change their own entries while still checking for duplicate numbers. I also improved the SudokuBoard class to display clearer borders around the 3x3 sections.
  
**What data structures will you use (vectors, 2D vectors, etc.)?**   
→   I am continuing to use 2D vectors. The SudokuBoard uses vector<vector<int to store the Sudoku numbers, and SudokuPuzzle uses the vector vector bool to track the original puzzle numbers.
  
---
## 🔄 Program Flow  
  
**Describe how a user interacts with your program:**  
  
1. Program starts →   The game loads the Sudoku puzzle and displays the welcome message and instructions.
2. User chooses →   The player selects an option from the menu: view the board, enter or change a number, check puzzle status, or exit.
3. Program responds →   The game displays the board, checks the player's move for valid Sudoku rules, or reports whether the puzzle is complete.
4. Loop/next step →   The menu appears again so the player can continue playing until they choose to exit.
  
---
## 🎯 Usability Improvements  
  
How will you make your program easier to use this week?  
  
- Clearer prompts:   
→   Added welcome instructions and reminders to help players understand how to enter numbers and play the game.
  
- Better error handling:   
→   Improved input validation so the program handles letters and invalid entries without getting stuck.
  
- Improved menu/navigation:   
→   Updated menu descriptions to make the options easier to understand and navigate.
  
---
## ⚠️ Potential Challenges  
  
**What do you think will be the hardest part this week?**   
→   The hardest part will be understanding how to add new features while keeping my existing code organized and making sure all my classes work together correctly.
  
**What is your plan if you get stuck?**   
→   I plan to take things one step at a time, review my class notes and examples, test my code frequently, and ask questions when I need help understanding something.
  
---
  
## 📈 Level Up Goal  
  
**What skill are you focusing on improving this week?**   
→   I want to improve my understanding of C++ loops, if statements, and debugging.
  
**What will you do to improve it?**   
(e.g., tutorial, practice, debugging, office hours)   
→   I plan to practice writing loops and if statements, review class materials, test my code frequently, and ask questions when I don't understand something. I want to become more confident writing code without always needing help.
  
---
## 🗓️ Task Breakdown (GitHub Issues Planning)  
  
List the tasks you plan to create as GitHub Issues:  
  
- [ ]   Add a Sudoku Hint System.
- [ ]   Add an option to erase player entered numbers.
- [ ]   Add a Sudoku Puzzle tracking progress.
- [ ]   Begin implementing Save and Load Game Functionality.
  
---
  
## 🔥 Final Check  
  
Before you start coding, ask yourself:  
  
- [ ] Do I know what I’m building this week?   
- [ ] Do I know where to start?   
- [ ] Did I break my work into small tasks?   
  
If yes → start coding 🚀   
If no → refine your plan first   
  
---
## 😈 Final Thought  
  
> Plan it now… or debug it later.