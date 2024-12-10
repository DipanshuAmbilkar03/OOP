# C++ Programming Exercises

This repository contains various C++ programming exercises designed to explore object-oriented programming, operator overloading, exception handling, file handling, templates, and STL.

---

## Table of Contents

1. [Complex Number Class](#1-complex-number-class)
2. [Student Information System](#2-student-information-system)
3. [Publication Management System](#3-publication-management-system)
4. [File Handling](#4-file-handling)
5. [Function Template for Selection Sort](#5-function-template-for-selection-sort)
6. [STL for Sorting and Searching](#6-stl-for-sorting-and-searching)
7. [State Population Lookup Using Map](#7-state-population-lookup-using-map)

---

## 1. Complex Number Class

**Aim**:  
Implement a class Complex which represents the Complex Number data type. Implement the following 

**Tasks**:  
1. Constructor (including a default constructor which creates the complex number 0+0i). 
2. Overload operator+ to add two complex numbers. 
3. Overload operator* to multiply two complex numbers. 
4. Overload operators << and >> to print and read Complex Numbers. 

---

## 2. Student Information System

**Aim**:  
Develop a program in C++ to create a database of student’s information system containing the 
following information: Name, Roll number, Class, Division, Date of Birth, Blood group, 
Contact address, Telephone number, Driving license no. and other. Construct the database with 
suitable member functions. Make use of constructor, default constructor, copy 
constructor, destructor, static member functions, friend class, this pointer, inline code and 
dynamic memory allocation operators-new and delete as well as exception handling.  

**Tasks**:  
- Construct the database with suitable member functions.
- Use the following features:
  - Constructor, default constructor, copy constructor, and destructor.
  - Static member functions.
  - Friend class.
  - `this` pointer.
  - Inline code.
  - Dynamic memory allocation operators (`new` and `delete`).
  - Exception handling.

---

## 3. Publication Management System

**Aim**:  
Imagine a publishing company which does marketing for book and audio cassette versions. 
Create a class publication that stores the title (a string) and price (type float) of publications. 
From this class derive two classes: book which adds a page count (type int) and tape which adds 
a playing time in minutes (type float). 
Write a program that instantiates the book and tape class, allows user to enter data and displays 
the data members. If an exception is caught, replace all the data member values with zero 
values. 

**Tasks**:  
1. Create a base class `Publication` that stores the title (a string) and price (a float) of publications.
2. Derive the following classes:
   - `Book`: Adds a page count (int).
   - `Tape`: Adds a playing time in minutes (float).
3. Write a program to:
   - Instantiate the `Book` and `Tape` classes.
   - Allow the user to enter data and display the data members.
   - Use exception handling to replace all the data member values with zero when an exception is caught.

---

## 4. File Handling

**Aim**:  
Write a C++ program that creates an output file, writes information to it, closes the file, open 
it again as an input file and read the information from the file. 

---

## 5. Function Template for Selection Sort

**Aim**:  
WrWrite a function template for selection sort that inputs, sorts and outputs an integer array and 
a float array. 

---

## 6. STL for Sorting and Searching

**Aim**:  
Write C++ program using STL for sorting and searching user defined records such as 
personal records (Name, DOB, Telephone number etc) using vector container.  OR 
Write C++ program using STL for sorting and searching user defined records such as 
Item records (Item code, name, cost, quantity etc) using vector container. 

**Options**:  
1. **Personal Records**:
   - Attributes: Name, Date of Birth, Telephone Number.
2. **Item Records**:
   - Attributes: Item Code, Name, Cost, Quantity.

**Tasks**:  
- Use the `vector` container to implement sorting and searching.

---

## 7. State Population Lookup Using Map

**Aim**:  
Write a program in C++ to use map associative container. The keys will be the names of states 
and the values will be the populations of the states. When the program runs, the user is 
prompted to type the name of a state. The program then looks in the map, using the state 
name as an index and returns the population of the state. 


**Tasks**:  
1. Store state names as keys and their populations as values.  
2. Prompt the user to type the name of a state.  
3. Use the map to look up and return the population of the state.

---
