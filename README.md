# 📌 Queue Implementation (clsMyQueue) ⚡

A C++ template-based queue implementation using a **doubly linked list**, providing essential queue operations such as enqueue, dequeue, and traversal — with extended features for full control. 🚀

---

## 🌟 Project Overview

The `clsMyQueue` class is a **generic** queue implementation built on top of a custom `clsDblLinkedList<T>`. It supports standard queue operations and goes further by allowing access, updates, and advanced control over queue items.

This project is ideal for learning:
- Queue data structure fundamentals
- Generic programming using templates
- Memory-efficient linked list design

---

## 🔹 Core Functionalities

- 🔄 `Push(T)` – Enqueue: Add element to the back
- ❌ `Pop()` – Dequeue: Remove element from the front
- 🔍 `Front()` / `Back()` – Access ends of the queue
- 📏 `Size()` / `IsEmpty()` – Queue state inspection
- 🔁 `Reverse()` – Reverse the queue order
- ✏️ `UpdateItem(Index, Value)` – Modify an element
- ➕ `InsertAfter(Index, Value)` – Insert after index
- ⏮ `InsertAtFront(Value)` / `InsertAtBack(Value)` – Manual insertions
- ✨ `Clear()` – Remove all elements at once
- 📃 `Print()` – Display all queue contents

This queue is **fully generic** using C++ templates and can handle any data type.

---

## ✨ Features

### 🔹 Basic Queue Operations
- `Push(T Value)` — Adds an element to the back of the queue
- `Pop()` — Removes the front element
- `Front()` / `Back()` — Returns front/back values
- `Size()` — Returns number of elements
- `IsEmpty()` — Checks if the queue is empty
- `Print()` — Prints all elements

### 🔹 Extended Functionalities
- `GetItem(int Index)` — Retrieves element by index
- `Reverse()` — Reverses queue order
- `UpdateItem(int Index, T NewValue)` — Updates an element
- `InsertAfter(int Index, T Value)` — Inserts after a given index
- `InsertAtFront(T Value)` — Inserts at the front (non-standard)
- `InsertAtBack(T Value)` — Inserts at the back
- `Clear()` — Empties the queue safely

---

## 🚀 How It Works

- **Enqueue / Dequeue**: Elements are added at the end using `Push()`, and removed from the front using `Pop()`
- **Access**: `Front()`, `Back()` and `GetItem(index)` offer access to elements
- **Manipulation**: `Reverse()`, `UpdateItem()`, `InsertAfter()` modify the queue safely
- **Memory**: Dynamically allocates memory and frees it with `Clear()`

---

## 📁 Project Structure

---

## ⚙️ Technologies Used

- **Language**: C++
- **Templates**: Enable generic type support
- **Doubly Linked List**: Efficient insertions/deletions
- **Dynamic Memory**: Uses pointers for runtime flexibility

---

## 📚 Potential Enhancements

- 🏗️ STL-style Iterator Support
- ⏱️ Performance Optimization for large-scale usage
- 🗃️ File I/O for persistent queue storage
- 🧵 Thread Safety for multi-threaded environments

---

## 🎯 Learning Outcomes

By working with this project, you will understand:

✅ Queue operations (enqueue, dequeue, size, access)  
✅ How to use C++ templates for generic containers  
✅ How doubly linked lists enable dynamic memory handling  
✅ How to expand data structures for advanced use cases  

---

## 🚀 Getting Started

### 🔧 How to Run

1. **Clone the repository:**
```bash
git clone https://github.com/your-username/clsQueue_Library-cpp.git
cd clsQueue_Library-cpp
```
2. **Build & run your test code (e.g., main.cpp):**
```bash
g++ main.cpp -o queueApp
./queueApp
```
3. **Include the library in your own project:**
```bash
#include "clsMyQueue.h"
#include "clsDblLinkedList.h"
```
