# 🍳 Online Recipe Management System – C++ (OOP Project)

A **C++ Object-Oriented Programming** project developed for the **SLIIT Object-Oriented Concepts (IT1050)** module, showcasing real-world design with classes, inheritance, encapsulation, and polymorphism.  
This system simulates an **online recipe management platform** supporting multiple user roles, transactions, and content control.

---

## 🧩 Project Overview

The system allows users to browse, post, and manage recipes through a structured class-based design.  
Each role — user, creator, admin, and manager — interacts with core entities such as payments, discounts, reports, blogs, and recipes.

**Main features include:**
- User registration, login, and membership upgrades.
- Recipe creation, approval, and publishing.
- Blog post management.
- Payment and discount validation.
- Report generation and account control for admins and managers.

---

## 🧱 Class Design Summary

### **Core Classes**
| Class | Description |
|-------|--------------|
| `User` | Base class containing common user details and login behavior. |
| `GuestUser`, `FreePlanUser`, `PremiumUser` | Specialized user types with extended capabilities. |
| `RecipeCreator` | Allows premium users to publish recipes and withdraw earnings. |
| `Employee`, `Admin`, `Manager` | Roles with management and moderation rights. |
| `Recipe`, `BlogPost`, `Feedback`, `Report` | Represent system content entities. |
| `Payment`, `Discount`, `Wallet` | Handle transaction and financial operations. |
| `PremiumMembership` | Manages user upgrades and premium subscriptions. |

---

## 🧩 CRC (Class Responsibility Collaboration) Cards

The system was designed using **CRC modeling** to identify:
- **Responsibilities** → What each class does  
- **Collaborations** → Which classes it interacts with  

This helped structure interactions between:
- Users ↔ Recipes  
- Manager ↔ Payment & Discounts  
- Admin ↔ Reports & Feedback  
- Creator ↔ Wallet & BlogPost

---

## 🧠 Object-Oriented Concepts Demonstrated
- **Encapsulation** → Private data members and public methods.  
- **Inheritance** → Hierarchy among `User`, `FreePlanUser`, `PremiumUser`, etc.  
- **Polymorphism** → Overridden methods for user actions and system responses.  
- **Abstraction** → Separation of role responsibilities through modular classes.  
- **Composition** → Classes like `Manager` and `Wallet` interacting through objects.  

---

## ⚙️ How to Run

1. **Clone the Repository**
   ```bash
   git clone https://github.com/<your-username>/OnlineRecipeManagementSystem-Cpp.git
   cd OnlineRecipeManagementSystem-Cpp

2. Compile the Program
   Use any C++ compiler (g++, Code::Blocks, or Visual Studio):

   g++ *.cpp -o RecipeSystem


3. Run the Executable

   ./RecipeSystem


4. Expected Output
  
    Welcome to Online Recipe Management System
    User logged in successfully!
    Admin approved recipe post...
    Manager generated monthly report...

📁 Suggested Directory Structure
    OnlineRecipeManagementSystem-Cpp/
    │
    ├── main.cpp
    ├── User.h / User.cpp
    ├── GuestUser.h / GuestUser.cpp
    ├── FreePlanUser.h / FreePlanUser.cpp
    ├── PremiumUser.h / PremiumUser.cpp
    ├── RecipeCreator.h / RecipeCreator.cpp
    ├── Admin.h / Admin.cpp
    ├── Manager.h / Manager.cpp
    ├── Employee.h / Employee.cpp
    ├── Recipe.h / Recipe.cpp
    ├── BlogPost.h / BlogPost.cpp
    ├── Feedback.h / Feedback.cpp
    ├── Payment.h / Payment.cpp
    ├── Discount.h / Discount.cpp
    ├── Report.h / Report.cpp
    ├── Wallet.h / Wallet.cpp
    ├── PremiumMembership.h / PremiumMembership.cpp
    └── README.md

🏫 Academic Context

    Institution: Sri Lanka Institute of Information Technology (SLIIT)
    Module: IT1050 – Object-Oriented Concepts
    Year: Year 1, Semester 2 (2024)
    Group ID: MLB_03.01_09
    Team Members:
    
    IT23183018 – Hirusha D.G.A.D
    IT23191006 – Cooray Y.H.
    IT23195202 – Harshana L.L.E
    IT23189294 – Gunathilaka H.D.I
    IT23190566 – Ganegoda R.B

🧑‍💻 Author

    Team: MLB_03.01_09
    University: SLIIT – Faculty of Computing
    Project: Object-Oriented Concepts (C++ Implementation)
