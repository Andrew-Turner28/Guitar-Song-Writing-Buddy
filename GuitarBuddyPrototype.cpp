#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
using namespace std;

string getChordInfo(string chordName) {
    string chordInfo = "";
    // chordInfo Structure: [Type of Chord].[Root].[Type of 3rd/2nd/4th].[Type of 5th].[Type of 7th (if applicable)].[Note 1].[Note 2].[Note 3].[Note 4(if applicable)]
    if(chordName.compare("Cmaj") == 0) {
    chordInfo = "Major.Root.Major Third.Perfect Fifth.n/a.C.E.G.n/a";
    } else if(chordName.compare("C#maj") == 0 || chordName.compare("Dbmaj") == 0) {
        chordInfo = "Major.Root.Major Third.Perfect Fifth.n/a.C#/Db.F.G#/Ab.n/a";
    } else if(chordName.compare("Dmaj") == 0) {
        chordInfo = "Major.Root.Major Third.Perfect Fifth.n/a.D.F#/Gb.A.n/a";
    } else if(chordName.compare("D#maj") == 0 || chordName.compare("Ebmaj") == 0) {
        chordInfo = "Major.Root.Major Third.Perfect Fifth.n/a.D#/Eb.G.A#/Bb.n/a";
    } else if(chordName.compare("Emaj") == 0) {
        chordInfo = "Major.Root.Major Third.Perfect Fifth.n/a.E.G#/Ab.B.n/a";
    } else if(chordName.compare("Fmaj") == 0) {
        chordInfo = "Major.Root.Major Third.Perfect Fifth.n/a.F.A.C.n/a";
    } else if(chordName.compare("F#maj") == 0 || chordName.compare("Gbmaj") == 0) {
        chordInfo = "Major.Root.Major Third.Perfect Fifth.n/a.F#/Gb.A#/Bb.C#/Db.n/a";
    } else if(chordName.compare("Gmaj") == 0) {
        chordInfo = "Major.Root.Major Third.Perfect Fifth.n/a.G.B.D.n/a";
    } else if(chordName.compare("G#maj") == 0 || chordName.compare("Abmaj") == 0) {
        chordInfo = "Major.Root.Major Third.Perfect Fifth.n/a.G#/Ab.C.D#/Eb.n/a";
    } else if(chordName.compare("Amaj") == 0) {
        chordInfo = "Major.Root.Major Third.Perfect Fifth.n/a.A.C#/Db.E.n/a";
    } else if(chordName.compare("A#maj") == 0 || chordName.compare("Bbmaj") == 0) {
        chordInfo = "Major.Root.Major Third.Perfect Fifth.n/a.A#/Bb.D.F.n/a";
    } else if(chordName.compare("Bmaj") == 0) {
        chordInfo = "Major.Root.Major Third.Perfect Fifth.n/a.B.D#/Eb.F#/Gb.n/a";
    } else if(chordName.compare("Cm") == 0) {
        chordInfo = "Minor.Root.Minor Third.Perfect Fifth.n/a.C.Eb/G.G.n/a";
    } else if(chordName.compare("C#m") == 0 || chordName.compare("Dbm") == 0) {
        chordInfo = "Minor.Root.Minor Third.Perfect Fifth.n/a.C#/Db.E.G#/Ab.n/a";
    } else if(chordName.compare("Dm") == 0) {
        chordInfo = "Minor.Root.Minor Third.Perfect Fifth.n/a.D.F.A.n/a";
    } else if(chordName.compare("D#m") == 0 || chordName.compare("Ebm") == 0) {
        chordInfo = "Minor.Root.Minor Third.Perfect Fifth.n/a.D#/Eb.F#/Gb.A#/Bb.n/a";
    } else if(chordName.compare("Em") == 0) {
        chordInfo = "Minor.Root.Minor Third.Perfect Fifth.n/a.E.G.B.n/a";
    } else if(chordName.compare("Fm") == 0) {
        chordInfo = "Minor.Root.Minor Third.Perfect Fifth.n/a.F.Ab/C.C.n/a";
    } else if(chordName.compare("F#m") == 0 || chordName.compare("Gbm") == 0) {
        chordInfo = "Minor.Root.Minor Third.Perfect Fifth.n/a.F#/Gb.A.C#/Db.n/a";
    } else if(chordName.compare("Gm") == 0) {
        chordInfo = "Minor.Root.Minor Third.Perfect Fifth.n/a.G.Bb/D.D.n/a";
    } else if(chordName.compare("G#m") == 0 || chordName.compare("Abm") == 0) {
        chordInfo = "Minor.Root.Minor Third.Perfect Fifth.n/a.G#/Ab.B.D#/Eb.n/a";
    } else if(chordName.compare("Am") == 0) {
        chordInfo = "Minor.Root.Minor Third.Perfect Fifth.n/a.A.C.E.n/a";
    } else if(chordName.compare("A#m") == 0 || chordName.compare("Bbm") == 0) {
        chordInfo = "Minor.Root.Minor Third.Perfect Fifth.n/a.A#/Bb.C#/Db.F.n/a";
    } else if(chordName.compare("Bm") == 0) {
        chordInfo = "Minor.Root.Minor Third.Perfect Fifth.n/a.B.D.F#/Gb.n/a";
    } else {
        chordInfo = "Error";
    }

    return chordInfo;
}

vector<string> populateGuitarString(string chordInfo, string stringName) {
    vector<string> parts;
    istringstream iss(chordInfo);
    string part;
    while (getline(iss, part, '.')) {
        parts.push_back(part);
    }
    string root = parts[5], third = parts[6], fifth = parts[7];

    map<string, vector<string>> masterArrays;
    masterArrays["highE"] = {"E", "F", "F#/Gb", "G", "G#/Ab", "A", "A#/Bb", "B", "C", "C#/Db", "D", "D#/Eb", "E"};
    masterArrays["B"] = {"B", "C", "C#/Db", "D", "D#/Eb", "E", "F", "F#/Gb", "G", "G#/Ab", "A", "A#/Bb", "B"};
    masterArrays["G"] = {"G", "G#/Ab", "A", "A#/Bb", "B", "C", "C#/Db", "D", "D#/Eb", "E", "F", "F#/Gb", "G"};
    masterArrays["D"] = {"D", "D#/Eb", "E", "F", "F#/Gb", "G", "G#/Ab", "A", "A#/Bb", "B", "C", "C#/Db", "D"};
    masterArrays["A"] = {"A", "A#/Bb", "B", "C", "C#/Db", "D", "D#/Eb", "E", "F", "F#/Gb", "G", "G#/Ab", "A"};
    masterArrays["lowE"] = {"E", "F", "F#/Gb", "G", "G#/Ab", "A", "A#/Bb", "B", "C", "C#/Db", "D", "D#/Eb", "E"};

    vector<string> populatedStrings(13, "-");
    populatedStrings[0] = " ";

    if(masterArrays.find(stringName) != masterArrays.end()) {
        const vector<string>& masterArray = masterArrays[stringName];
        for(size_t i = 0; i < masterArray.size(); ++i) {
            if(masterArray[i] == root) populatedStrings[i] = "R";
            else if(masterArray[i] == third) populatedStrings[i] = "3";
            else if(masterArray[i] == fifth) populatedStrings[i] = "5";
        }
    }
    return populatedStrings;
}

void printStrings(const vector<string>& stringNotes) {
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

    while (keepGoing) {
        while(validChordInput == false) {
            cout << "Please Input Chord: ";
            cin >> chordInput;

            string testChordInfo = getChordInfo(chordInput);

            if(testChordInfo.compare("Error") == 0) {
                cout << endl << "Invalid Chord Input. Please check your formatting. Ex. C#m, Amaj, Em" << endl;
            }
            else {
                validChordInput = true;
            }
            
        }
        validChordInput = false;
        
        string chordInfo = getChordInfo(chordInput);

        vector<string> parts;
        istringstream iss(chordInfo);
        string part;
        while (getline(iss, part, '.')) {
            parts.push_back(part);
        }

        vector<string> highE_String = populateGuitarString(chordInfo, "highE");
        vector<string> b_String = populateGuitarString(chordInfo, "B");
        vector<string> g_String = populateGuitarString(chordInfo, "G");
        vector<string> d_String = populateGuitarString(chordInfo, "D");
        vector<string> a_String = populateGuitarString(chordInfo, "A");
        vector<string> lowE_String = populateGuitarString(chordInfo, "lowE");

        cout << endl << chordInput << " Chord: " << endl;
        cout << "Comprised of Root(" << parts[5] << "), " << parts[2] << "(" << parts[6] << "), and " << parts[3] << "(" << parts[7] << ")" << endl;
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

        while (true) {
            cout << "Map Another Chord? [Y/N]: ";
            cin >> continueInput;
            if (continueInput == "N" || continueInput == "n") {
                keepGoing = false;
                break;
            } else if (continueInput == "Y" || continueInput == "y") {
                break;
            } else {
                cout << "Invalid Input. Please enter Y for yes or N for no." << endl;
            }
        }
    }
    cout << "Thank You For Using." << endl;
    return 0;
}
