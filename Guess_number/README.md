# Number Guessing Game 🎲

## 📌 Introduction
The **Number Guessing Game** is a simple console-based C program where the user tries to guess a randomly generated number within **5 attempts**.

---

## 🚀 Features
- **Random number generation** between **1 and 100**.
- **Limited attempts** (5 chances to guess correctly).
- **User-friendly hints** (higher/lower suggestions).
- **Win/Lose messages** based on user performance.

---

## 🛠️ Installation & Usage
### 1️⃣ **Compile the Program**
```sh
gcc number_guessing_game.c -o number_guessing_game
```

### 2️⃣ **Run the Program**
```sh
./number_guessing_game
```

### 3️⃣ **Game Instructions**
- The program will generate a random number between **1 and 100**.
- You have **5 attempts** to guess the correct number.
- After each incorrect guess, you will get a hint:
  - "Guess a higher number" if your guess is too low.
  - "Guess a lower number" if your guess is too high.
- If you guess correctly, you win!
- If you use all 5 attempts without guessing correctly, the correct number will be revealed.

---

## 📜 Code Overview
The program is structured as follows:
- **Random number generation** using `rand()`.
- **Loop for 5 attempts**, checking the user’s guess.
- **Conditional checks** to provide hints.
- **Win/Loss messages** displayed accordingly.

### 🔹 Key Functions & Concepts
- `srand(time(0))` → Seeds the random number generator.
- `rand() % 100 + 1` → Generates a random number between 1 and 100.
- `for` loop for 5 attempts.
- `if-else` conditions for game logic.

---

## 🎯 Example Gameplay
```
WELCOME TO NUMBER GUESSING GAME

ENTER NUMBER (1 to 100):
50
Guess a higher number, TRY AGAIN

ENTER NUMBER (1 to 100):
75
Guess a lower number, TRY AGAIN

ENTER NUMBER (1 to 100):
62
Congratulations! The number is 62
No. of attempts used: 3
```
```
WELCOME TO NUMBER GUESSING GAME

ENTER NUMBER (1 to 100):
25
Guess a higher number, TRY AGAIN

ENTER NUMBER (1 to 100):
80
Guess a lower number, TRY AGAIN

ENTER NUMBER (1 to 100):
60
Guess a lower number, TRY AGAIN

ENTER NUMBER (1 to 100):
55
Guess a lower number, TRY AGAIN

ENTER NUMBER (1 to 100):
50
Sorry, you have used all 5 attempts. The number was 52
```

---

## 📌 Future Enhancements
🔹 Add **difficulty levels** (Easy, Medium, Hard)
🔹 Implement **score tracking** for multiple rounds
🔹 Allow **unlimited attempts with a penalty system**

---

## 🤝 Contributing
Feel free to **fork this repository** and submit pull requests with improvements!

---

## 📜 License
This project is **open-source** under the MIT License.

