# User Management System

This is a simple C-based user management system that allows users to register and log in. The system supports up to 10 users and checks for duplicate usernames before registration.

## Features
- User registration with a unique username
- Secure login verification
- Simple command-line interface
- Exit functionality

## Requirements
- GCC compiler (for compiling the C program)
- Standard C library

## Installation & Compilation
1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/user-management-system.git
   ```
2. Navigate to the project directory:
   ```sh
   cd user-management-system
   ```
3. Compile the program using GCC:
   ```sh
   gcc user_management.c -o user_management
   ```

## Usage
Run the compiled executable:
```sh
./user_management
```

### Options
- **1** - Register a new user
- **2** - Login with an existing user
- **3** - Exit the program

## Example Execution
```sh
Welcome to User Management System
1. Register
2. Login
3. Exit
Select an option: 1
Enter username: alice
Enter password: password123
Successfully registered!

Select an option: 2
Enter username: alice
Enter password: password123
Login successful!
```

## Notes
- Usernames must be unique; duplicate usernames are not allowed.
- Passwords are stored in memory but are not encrypted.
- The system currently supports up to 10 users.

## Future Enhancements
- Implement file-based storage for user persistence
- Add password encryption
- Expand the user limit dynamically

## License
This project is licensed under the MIT License.

