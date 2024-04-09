# Guitar Song Writing Buddy

## Overview
The Guitar Song Writing Buddy is a tool to aid songwriters and guitarists in visualizing how chords are mapped on a guitar fretboard. It shows the location of all necessary notes for inputted chords and their location on the fretboard.

## Features
- Supports all of the following chords in Standard Tuning:
   * Major (_maj or _#maj)
   * Minor (_m or _#m)
   * Major 7th (_maj7 or _#maj7)
   * Minor 7th (_m7 or _#m7)
   * Dominant 7th (_7 or _#7)
   * Diminished (_dim or _#dim)
   * Augmented (_aug or _#aug)
   * Augmented 7th (_aug7 or _#aug7)
   * Suspended Second (_sus2 or _#sus2)
   * Suspended Fourth (_sus4 or _#sus4)
- Visual representation of finger placement on guitar strings/frets.
- Details all necessary notes for each chord (e.g. Root, Minor Third, Perfect Fifth, etc.)
- Interactive command-line interface.

## Prerequisites
- Computer with command-line interface.
- Basic understanding of guitar.
- Basic understanding of C++ program compilation and running.

## Installation
To install, follow these steps:

1. Clone this repository, or download the source code to your computer.
2. Navigate to the directory with the source code.
3. Compile the .cpp file with a C++ compiler (g++, clang, etc.).
```
clang++ -std=c++11 GuitarBuddyPrototype.cpp -o guitarBuddy
```
4. Run Compiled Program.
```
./guitarBuddy
```
   
## Usage
To use the program, follow these directions:

1. Run the program in your command-line.
2. When prompted, enter your chord (e.g. Am, C#maj, Gmaj).
3. The program will print out an ASCII representation of the guitar freboard with highlighted root (R), third(3), and fifth(5) notes marking their location.
4. Continue to map more chords, or exit the program.

## Example
```
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
```

## Future Plans
- Expand compatible chords to include more complex chords (e.g. Slash/Split Chords, 6th Chords, etc.).
- Support for alternate tunings.
- Eventual launch as a hosted web application.

## Contact
If you have any questions, issues, or want to collaborate, please contact me at turnerandrew284@gmail.com
