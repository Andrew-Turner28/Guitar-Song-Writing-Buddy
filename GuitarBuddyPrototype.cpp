#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
using namespace std;

string getChordInfo(string chordName) {
    string chordInfo = "";
    // chordInfo Structure: [Type of Chord].[Root].[Type of 3rd/2nd/4th].[Type of 5th].[Type of 7th (if applicable)].[Note 1].[Note 2].[Note 3].[Note 4(if applicable)]
   
    //Major Chords Archive
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
    } 

    //Major Seventh Chords Archive
    else if(chordName.compare("Cmaj7") == 0) {
        chordInfo = "Major Seventh.Root.Major Third.Perfect Fifth.Major Seventh.C.E.G.B";
    } else if(chordName.compare("C#maj7") == 0 || chordName.compare("Dbmaj7") == 0) {
        chordInfo = "Major Seventh.Root.Major Third.Perfect Fifth.Major Seventh.C#/Db.F.G#/Ab.C";
    } else if(chordName.compare("Dmaj7") == 0) {
    chordInfo = "Major Seventh.Root.Major Third.Perfect Fifth.Major Seventh.D.F#/Gb.A.C#/Db";
    } else if(chordName.compare("D#maj7") == 0 || chordName.compare("Ebmaj7") == 0) {
        chordInfo = "Major Seventh.Root.Major Third.Perfect Fifth.Major Seventh.D#/Eb.G.A#/Bb.D";
    } else if(chordName.compare("Emaj7") == 0) {
        chordInfo = "Major Seventh.Root.Major Third.Perfect Fifth.Major Seventh.E.G#/Ab.B.D#/Eb";
    } else if(chordName.compare("Fmaj7") == 0) {
        chordInfo = "Major Seventh.Root.Major Third.Perfect Fifth.Major Seventh.F.A.C.E";
    } else if(chordName.compare("F#maj7") == 0 || chordName.compare("Gbmaj7") == 0) {
        chordInfo = "Major Seventh.Root.Major Third.Perfect Fifth.Major Seventh.F#/Gb.A#/Bb.C#/Db.F";
    } else if(chordName.compare("Gmaj7") == 0) {
        chordInfo = "Major Seventh.Root.Major Third.Perfect Fifth.Major Seventh.G.B.D.F#/Gb";
    } else if(chordName.compare("G#maj7") == 0 || chordName.compare("Abmaj7") == 0) {
        chordInfo = "Major Seventh.Root.Major Third.Perfect Fifth.Major Seventh.G#/Ab.C.Eb/G.F#/G";
    } else if(chordName.compare("Amaj7") == 0) {
        chordInfo = "Major Seventh.Root.Major Third.Perfect Fifth.Major Seventh.A.C#/Db.E.G#/Ab";
    } else if(chordName.compare("A#maj7") == 0 || chordName.compare("Bbmaj7") == 0) {
        chordInfo = "Major Seventh.Root.Major Third.Perfect Fifth.Major Seventh.A#/Bb.D.F.A";
    } else if(chordName.compare("Bmaj7") == 0) {
        chordInfo = "Major Seventh.Root.Major Third.Perfect Fifth.Major Seventh.B.D#/Eb.F#/Gb.A#/Bb";
    }
    
    //Minor Chords Archive
    else if(chordName.compare("Cm") == 0) {
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
    } 

    //Minor Seventh Chords Archive
    else if(chordName.compare("Cm7") == 0) {
        chordInfo = "Minor Seventh.Root.Minor Third.Perfect Fifth.Minor Seventh.C.Eb/G.D#/Eb.A#/Bb";
    } else if(chordName.compare("C#m7") == 0 || chordName.compare("Dbm7") == 0) {
        chordInfo = "Minor Seventh.Root.Minor Third.Perfect Fifth.Minor Seventh.C#/Db.E.G#/Ab.B";
    } else if(chordName.compare("Dm7") == 0) {
        chordInfo = "Minor Seventh.Root.Minor Third.Perfect Fifth.Minor Seventh.D.F.A.C";
    } else if(chordName.compare("D#m7") == 0 || chordName.compare("Ebm7") == 0) {
        chordInfo = "Minor Seventh.Root.Minor Third.Perfect Fifth.Minor Seventh.D#/Eb.F#/Gb.A#/Bb.C#/Db";
    } else if(chordName.compare("Em7") == 0) {
        chordInfo = "Minor Seventh.Root.Minor Third.Perfect Fifth.Minor Seventh.E.G.B.D";
    } else if(chordName.compare("Fm7") == 0) {
        chordInfo = "Minor Seventh.Root.Minor Third.Perfect Fifth.Minor Seventh.F.Ab/C.G#/Ab.D#/Eb";
    } else if(chordName.compare("F#m7") == 0 || chordName.compare("Gbm7") == 0) {
        chordInfo = "Minor Seventh.Root.Minor Third.Perfect Fifth.Minor Seventh.F#/Gb.A.C#/Db.E";
    } else if(chordName.compare("Gm7") == 0) {
        chordInfo = "Minor Seventh.Root.Minor Third.Perfect Fifth.Minor Seventh.G.Bb/D.A#/Bb.F";
    } else if(chordName.compare("G#m7") == 0 || chordName.compare("Abm7") == 0) {
        chordInfo = "Minor Seventh.Root.Minor Third.Perfect Fifth.Minor Seventh.G#/Ab.B/D#.C#/Db.F#/Gb";
    } else if(chordName.compare("Am7") == 0) {
        chordInfo = "Minor Seventh.Root.Minor Third.Perfect Fifth.Minor Seventh.A.C.E.G";
    } else if(chordName.compare("A#m7") == 0 || chordName.compare("Bbm7") == 0) {
        chordInfo = "Minor Seventh.Root.Minor Third.Perfect Fifth.Minor Seventh.A#/Bb.C#/Db.F.A#/Bb";
    } else if(chordName.compare("Bm7") == 0) {
        chordInfo = "Minor Seventh.Root.Minor Third.Perfect Fifth.Minor Seventh.B.D.F#/Gb.A";
    }

    //Dominant Seventh Chords Archive
    else if(chordName.compare("C7") == 0) {
        chordInfo = "Dominant Seventh.Root.Major Third.Perfect Fifth.Minor Seventh.C.E.G.A#/Bb";
    } else if(chordName.compare("C#7") == 0 || chordName.compare("Db7") == 0) {
        chordInfo = "Dominant Seventh.Root.Major Third.Perfect Fifth.Minor Seventh.C#/Db.F.G#/Ab.C/B";
    } else if(chordName.compare("D7") == 0) {
        chordInfo = "Dominant Seventh.Root.Major Third.Perfect Fifth.Minor Seventh.D.F#/Gb.A.C";
    } else if(chordName.compare("D#7") == 0 || chordName.compare("Eb7") == 0) {
        chordInfo = "Dominant Seventh.Root.Major Third.Perfect Fifth.Minor Seventh.D#/Eb.G.A#/Bb.C#/Db";
    } else if(chordName.compare("E7") == 0) {
        chordInfo = "Dominant Seventh.Root.Major Third.Perfect Fifth.Minor Seventh.E.G#/Ab.B.D";
    } else if(chordName.compare("F7") == 0) {
        chordInfo = "Dominant Seventh.Root.Major Third.Perfect Fifth.Minor Seventh.F.A.C.D#/Eb";
    } else if(chordName.compare("F#7") == 0 || chordName.compare("Gb7") == 0) {
        chordInfo = "Dominant Seventh.Root.Major Third.Perfect Fifth.Minor Seventh.F#/Gb.A#/Bb.C#/Db.E";
    } else if(chordName.compare("G7") == 0) {
        chordInfo = "Dominant Seventh.Root.Major Third.Perfect Fifth.Minor Seventh.G.B.D.F";
    } else if(chordName.compare("G#7") == 0 || chordName.compare("Ab7") == 0) {
        chordInfo = "Dominant Seventh.Root.Major Third.Perfect Fifth.Minor Seventh.G#/Ab.C.Eb/Gb.F#/Gb";
    } else if(chordName.compare("A7") == 0) {
        chordInfo = "Dominant Seventh.Root.Major Third.Perfect Fifth.Minor Seventh.A.C#/Db.E.G";
    } else if(chordName.compare("A#7") == 0 || chordName.compare("Bb7") == 0) {
        chordInfo = "Dominant Seventh.Root.Major Third.Perfect Fifth.Minor Seventh.A#/Bb.D.F.A";
    } else if(chordName.compare("B7") == 0) {
        chordInfo = "Dominant Seventh.Root.Major Third.Perfect Fifth.Minor Seventh.B.D#/Eb.F#/Gb.A";
    }
 
    //Diminished Chords Archive
    else if(chordName.compare("Cdim") == 0) {
        chordInfo = "Diminished.Root.Minor Third.Diminished Fifth.n/a.C.D#/Eb.F#/Gb.n/a";
    }else if(chordName.compare("C#dim") == 0 || chordName.compare("Dbdim") == 0) {
        chordInfo = "Diminished.Root.Minor Third.Diminished Fifth.n/a.C#/Db.E.G.n/a";
    } else if(chordName.compare("Ddim") == 0) {
        chordInfo = "Diminished.Root.Minor Third.Diminished Fifth.n/a.D.F.A#/Bb.n/a";
    } else if(chordName.compare("D#dim") == 0 || chordName.compare("Ebdim") == 0) {
        chordInfo = "Diminished.Root.Minor Third.Diminished Fifth.n/a.D#/Eb.F#/Gb.B.n/a";
    } else if(chordName.compare("Edim") == 0) {
        chordInfo = "Diminished.Root.Minor Third.Diminished Fifth.n/a.E.G.C#/Db.n/a";
    } else if(chordName.compare("Fdim") == 0) {
        chordInfo = "Diminished.Root.Minor Third.Diminished Fifth.n/a.F.G#/Ab.D.n/a";
    } else if(chordName.compare("F#dim") == 0 || chordName.compare("Gbdim") == 0) {
        chordInfo = "Diminished.Root.Minor Third.Diminished Fifth.n/a.F#/Gb.A.D#/Eb.n/a";
    } else if(chordName.compare("Gdim") == 0) {
        chordInfo = "Diminished.Root.Minor Third.Diminished Fifth.n/a.G.A#/Bb.E.n/a";
    } else if(chordName.compare("G#dim") == 0 || chordName.compare("Abdim") == 0) {
        chordInfo = "Diminished.Root.Minor Third.Diminished Fifth.n/a.G#/Ab.B.F#/Gb.n/a";
    } else if(chordName.compare("Adim") == 0) {
        chordInfo = "Diminished.Root.Minor Third.Diminished Fifth.n/a.A.C.G.n/a";
    } else if(chordName.compare("A#dim") == 0 || chordName.compare("Bbdim") == 0) {
        chordInfo = "Diminished.Root.Minor Third.Diminished Fifth.n/a.A#/Bb.C#/Db.G#/Ab.n/a";
    } else if(chordName.compare("Bdim") == 0) {
        chordInfo = "Diminished.Root.Minor Third.Diminished Fifth.n/a.B.D.F.n/a";
    }

    //Augmented Chords Archive
    else if(chordName.compare("Caug") == 0) {
        chordInfo = "Augmented.Root.Major Third.Augmented Fifth.n/a.C.E.G#/Ab.n/a";
    } else if(chordName.compare("C#aug") == 0 || chordName.compare("Dbaug") == 0) {
        chordInfo = "Augmented.Root.Major Third.Augmented Fifth.n/a.C#/Db.F.A.n/a";
    } else if(chordName.compare("Daug") == 0) {
        chordInfo = "Augmented.Root.Major Third.Augmented Fifth.n/a.D.F#/Gb.A#/Bb.n/a";
    } else if(chordName.compare("D#aug") == 0 || chordName.compare("Ebaug") == 0) {
        chordInfo = "Augmented.Root.Major Third.Augmented Fifth.n/a.D#/Eb.G.B.n/a";
    } else if(chordName.compare("Eaug") == 0) {
        chordInfo = "Augmented.Root.Major Third.Augmented Fifth.n/a.E.G#/Ab.C.n/a";
    } else if(chordName.compare("Faug") == 0) {
        chordInfo = "Augmented.Root.Major Third.Augmented Fifth.n/a.F.A.C#/Db.n/a";
    } else if(chordName.compare("F#aug") == 0 || chordName.compare("Gbaug") == 0) {
        chordInfo = "Augmented.Root.Major Third.Augmented Fifth.n/a.F#/Gb.A#/Bb.D.n/a";
    } else if(chordName.compare("Gaug") == 0) {
        chordInfo = "Augmented.Root.Major Third.Augmented Fifth.n/a.G.B.D#/Eb.n/a";
    } else if(chordName.compare("G#aug") == 0 || chordName.compare("Abaug") == 0) {
        chordInfo = "Augmented.Root.Major Third.Augmented Fifth.n/a.G#/Ab.C.E.n/a";
    } else if(chordName.compare("Aaug") == 0) {
        chordInfo = "Augmented.Root.Major Third.Augmented Fifth.n/a.A.C#/Db.F.n/a";
    } else if(chordName.compare("A#aug") == 0 || chordName.compare("Bbaug") == 0) {
        chordInfo = "Augmented.Root.Major Third.Augmented Fifth.n/a.A#/Bb.D.F#/Gb.n/a";
    } else if(chordName.compare("Baug") == 0) {
        chordInfo = "Augmented.Root.Major Third.Augmented Fifth.n/a.B.D#/Eb.G.n/a";
    }

    //Augmented Seventh Chords Archive
    else if(chordName.compare("Caug7") == 0) {
        chordInfo = "Augmented Seventh.Root.Major Third.Augmented Fifth.Minor Seventh.C.E.G#/Ab.A#/Bb";
    } else if(chordName.compare("C#aug7") == 0 || chordName.compare("Dbaug7") == 0) {
        chordInfo = "Augmented Seventh.Root.Major Third.Augmented Fifth.Minor Seventh.C#/Db.F.A.B";
    } else if(chordName.compare("Daug7") == 0) {
        chordInfo = "Augmented Seventh.Root.Major Third.Augmented Fifth.Minor Seventh.D.F#/Gb.A#/Bb.C";
    } else if(chordName.compare("D#aug7") == 0 || chordName.compare("Ebaug7") == 0) {
        chordInfo = "Augmented Seventh.Root.Major Third.Augmented Fifth.Minor Seventh.D#/Eb.G.B.C#/Db";
    } else if(chordName.compare("Eaug7") == 0) {
        chordInfo = "Augmented Seventh.Root.Major Third.Augmented Fifth.Minor Seventh.E.G#/Ab.C.D";
    } else if(chordName.compare("Faug7") == 0) {
        chordInfo = "Augmented Seventh.Root.Major Third.Augmented Fifth.Minor Seventh.F.A.C#/Db.D#/Eb";
    } else if(chordName.compare("F#aug7") == 0 || chordName.compare("Gbaug7") == 0) {
        chordInfo = "Augmented Seventh.Root.Major Third.Augmented Fifth.Minor Seventh.F#/Gb.A#/Bb.D.E";
    } else if(chordName.compare("Gaug7") == 0) {
        chordInfo = "Augmented Seventh.Root.Major Third.Augmented Fifth.Minor Seventh.G.B.D#/Eb.F";
    } else if(chordName.compare("G#aug7") == 0 || chordName.compare("Abaug7") == 0) {
        chordInfo = "Augmented Seventh.Root.Major Third.Augmented Fifth.Minor Seventh.G#/Ab.C.E.F#/Gb";
    } else if(chordName.compare("Aaug7") == 0) {
        chordInfo = "Augmented Seventh.Root.Major Third.Augmented Fifth.Minor Seventh.A.C#/Db.F.G";
    } else if(chordName.compare("A#aug7") == 0 || chordName.compare("Bbaug7") == 0) {
        chordInfo = "Augmented Seventh.Root.Major Third.Augmented Fifth.Minor Seventh.A#/Bb.D.F#/Gb.G#/Ab";
    } else if(chordName.compare("Baug7") == 0) {
        chordInfo = "Augmented Seventh.Root.Major Third.Augmented Fifth.Minor Seventh.B.D#/Eb.G.A";
    }

    //Suspended Second Chords Archive
    else if(chordName.compare("Csus2") == 0) {
        chordInfo = "Suspended Second.Root.Major Second.Perfect Fifth.n/a.C.D.G.n/a";
    } else if(chordName.compare("C#sus2") == 0) {
        chordInfo = "Suspended Second.Root.Major Second.Perfect Fifth.n/a.C#/Db.D#/Eb.G#/Ab.n/a";
    } else if(chordName.compare("Dsus2") == 0) {
        chordInfo = "Suspended Second.Root.Major Second.Perfect Fifth.n/a.D.E.A.n/a";
    } else if(chordName.compare("D#sus2") == 0) {
        chordInfo = "Suspended Second.Root.Major Second.Perfect Fifth.n/a.D#/Eb.F.A#/Bb.n/a";
    } else if(chordName.compare("D#sus2") == 0) {
        chordInfo = "Suspended Second.Root.Major Second.Perfect Fifth.n/a.D#/Eb.F.A#/Bb.n/a";
    } else if(chordName.compare("Esus2") == 0) {
        chordInfo = "Suspended Second.Root.Major Second.Perfect Fifth.n/a.E.F#/Gb.B.n/a";
    } else if(chordName.compare("Fsus2") == 0) {
        chordInfo = "Suspended Second.Root.Major Second.Perfect Fifth.n/a.F.G.C.n/a";
    } else if(chordName.compare("F#sus2") == 0) {
        chordInfo = "Suspended Second.Root.Major Second.Perfect Fifth.n/a.F#/Gb.G#/Ab.C#/Db.n/a";
    } else if(chordName.compare("Gsus2") == 0) {
        chordInfo = "Suspended Second.Root.Major Second.Perfect Fifth.n/a.G.A.D.n/a";
    } else if(chordName.compare("G#sus2") == 0) {
        chordInfo = "Suspended Second.Root.Major Second.Perfect Fifth.n/a.G#/Ab.A#/Bb.D#/Eb.n/a";
    } else if(chordName.compare("Asus2") == 0) {
        chordInfo = "Suspended Second.Root.Major Second.Perfect Fifth.n/a.A.B.E.n/a";
    } else if(chordName.compare("A#sus2") == 0) {
        chordInfo = "Suspended Second.Root.Major Second.Perfect Fifth.n/a.A#/Bb.C.F.n/a";
    } else if(chordName.compare("Bsus2") == 0) {
        chordInfo = "Suspended Second.Root.Major Second.Perfect Fifth.n/a.B.C#/Db.F#/Gb.n/a";
    }

    //Suspended Fourth Chords Archive
    else if(chordName.compare("Csus4") == 0) {
        chordInfo = "Suspended Fourth.Root.Perfect Fourth.Perfect Fifth.n/a.C.F.G.n/a";
    } else if(chordName.compare("C#sus4") == 0) {
        chordInfo = "Suspended Fourth.Root.Perfect Fourth.Perfect Fifth.n/a.C#/Db.F#/Gb.G#/Ab.n/a";
    } else if(chordName.compare("Dsus4") == 0) {
        chordInfo = "Suspended Fourth.Root.Perfect Fourth.Perfect Fifth.n/a.D.G.A.n/a";
    } else if(chordName.compare("D#sus4") == 0) {
        chordInfo = "Suspended Fourth.Root.Perfect Fourth.Perfect Fifth.n/a.D#/Eb.G#/Ab.A#/Bb.n/a";
    } else if(chordName.compare("Esus4") == 0) {
        chordInfo = "Suspended Fourth.Root.Perfect Fourth.Perfect Fifth.n/a.E.A.B.n/a";
    } else if(chordName.compare("Fsus4") == 0) {
        chordInfo = "Suspended Fourth.Root.Perfect Fourth.Perfect Fifth.n/a.F.A#/Bb.C.n/a";
    } else if(chordName.compare("F#sus4") == 0) {
        chordInfo = "Suspended Fourth.Root.Perfect Fourth.Perfect Fifth.n/a.F#/Gb.B.C#/Db.n/a";
    } else if(chordName.compare("Gsus4") == 0) {
        chordInfo = "Suspended Fourth.Root.Perfect Fourth.Perfect Fifth.n/a.G.C.D.n/a";
    } else if(chordName.compare("G#sus4") == 0) {
        chordInfo = "Suspended Fourth.Root.Perfect Fourth.Perfect Fifth.n/a.G#/Ab.C#/Db.D#/Eb.n/a";
    } else if(chordName.compare("Asus4") == 0) {
        chordInfo = "Suspended Fourth.Root.Perfect Fourth.Perfect Fifth.n/a.A.D.E.n/a";
    } else if(chordName.compare("A#sus4") == 0) {
        chordInfo = "Suspended Fourth.Root.Perfect Fourth.Perfect Fifth.n/a.A#/Bb.E.F.n/a";
    } else if(chordName.compare("Bsus4") == 0) {
        chordInfo = "Suspended Fourth.Root.Perfect Fourth.Perfect Fifth.n/a.B.E.F#/Gb.n/a";
    }

    //Else Case
    else {
        chordInfo = "Error";
    }

    return chordInfo;
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
                                                             
    cout << "Welcome to the Guitar Buddy!" << endl << endl;
    cout << "This program is compatible with " << endl;

    //runtime loop
    while (keepGoing) {
        while(validChordInput == false) {
            cout << "Please Input the Chord You'd Like to Map: ";
            cin >> chordInput;

            string testChordInfo = getChordInfo(chordInput);

            if(testChordInfo.compare("Error") == 0) {
                cout << endl << "Unrecognised Chord Input. Please check your formatting. Ex. C#m, Amaj, Em, Gaug7" << endl;
            }
            else {
                validChordInput = true;
            }
            
        }
        validChordInput = false;
        
        string chordInfo = getChordInfo(chordInput);

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
            cin >> continueInput;
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
