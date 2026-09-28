<div align="center">

# 🧵 clsString Utility Library

**A robust, lightweight, and versatile C++ string manipulation utility class.**

[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=flat-square&logo=c%2B%2B)](https://en.wikipedia.org/wiki/C%2B%2B)
[![Standard](https://img.shields.io/badge/Standard-C%2B%2B11%20%7C%2014%20%7C%2017-blue?style=flat-square)](https://isocpp.org)
[![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20MSVC-informational?style=flat-square)](https://visualstudio.microsoft.com/)
[![License](https://img.shields.io/badge/License-MIT-green?style=flat-square)](LICENSE)

<p align="center">
  <a href="#key-features">Key Features</a> •
  <a href="#architectural-design">Architecture</a> •
  <a href="#quick-start">Quick Start</a> •
  <a href="#api-reference">API Reference</a> •
  <a href="#contributing">Contributing</a>
</p>

Developed by **Yousif Aljaberi**
</div>

---

## 📌 Overview

`clsString` is an all-in-one C++ wrapper designed to bridge the functional gaps in `std::string`. It provides an intuitive, dual-paradigm interface:
1. **Object-Oriented Programming (OOP):** Maintain state, chain operations, and mutate internal string data seamlessly.
2. **Functional / Static Utility:** Execute transformations on external string buffers without instantiating objects or incurring unnecessary overhead.

---

## 🚀 Key Features

* **🔤 Case Transformations:** Capitalize/lowercase first letters of words, invert character case, or transform complete strings.
* **📊 Metrics & Counting:** Count letters, specific occurrences (case-sensitive or insensitive), words, and vowels.
* **✂️ Splitting & Joining:** Tokenize strings by arbitrary delimiters into vectors, or join vectors and arrays back into delimited strings.
* **🧹 Sanitization & Formatting:** Trim whitespace (left, right, or both sides), and remove punctuation marks.
* **🔄 Advanced Manipulation:** Word-by-word string reversal and multi-variant word replacement (exact matching or case-insensitive).
* **⚙️ MSVC Property Support:** Direct property binding via `__declspec(property)` for clean getter/setter access (`obj.Value`).

---

## 🏗 Architectural Design

Every feature in `clsString` is mirrored:


```

```
              ┌───────────────────────────────┐
              │          clsString            │
              └───────────────┬───────────────┘
                              │
     ┌────────────────────────┴────────────────────────┐
     ▼                                                 ▼

```

┌─────────────────────────┐                     ┌─────────────────────────┐
│     Static Methods      │                     │     Member Methods      │
│ (Pure Functions / Pure) │                     │ (Stateful / Modifiers)  │
├─────────────────────────┤                     ├─────────────────────────┤
│ Takes: `string text`    │                     │ Operates on: `_Value`   │
│ Returns: Modified copy  │                     │ Mutates or reads state  │
└─────────────────────────┘                     └─────────────────────────┘

```

---

## 📦 Getting Started

### Prerequisites

* Any C++ compiler supporting C++11 or later.
* **Visual Studio / MSVC** (recommended for `__declspec(property)` support).

### Integration

`clsString` is a single header-only class. Simply drop `clsString.h` into your project directory:

```bash
├── include/
│   └── clsString.h
└── src/
    └── main.cpp

```

In your code:

```cpp
#include "clsString.h"

```

---

## 💻 Usage Examples

### 1. Object-Oriented Workflow

```cpp
#include <iostream>
#include "clsString.h"

int main()
{
    // Initialize object
    clsString str("hello world from clsString");

    // Capitalize first letter of every word
    str.UpperFirstLeeterOfEachWord();
    std::cout << str.Value << "\n"; // Output: Hello World From ClsString

    // Count words
    std::cout << "Total Words: " << str.CountEachWordOfString() << "\n"; // Output: 4

    // Reverse word order
    str.ReversWordsInString();
    std::cout << str.Value << "\n"; // Output: ClsString From World Hello

    return 0;
}

```

### 2. Static / Pure Function Workflow

```cpp
#include <iostream>
#include <vector>
#include "clsString.h"

int main()
{
    // Tokenization without instantiating an object
    std::vector<std::string> tokens = clsString::SplitString("C++,Rust,Go,Python", ",");

    for (const auto& token : tokens)
    {
        std::cout << "Token: " << token << "\n";
    }

    // Join elements back with custom separator
    std::string joined = clsString::JoinString(tokens, " | ");
    std::cout << joined << "\n"; // Output: C++ | Rust | Go | Python

    return 0;
}

```

---

## 📚 API Reference

### Case Manipulation

| Static Method | Member Method | Description |
| --- | --- | --- |
| `UpperFirstLeeterOfEachWord(text)` | `UpperFirstLeeterOfEachWord()` | Capitalizes the initial character of each word. |
| `LowerFirstLetterOfEachWord(text)` | `LowerFirstLetterOfEachWord()` | Lowercases the initial character of each word. |
| `LowerAllLetterOfString(text)` | `LowerAllLetterOfString()` | Converts all characters to lowercase. |
| `InverAllLettersCase(text)` | `InverAllLettersCase()` | Inverts character casing (upper $\to$ lower, lower $\to$ upper). |

### Character & Word Analytics

| Method | Returns | Description |
| --- | --- | --- |
| `CountSmallCapitalLetters(text, mode)` | `int` | Counts letters by type (`Capital`, `Small`, `All`). |
| `CountLetters(text, target)` | `int` | Counts exact matches of a single character. |
| `CountLetterNoMatchCase(text, target, noMatch)` | `short` | Counts character occurrences with optional case matching. |
| `CountVowels(text)` | `short` | Computes the total number of vowel characters (`a, e, i, o, u`). |
| `CountEachWordOfString(text)` | `short` | Returns word count separated by spaces. |

### Transformations & Tokenization

| Method | Returns | Description |
| --- | --- | --- |
| `SplitString(text, delim)` | `vector<string>` | Splits a string into tokens based on a delimiter. |
| `JoinString(vector, delim)` | `string` | Joins a vector of tokens with a custom delimiter. |
| `TrimLeft(text)` / `TrimRight(text)` | `string` | Trims leading or trailing whitespace. |
| `Trim(text)` | `string` | Trims both leading and trailing whitespace. |
| `ReplaceWord(text, from, to, matchCase)` | `string` | Replaces occurrences of a word with case-sensitivity options. |
| `RemovePunctuations(text)` | `string` | Strips all punctuation characters using `ispunct`. |

---

## 🛠 Compilation & Build

Compile using MSVC from developer command prompt:

```bash
cl /EHsc /W4 /std:c++17 main.cpp

```

Or using standard GCC/Clang (ensure MSVC extensions are handled if compiling on non-Windows environments):

```bash
g++ -std=c++17 main.cpp -o main

```

---

---

## Author

**Yousif Aljaberi**

* **GitHub:** [Yousef-Aljaberi](https://github.com/Yousef-Aljaberi)
* **LinkedIn:** [Yousif Aljaberi](https://www.linkedin.com/in/yousif-aljaberi-004278408/)

```
