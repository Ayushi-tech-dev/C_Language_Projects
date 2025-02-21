# Banking Management System 🏦

## 📌 Introduction
The **Banking Management System** is a simple console-based C program that allows users to create accounts, deposit and withdraw money, and view account details. The system stores account data in a binary file (`accounts.dat`) for persistent storage.

---

## 🚀 Features
- **Create Account** ➡️ Open a new bank account.
- **Deposit Money** ➡️ Add funds to your account.
- **Withdraw Money** ➡️ Withdraw funds (with balance validation).
- **Display Account** ➡️ View details of a specific account.
- **Display All Accounts** ➡️ List all stored accounts.
- **Persistent Storage** ➡️ Data is saved in a binary file.

---

## 🛠️ Installation & Usage
### 1️⃣ **Compile the Program**
```sh
gcc banking_system.c -o banking_system
```

### 2️⃣ **Run the Program**
```sh
./banking_system
```

### 3️⃣ **Choose an Option**
The program provides an interactive menu:
```
=== Banking Management System ===
1. Create Account
2. Deposit
3. Withdraw
4. Display Account
5. Display All Accounts
6. Exit
Enter your choice:
```

---

## 📂 File Structure
```
📁 Banking Management System
│-- banking_system.c    # Main C source code
│-- accounts.dat        # Binary file storing account details
│-- README.md           # Documentation
```

---

## 📜 Code Overview
The program is built using **C structures and file handling techniques**.
- `Account` structure stores account details.
- `accounts.dat` is used for **persistent data storage**.
- Functions handle **file operations and user input**.

**Key Functions:**
- `createAccount()` – Adds a new account.
- `deposit()` – Deposits money into an account.
- `withdraw()` – Withdraws money with balance check.
- `displayAccount()` – Displays account details.
- `readAllAccounts()` – Lists all stored accounts.
- `loadAccount()` – Fetches account details from the file.

---

## 🎯 Example Usage
```
Enter account number: 101
Enter name: John Doe
Account created successfully!
```
```
Enter account number: 101
Enter amount to deposit: 5000
Deposit successful! New balance: 5000.00
```

---

## 📌 Future Enhancements
🔹 Add **user authentication** (PIN-based login)
🔹 Implement **transaction history tracking**
🔹 Develop a **graphical user interface (GUI)**

---

## 🤝 Contributing
Feel free to **fork this repository** and submit pull requests with improvements!

---

## 📜 License
This project is **open-source** under the MIT License.

