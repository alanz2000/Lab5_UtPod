/* utPod_driver.cpp
Demo Driver for the UtPod.

Roger Priebe
EE 312 10/16/18

This is a basic driver for the UtPod.

You will want to do more complete testing.

*/
#include <cstdlib>
#include <iostream>
#include "Song.h"
#include "UtPod.h"

using namespace std;

int main(int argc, char *argv[])
{
    UtPod t;

    t.showSongList();

    Song s1("Beatles", "Hey Jude1", 4);
    int result = t.addSong(s1); // this doesn't work rn
    cout << "result = " << result << endl << endl;

    t.showSongList();

    Song s2("Beatles", "Hey Jude2", 5);
    result = t.addSong(s2);
    cout << "result = " << result << endl << endl;

    t.showSongList();

    Song s3("Beatles", "Hey Jude3", 6);
    result = t.addSong(s3);
    cout << "result = " << result << endl << endl;

    Song s4("Beatles", "Hey Jude4", 7);
    result = t.addSong(s4);
    cout << "result = " << result << endl << endl;

    Song s5("Beatles", "Hey Jude5", 241);
    result = t.addSong(s5);
    cout << "add result = " << result << endl << endl;

    t.showSongList();

    cout << "SHUFFLING" << endl << endl;


    t.shuffle();
    t.showSongList();
    cout << endl << endl;

    t.shuffle();
    t.showSongList();
    cout << endl << endl;

    t.shuffle();
    t.showSongList();
    cout << endl << endl;

    t.shuffle();
    t.showSongList();
    cout << endl << endl;

    t.shuffle();
    t.showSongList();
    cout << endl << endl;

    t.shuffle();
    t.showSongList();
    cout << endl << endl;

    t.shuffle();
    t.showSongList();
    cout << endl << endl;

    t.shuffle();
    t.showSongList();
    cout << endl << endl;


    cout << "SORTING" << endl << endl;

    t.sortSongList();
    t.showSongList();
    cout << endl << endl;


    cout << "memory = " << t.getRemainingMemory() << endl << endl;


}