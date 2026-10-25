# student-mangement-system-in-c-project
it is basic begineer friendly project in c language for c language begineers
# 🎓 Student Management System in C

A simple, menu-driven **Student Management System** developed using the C programming language. This project helps manage basic student information and search for students using their roll numbers.

## 📌 About the Project

The Student Management System is a beginner-level C programming project designed to practice fundamental programming concepts, including structures, arrays, loops, and switch statements.

The program allows users to add student details, search for a student by roll number, and exit the application through a menu-driven interface.

## ✨ Features

- ➕ Add new student records.
- 🔍 Search for students using their roll numbers.
- 📝 Store student names and marks.
- 💾 Manage up to 100 student records during program execution.
- 📋 Simple menu-driven interface.
- 🚪 Exit the program easily.

## 🛠️ Technologies Used

- **Language:** C
- **Compiler:** GCC
- **Concepts:** Structures, Arrays, Loops, Conditional Statements, Switch Statements, and Standard Input/Output.

## 📂 Project Structure

```text
Student-Management-System/
│
├── main.c
└── README.md
```

## ⚙️ Installation and Execution

### 1. Clone the Repository

```bash
git clone YOUR_REPOSITORY_URL
```

Replace `YOUR_REPOSITORY_URL` with your GitHub repository URL.

### 2. Navigate to the Project Directory

```bash
cd Student-Management-System
```

### 3. Compile the Program

Make sure GCC is installed, then run:

```bash
gcc main.c -o student_management
```

### 4. Run the Program

On Linux:

```bash
./student_management
```

## 🖥️ Program Menu

```text
---- STUDENT MANAGEMENT SYSTEM ----

1. Add Students
2. Display Students
3. Exit

Enter your choice:
```

**Note:** In the current implementation, option 2 searches for and displays a student using their roll number rather than displaying all students.

## 📖 Concepts Learned

- Defining and using structures with `struct`.
- Storing multiple records using arrays.
- Accepting user input using `scanf()`.
- Using `switch` statements for menu selection.
- Using `while` and `for` loops.
- Searching records using conditional statements.
- Managing records with a counter variable.

## ⚠️ Current Limitations

- Student data is stored in memory and is lost when the program terminates.
- The program supports a maximum of 100 students.
- Student names are limited to a single word in the current implementation.
- The program does not currently support updating or deleting student records.

## 🚀 Future Improvements

- Display all student records.
- Update student information.
- Delete student records.
- Save student data permanently using file handling.
- Improve input validation.
- Prevent duplicate roll numbers.

## 🎯 Project Objective

The objective of this project is to build a basic student record management application while strengthening fundamental C programming skills.

## 👨‍💻 Author

**Solnox**

---

⭐ If you find this project useful, consider giving the repository a star!
