# Engineering Calculator in C

A beginner-friendly engineering calculator written in C, created as part of my Electrical and Electronic Engineering learning journey.

## Overview

This project is a command-line calculator for basic electrical engineering calculations. It uses fundamental C programming concepts to implement common electrical formulas.

## Features

- Calculate voltage using Ohm's law: V = I × R
- Calculate current: I = V / R
- Calculate resistance: R = V / I
- Calculate electrical power: P = V × I
- Accept numerical input from the user
- Display results to two decimal places
- Handle basic invalid input and division-by-zero cases

## Technologies

- C programming language
- Standard input/output library (`stdio.h`)

## Getting Started

### 1. Compile

Using GCC, run:

```bash
gcc main.c -o calculator
./calculator
calculator.exe
=================================
   ENGINEERING CALCULATOR
=================================
1. Calculate voltage (V = I * R)
2. Calculate current (I = V / R)
3. Calculate resistance (R = V / I)
4. Calculate power (P = V * I)
Choose an option (1-4): 1
Enter current (A): 2
Enter resistance (Ohms): 10
Voltage = 20.00 V

