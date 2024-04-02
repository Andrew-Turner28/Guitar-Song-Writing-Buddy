# Guitar Song Writing Buddy

## Overview
The Guitar Song Writing Buddy is a tool aid songwriters and guitarists in visualizing how chords are mapped on a guitar fretboard. It shows the location of all neccessary notes for inputted chords and their location on the fretboard.

## Features
- Supports all major and minor chords in Standard Tuning.
- Visual representation of finger placement on guitar strings/frets.
- Details all neccessary notes for ewch chord (ex. Root, Minor Third, Perfect Fifth, etc)
- Interactive command-line interface.

## Prerequisites
- Computer with cimmand-line interface.
- Basic understanding of guitar.
- Basic understanding of C++ program compilation and running.

## Installation
To install, follow these steps:
1. Clone this repository, or downlaod source code to your computer.
2. Navigate to the directory with the source code.
3. Compile .cpp file with a C++ compiler (g++, clang, etc).
    Ex:
     clang++ -std=c++11 GuitarBuddyPrototype.cpp -o guitarBuddy
4. Run Compiled Program.
    Ex:
      ./guitarBuddy
   
## Usage
To use the program, follow these directions:

1. Run the program in your command-line.
2. When prompted, enter your chord (ex. Am, C#maj, Gmaj).
3. The program will print out an ASCII representation of the guitar freboard with highlighted root (R), third(3), and fifth(5) notes marking their location.
4. Continue to map more chords, or exit the program.

## Example
Please Input Chord: Amaj

Amaj Chord: 
Comprised of Root(A), Major Third(C#/Db), and Perfect Fifth(E)
     __________________________________________________
E: 5 ||---|---|---|---|-R-|---|---|---|-3-|---|---|-5-|
B:   ||---|-3-|---|---|-5-|---|---|---|---|-R-|---|---|
G:   ||---|-R-|---|---|---|-3-|---|---|-5-|---|---|---|
D:   ||---|-5-|---|---|---|---|-R-|---|---|---|-3-|---|
A: R ||---|---|---|-3-|---|---|-5-|---|---|---|---|-R-|
E: 5 ||---|---|---|---|-R-|---|---|---|-3-|---|---|-5-|
     ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
                3       5       7       9          12

Map Another Chord? [Y/N]:

## Future Plans
- Expand compatable chords to include: Augmented, Sus2, Sus4, Diminished, Major 7th, Minor 7th, and Dominant 7th chords.
- Support for alternate tunings.
- Eventual launch as a hosted web application.

## Contact
If you have any questions, issues, or wnat to collaborate, please contact me at turnerandrew284@gmail.com
