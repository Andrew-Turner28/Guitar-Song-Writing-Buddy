// Project: Guitar Songwriting Buddy
// Author: Andrew Turner
// Date: April 9, 2024
// License: MIT License

/*
Description: 
The Guitar Song Writing Buddy is a tool to aid songwriters and guitarists in visualizing how chords are mapped on a guitar fretboard. 
It shows the location of all necessary notes for inputted chords and their location on the fretboard.

Current Compatible Chords:
    *Major (_ maj or _ #maj)
    * Minor (_ m or _ #m)
    * Major 7th (_ maj7 or _ #maj7)
    * Minor 7th (_ m7 or _ #m7)
    * Dominant 7th (_ 7 or _ #7)
    * Diminished (_ dim or _ #dim)
    * Augmented (_ aug or _ #aug)
    * Augmented 7th (_ aug7 or _ #aug7)
    * Suspended Second (_ sus2 or _ #sus2)
    * Suspended Fourth (_ sus4 or _ #sus4)       
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

bool isValidNote(const string& note) {
    //checks for valid note entry
    static const set<string> validNotes = {"A", "B", "C", "D", "E", "F", "G", "A#", "Bb", "C#", "Db", "D#", "Eb", "F#", "Gb", "G#", "Ab"};
    return validNotes.count(note) > 0;
}

bool isValidChordType(const string& type) {
    //checks for valid chord type entry
    static const set<string> validTypes = {"maj", "maj7", "m", "m7", "7", "dim", "aug", "aug7", "sus2", "sus4"};
    return validTypes.count(type) > 0;
}

string changeNoteFormat(string note) {
    //takes the input note and changes it to match the musicScale
    string output = "";

    if(note.compare("F#") == 0 || note.compare("Gb") == 0) {
        output = "F#/Gb";
    } else if(note.compare("G#") == 0 || note.compare("Ab") == 0) {
        output = "G#/Ab";
    } else if(note.compare("A#") == 0 || note.compare("Bb") == 0) {
        output = "A#/Bb";
    } else if(note.compare("C#") == 0 || note.compare("Db") == 0) {
        output = "C#/Db";
    } else if(note.compare("D#") == 0 || note.compare("Eb") == 0) {
        output = "D#/Eb";
    } else if(note.compare("E#") == 0) {
        output = "F";
    } else if(note.compare("Fb") == 0) {
        output = "E";
    }  else if(note.compare("B#") == 0) {
        output = "C";
    }  else if(note.compare("Cb") == 0) {
        output = "B";
    }else {
        output = note;
    }
    return output;
}

string findOtherNoteOffOfRoot(string root, int distance) {
    //music scale to locate notes
    vector<string> musicScale = {"E", "F", "F#/Gb", "G", "G#/Ab", "A", "A#/Bb", "B", "C", "C#/Db", "D", "D#/Eb", "E", "E", "F", "F#/Gb", "G", "G#/Ab", "A", "A#/Bb", "B", "C", "C#/Db", "D", "D#/Eb", "E"};
    string foundNote = "";
 
    //loop through and find the root, then grab note *distance* semi-tones away 
    for (int i = 0; i < musicScale.size(); i++) {
        if(musicScale[i] == root) {
            foundNote = musicScale[(i + distance) % 12];
            break;
        }
    }

    return foundNote;
}

string buildChordInfoString(string initialInfo, string root, string note1, string note2, string note3) {
    //sppend everything together
    string chordInfo = initialInfo + "." + root + "." + note1 + "." + note2 + "." + note3;
    return chordInfo;
    
}

string generateChordInfo(string chordName) {
    string tokenStorage;
    string output, note1, note2, note3;

    stringstream ss(chordName);
    vector<string> chordNameVector;

    //break input from user into vector
    while (getline(ss, tokenStorage, ' ')) {
        chordNameVector.push_back(tokenStorage);
    }

    //check for valid input size, valid root note, and valid chord type
    if (chordNameVector.size() != 2 || !isValidNote(chordNameVector[0]) || !isValidChordType(chordNameVector[1])) {
        return "Error";
    }

    string rootNote = changeNoteFormat(chordNameVector[0]);

    // chordInfo Structure: [Type of Chord].[Root].[Type of 3rd/2nd/4th].[Type of 5th].[Type of 7th (if applicable)].[Note 1].[Note 2].[Note 3].[Note 4(if applicable)]
    if(chordNameVector[1].compare("maj") == 0) {
        note1 = findOtherNoteOffOfRoot(rootNote, 4);
        note2 = findOtherNoteOffOfRoot(rootNote, 7);
        output = buildChordInfoString("Major.Root.Major Third.Perfect Fifth.n/a", rootNote, note1, note2, "n/a"); 
    } else if (chordNameVector[1].compare("maj7") == 0) {
        note1 = findOtherNoteOffOfRoot(rootNote, 4);
        note2 = findOtherNoteOffOfRoot(rootNote, 7);
        note3 = findOtherNoteOffOfRoot(rootNote, 11);
        output = buildChordInfoString("Major Seventh.Root.Major Third.Perfect Fifth.Major Seventh", rootNote, note1, note2, note3); 
    } else if (chordNameVector[1].compare("m") == 0) {
        note1 = findOtherNoteOffOfRoot(rootNote, 3);
        note2 = findOtherNoteOffOfRoot(rootNote, 7);
        output = buildChordInfoString("Minor.Root.Minor Third.Perfect Fifth.n/a", rootNote, note1, note2, "n/a"); 
    } else if (chordNameVector[1].compare("m7") == 0) {
        note1 = findOtherNoteOffOfRoot(rootNote, 4);
        note2 = findOtherNoteOffOfRoot(rootNote, 7);
        note3 = findOtherNoteOffOfRoot(rootNote, 10);
        output = buildChordInfoString("Minor Seventh.Root.Minor Third.Perfect Fifth.Minor Seventh", rootNote, note1, note2, note3);
    } else if (chordNameVector[1].compare("7") == 0) {
        note1 = findOtherNoteOffOfRoot(rootNote, 4);
        note2 = findOtherNoteOffOfRoot(rootNote, 7);
        note3 = findOtherNoteOffOfRoot(rootNote, 10);
        output = buildChordInfoString("Dominant.Root.Major Third.Perfect Fifth.Minor Seventh", rootNote, note1, note2, note3);
    } else if (chordNameVector[1].compare("dim") == 0) {
        note1 = findOtherNoteOffOfRoot(rootNote, 3);
        note2 = findOtherNoteOffOfRoot(rootNote, 6);
        output = buildChordInfoString("Diminished.Root.Minor Third.Diminished Fifth.n/a", rootNote, note1, note2, "n/a");  
    } else if (chordNameVector[1].compare("aug") == 0) {
        note1 = findOtherNoteOffOfRoot(rootNote, 4);
        note2 = findOtherNoteOffOfRoot(rootNote, 8);
        output = buildChordInfoString("Augmented.Root.Major Third.Augmented Fifth.n/a", rootNote, note1, note2, "n/a");  
    } else if (chordNameVector[1].compare("aug7") == 0) {
        note1 = findOtherNoteOffOfRoot(rootNote, 4);
        note2 = findOtherNoteOffOfRoot(rootNote, 8);
        note3 = findOtherNoteOffOfRoot(rootNote, 10);
        output = buildChordInfoString("Augmented Seventh.Root.Major Third.Augmented Fifth.Minor Seventh", rootNote, note1, note2, note3);
    } else if (chordNameVector[1].compare("sus2") == 0) {
        note1 = findOtherNoteOffOfRoot(rootNote, 2);
        note2 = findOtherNoteOffOfRoot(rootNote, 7);
        output = buildChordInfoString("Suspended Second.Root.Major Second.Perfect Fifth.n/a", rootNote, note1, note2, "n/a");
    } else if (chordNameVector[1].compare("sus4") == 0) {
        note1 = findOtherNoteOffOfRoot(rootNote, 5);
        note2 = findOtherNoteOffOfRoot(rootNote, 7);
        output = buildChordInfoString("Suspended Fourth.Root.Perfect Fourth.Perfect Fifth.n/a", rootNote, note1, note2, "n/a");
    } else {
        cout << "Error";
    }
    
    return output;
}

vector<string> populateGuitarString(string chordInfo, string stringName) {
    //create vector to store parts of broken up string
    vector<string> chordInfoVector;
    istringstream iss(chordInfo);
    string part;


    //split string and break into chordInfoVector 
    while (getline(iss, part, '.')) {
        chordInfoVector.push_back(part);
    }
    //attribute values for chord into  variables
    string chordName = chordInfoVector[0], root = chordInfoVector[5], third = chordInfoVector[6], fifth = chordInfoVector[7], seventh = chordInfoVector[8];

    //Master array for each string in standard tuning
    map<string, vector<string>> masterArrays;
    masterArrays["highE"] = {"E", "F", "F#/Gb", "G", "G#/Ab", "A", "A#/Bb", "B", "C", "C#/Db", "D", "D#/Eb", "E"};
    masterArrays["B"] = {"B", "C", "C#/Db", "D", "D#/Eb", "E", "F", "F#/Gb", "G", "G#/Ab", "A", "A#/Bb", "B"};
    masterArrays["G"] = {"G", "G#/Ab", "A", "A#/Bb", "B", "C", "C#/Db", "D", "D#/Eb", "E", "F", "F#/Gb", "G"};
    masterArrays["D"] = {"D", "D#/Eb", "E", "F", "F#/Gb", "G", "G#/Ab", "A", "A#/Bb", "B", "C", "C#/Db", "D"};
    masterArrays["A"] = {"A", "A#/Bb", "B", "C", "C#/Db", "D", "D#/Eb", "E", "F", "F#/Gb", "G", "G#/Ab", "A"};
    masterArrays["lowE"] = {"E", "F", "F#/Gb", "G", "G#/Ab", "A", "A#/Bb", "B", "C", "C#/Db", "D", "D#/Eb", "E"};

    //fill strings with dashes
    vector<string> populatedStrings(13, "-");
    populatedStrings[0] = " ";

    //loop through strings and mark location of notes
    if(masterArrays.find(stringName) != masterArrays.end()) {
        const vector<string>& masterArray = masterArrays[stringName];
        for(size_t i = 0; i < masterArray.size(); ++i) {
            if(masterArray[i] == root){
                populatedStrings[i] = "R";
            } else if(masterArray[i] == third && chordName.compare("Suspended Second") != 0 && chordName.compare("Suspended Fourth") != 0) {
                populatedStrings[i] = "3";
            } else if(masterArray[i] == third && chordName.compare("Suspended Second") == 0) {
                populatedStrings[i] = "2";
            } else if(masterArray[i] == third && chordName.compare("Suspended Fourth") == 0) {
                populatedStrings[i] = "4";
            } else if(masterArray[i] == fifth) {
                populatedStrings[i] = "5";
            } else if(masterArray[i] == seventh) {
                populatedStrings[i] = "7";
            }
        }
    }
    return populatedStrings;
}

void printStrings(const vector<string>& stringNotes) {
    //loop and print notes in conjunction with ASCII for fretboard representation
    for (int i = 0; i < stringNotes.size(); i++) {
        if (i == 0) {
            cout << stringNotes[i] << " ||-";
        } else if (i == 12) {
            cout << stringNotes[i] << "-|";
        } else {
            cout << stringNotes[i] << "-|-";
        }
    }
    cout << endl;
}

int main() {
    string chordInput;
    bool keepGoing = true;
    string continueInput;
    bool validChordInput = false;

    //ASCII art created by https://www.asciiart.eu/text-to-ascii-art
    //Maybe need to remove for later deployment
    cout << "+=============================================================+|\n";
    cout << "|  ____       _ _               ____            _     _       |\n";
    cout << "| / ___|_   _(_) |_ __ _ _ __  | __ ) _   _  __| | __| |_   _ |\n";
    cout << "|| |  _| | | | | __/ _` | '__| |  _ \\| | | |/ _` |/ _` | | | ||\n";
    cout << "|| |_| | |_| | | || (_| | |    | |_) | |_| | (_| | (_| | |_| ||\n";
    cout << "| \\____|\\__,_|_|\\__\\__,_|_|    |____/ \\__,_|\\__,_|\\__,_|\\__, ||\n";
    cout << "|                                                       |___/ |\n";
    cout << "+=============================================================+\n";

    cout << endl << endl;
    //runtime loop
    while (keepGoing) {
        while(validChordInput == false) {
            cout << "Please Input the Chord You'd Like to Map: ";
            getline(cin, chordInput);

            string testChordInfo = generateChordInfo(chordInput);

            if(testChordInfo.find("Error") != string::npos) {
                cout << endl << "Unrecognised Chord Input. Please check your formatting. Ex. C# m, A maj, E m, G aug7" << endl;
            }
            else {
                validChordInput = true;
            }
            
        }
        validChordInput = false;
        
        string chordInfo = generateChordInfo(chordInput);

        //populate chordInfoVector
        vector<string> chordInfoVector;
        istringstream iss(chordInfo);
        string part;
        while (getline(iss, part, '.')) {
            chordInfoVector.push_back(part);
        }

        //populate all guitar strings
        vector<string> highE_String = populateGuitarString(chordInfo, "highE");
        vector<string> b_String = populateGuitarString(chordInfo, "B");
        vector<string> g_String = populateGuitarString(chordInfo, "G");
        vector<string> d_String = populateGuitarString(chordInfo, "D");
        vector<string> a_String = populateGuitarString(chordInfo, "A");
        vector<string> lowE_String = populateGuitarString(chordInfo, "lowE");

        //print chord information 
        cout << endl << chordInput << " Chord: " << endl;

        string chordName = chordInfoVector[0];
        //case check for if it involves a seventh note
        if(chordName.compare("Major Seventh") == 0 || chordName.compare("Minor Seventh") == 0 || chordName.compare("Dominant Seventh") == 0 || chordName.compare("Augmented Seventh") == 0) {
            cout << "Comprised of Root(" << chordInfoVector[5] << "), " << chordInfoVector[2] << "(" << chordInfoVector[6] << "), " << chordInfoVector[3] << "(" << chordInfoVector[7] << ")" << ", and " << chordInfoVector[4] << "(" << chordInfoVector[8] << ")" << endl;
        }
        else {
            cout << "Comprised of Root(" << chordInfoVector[5] << "), " << chordInfoVector[2] << "(" << chordInfoVector[6] << "), and " << chordInfoVector[3] << "(" << chordInfoVector[7] << ")" << endl;
        }
        
        //print fretboard with populated string vectors
        cout << "     __________________________________________________" << endl;
        cout << "E: ";
        printStrings(highE_String);
        cout << "B: ";
        printStrings(b_String);
        cout << "G: ";
        printStrings(g_String);
        cout << "D: ";
        printStrings(d_String);
        cout << "A: ";
        printStrings(a_String);
        cout << "E: ";
        printStrings(lowE_String);
        cout << "     ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯" << endl;
        cout << "                3       5       7       9          12" << endl;


        //loop to continue acceptting more chords
        while (true) {
            cout << endl << "Map Another Chord? [Y/N]: ";
            getline(cin, continueInput);
            if (continueInput == "N" || continueInput == "n") {
                keepGoing = false;
                break;
            } else if (continueInput == "Y" || continueInput == "y") {
                break;
            } else {
                cout << "Invalid Input. Please enter Y to continue or N to exit." << endl;
            }
        }
    }
    cout << "Thank You For Using!" << endl;
    return 0;
}
