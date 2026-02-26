# 🏗️ Constructors and Destructors

> A comprehensive C++ project demonstrating the concepts and implementation of constructors and destructors in object-oriented programming.

<div align="center">

![C++](https://img.shields.io/badge/C%2B%2B-11-blue?style=flat-square&logo=c%2B%2B)
![License](https://img.shields.io/badge/License-MIT-green?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=flat-square)

</div>

---

## 📋 Table of Contents

- [Overview](#-overview)
- [Key Concepts](#-key-concepts)
- [Features](#-features)
- [Getting Started](#-getting-started)
- [Topics Covered](#-topics-covered)
- [Contributing](#-contributing)
- [Resources](#-resources)

---

## 🎯 Overview

This repository contains comprehensive examples and practical implementations showcasing how **constructors** and **destructors** work in C++. These fundamental concepts are essential for proper object initialization and resource management in modern C++ applications.

- **Constructors** 🔨: Initialize objects when they are created
- **Destructors** 🧹: Perform cleanup operations when objects are destroyed

---

## 🔑 Key Concepts

### Constructors 🔨

| Type | Description |
|------|-------------|
| **Default Constructor** | Automatically called when an object is created without arguments |
| **Parameterized Constructor** | Accepts arguments to initialize object members with specific values |
| **Copy Constructor** | Creates a new object as a copy of an existing object |
| **Move Constructor** | Efficiently transfers resources from a temporary object |
| **Constructor Delegation** | One constructor calling another to reduce code duplication |

### Destructors 🧹

| Concept | Description |
|---------|-------------|
| **Destructor Basics** | Cleanup of dynamically allocated memory and resources |
| **Virtual Destructors** | Essential for proper cleanup in inheritance hierarchies |
| **Rule of Three/Five/Zero** | Best practices for resource management in C++ |

---

## ✨ Features

- ✅ Clear, well-commented C++ code examples
- ✅ Demonstrations of different constructor and destructor types
- ✅ Industry best practices and common pitfalls
- ✅ Educational material for learning object lifecycle management
- ✅ Practical examples with real-world use cases
- ✅ Memory management demonstrations

---

## 🚀 Getting Started

### Prerequisites

- 🛠️ C++ compiler (C++11 or later recommended)
  - GCC 5.0+
  - Clang 3.8+
  - MSVC 2015+
- 📦 CMake (optional, for building)
- 📚 Standard C++ library

### Building

#### Basic Compilation

```bash
# Using GCC
g++ -std=c++11 -o program main.cpp

# Using Clang
clang++ -std=c++11 -o program main.cpp
```

#### With CMake (if available)

```bash
cmake .
make
```

### Running Examples

```bash
# Execute the compiled program
./program

# With verbose output
./program --verbose
```

---

## 📚 Topics Covered

### Core Concepts
- 🔹 Constructor initialization order
- 🔹 Member initialization lists (MIL)
- 🔹 Deep vs. shallow copying
- 🔹 Resource acquisition is initialization (RAII)

### Advanced Topics
- 🔹 Memory management strategies
- 🔹 Virtual destructors and polymorphism
- 🔹 Exception safety in constructors
- 🔹 Move semantics and perfect forwarding
- 🔹 Smart pointers (unique_ptr, shared_ptr)

---

## 📁 Project Structure

```
constructors-and-destructors/
├── README.md              # Documentation
├── CMakeLists.txt         # Build configuration
├── src/
│   ├── main.cpp          # Entry point
│   └── examples/         # Example implementations
├── include/              # Header files
└── tests/               # Test cases
```

---

## 🤝 Contributing

We welcome contributions! Here's how you can help:

### Steps to Contribute

1. 🍴 Fork the repository
2. 🌿 Create a feature branch (`git checkout -b feature/amazing-feature`)
3. ✏️ Commit your changes (`git commit -m 'Add amazing feature'`)
4. 📤 Push to the branch (`git push origin feature/amazing-feature`)
5. 🔄 Open a Pull Request

### Guidelines

- Follow the existing code style
- Add comments for complex logic
- Include examples where applicable
- Test your changes before submitting

---

## 📖 Resources

### Official Documentation
- 📘 [cppreference.com - Constructors](https://en.cppreference.com/w/cpp/language/constructor)
- 📘 [cppreference.com - Destructors](https://en.cppreference.com/w/cpp/language/destructor)
- 📘 [C++ Standard - isocpp.org](https://isocpp.org/)

### Recommended Reading
- "Effective C++" by Scott Meyers
- "Modern C++ Design" by Andrei Alexandrescu
- "C++ Primer" by Stanley B. Lippman

---

## 📄 License

This project is open source and available under the **MIT License**. See the [LICENSE](LICENSE) file for more details.

---

## 👤 Author

Created with ❤️ by [@gnan-krp](https://github.com/gnan-krp)

<div align="center">

**[⬆ back to top](#-constructors-and-destructors)**

</div>

---

<div align="center">

### ⭐ If you find this helpful, please consider giving it a star!

</div>