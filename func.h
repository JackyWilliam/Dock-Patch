//
//  func.h
//  123
//
//  Created by Raynor's MacBook Pro on 2022/2/22.
//
/*
#ifndef func_h
#define func_h


#endif func_h */
#include <iostream>
#include <ctime>
#include <fstream>
#include <unistd.h>
#include <cstdlib>

void timeShowing (int n);
void timeShowing_En (int n);
void functionOfMain_Cn (int n);
void functionOfMain_En (int n);
void autoRead(int n);
void autoSave(int n);
void reCallFunction (int n);
void reCallFunction_En (int n);

using namespace std;

char readFile_1, readFile_2;

void functionOfMain_En (int n) {
    char a, b, c;
    int d, e;
    timeShowing_En(1);
    sleep (1);
    cout << "Choose the function which you want to use:" << endl;
    cout << "a. Dock Function" << endl;
    cout << "b. Close dock Function" << endl;
    cout << "c. Close" << endl;
    cout << "Enter Here: ";
    cin >> a;
    switch (a) {
        case 'a':
            cout << "\n\nChoose the function which you want to use:" << endl;
            cout << "a. Show only active apps (try not to use them)" << endl;
            cout << "b. Add an application delimiter" << endl;
            cout << "c. Disable the automatic delay hiding function" << endl;
            cout << "d. Enable the hidden \"suck\" animation" << endl;
            cout << "e. Back" << endl;
            cout << "Enter Here";
            cin >> b;
            switch (b) {
                case 'a':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'A':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'b':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'B':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'e':
                    cout << endl << endl;
                    reCallFunction_En(1);
                case 'E':
                    cout << endl << endl;
                    reCallFunction_En(1);
                default:
                    cout << "Wrong input!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
            }
            break;
        case 'A':
            cout << "\n\nChoose the function which you want to use:" << endl;
            cout << "a. Show only active apps (try not to use them)" << endl;
            cout << "b. Add an application delimiter" << endl;
            cout << "c. Disable the automatic delay hiding function" << endl;
            cout << "d. Enable the hidden \"suck\" animation" << endl;
            cout << "e. Back" << endl;
            cout << "Enter Here";
            cin >> b;
            switch (b) {
                case 'a':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'A':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'b':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'B':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'e':
                    cout << endl << endl;
                    reCallFunction_En(1);
                case 'E':
                    cout << endl << endl;
                    reCallFunction_En(1);
                default:
                    cout << "Wrong input!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
            }
            break;
        case 'b':
            cout << "\n\nChoose the function which you want to close: " << endl;
            cout << "a. Disable \"show only active apps (try not to use them)\"" << endl;
            cout << "b. Delete application delimiter" << endl;
            cout << "c. Recovery automatic delay" << endl;
            cout << "d. Recovery to magic animation" << endl;
            cout << "e. Restore the Dock to factory Settings" << endl;
            cout << "f. Back" << endl;
            cout << "Enter Here: ";
            cin >> c;
            switch (c) {
                case 'a':
                    cout << "To use this feature, disable open Application Display Indicators under System Preferences > Docking (type 1 to continue)" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "Done!!!\n" << endl;
                        reCallFunction_En(1);
                    }else{
                        cout << "Back to main menu.\n" << endl;
                        reCallFunction_En(1);
                    }
                    break;
                case 'A':
                    cout << "To use this feature, disable open Application Display Indicators under System Preferences > Docking (type 1 to continue)" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "Done!!!\n" << endl;
                        reCallFunction_En(1);
                    }else{
                        cout << "Back to main menu.\n" << endl;
                        reCallFunction_En(1);
                    }
                    break;
                case 'b':
                    cout << "To remove the separator, simply click and drag it out of the base, or two-finger click (hold Ctrl key and click) and select \"Remove from Dock\"" << endl;
                    cout << "Press any key and then Enter to confirm that you have continued" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                case 'B':
                    cout << "To remove the separator, simply click and drag it out of the base, or two-finger click (hold Ctrl key and click) and select \"Remove from Dock\"" << endl;
                    cout << "Press any key and then Enter to confirm that you have continued" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'e':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'E':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'f':
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                case 'F':
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                default:
                    cout << "Wrong input!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
            }
            break;
        case 'B':
            cout << "\n\nChoose the function which you want to close: " << endl;
            cout << "a. Disable \"show only active apps (try not to use them)\"" << endl;
            cout << "b. Delete application delimiter" << endl;
            cout << "c. Recovery automatic delay" << endl;
            cout << "d. Recovery to magic animation" << endl;
            cout << "e. Restore the Dock to factory Settings" << endl;
            cout << "f. Back" << endl;
            cout << "Enter Here: ";
            cin >> c;
            switch (c) {
                case 'a':
                    cout << "To use this feature, disable open Application Display Indicators under System Preferences > Docking (type 1 to continue)" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "Done!!!\n" << endl;
                        reCallFunction_En(1);
                    }else{
                        cout << "Back to main menu.\n" << endl;
                        reCallFunction_En(1);
                    }
                    break;
                case 'A':
                    cout << "To use this feature, disable open Application Display Indicators under System Preferences > Docking (type 1 to continue)" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "Done!!!\n" << endl;
                        reCallFunction_En(1);
                    }else{
                        cout << "Back to main menu.\n" << endl;
                        reCallFunction_En(1);
                    }
                    break;
                case 'b':
                    cout << "To remove the separator, simply click and drag it out of the base, or two-finger click (hold Ctrl key and click) and select \"Remove from Dock\"" << endl;
                    cout << "Press any key and then Enter to confirm that you have continued" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                case 'B':
                    cout << "To remove the separator, simply click and drag it out of the base, or two-finger click (hold Ctrl key and click) and select \"Remove from Dock\"" << endl;
                    cout << "Press any key and then Enter to confirm that you have continued" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'e':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'E':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'f':
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                case 'F':
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                default:
                    cout << "Wrong input!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
            }
            break;
        case 'c':
            cout << "Close this patch. Bye" << endl;
            break;
        case 'C':
            cout << "Close this patch. Bye" << endl;
            break;
        default:
            cout << "Wrong input!!!\n" << endl;
            reCallFunction_En(1);
            break;
    }
}

void functionOfMain_Cn (int n) {
    char a, b, c;
    int d, e;
    timeShowing(1);
    sleep (1);
    cout << "?????????????????????????????????" << endl;
    cout << "a. dock??????" << endl;
    cout << "b. ??????dock??????" << endl;
    cout << "c. ??????" << endl;
    cout << "???????????????";
    cin >> a;
    switch (a) {
        case 'a':
            cout << "\n\n?????????????????????????????????" << endl;
            cout << "a. ????????????????????????????????????????????????" << endl;
            cout << "b. ???????????????????????????" << endl;
            cout << "c. ????????????????????????" << endl;
            cout << "d. ?????????????????????????????????" << endl;
            cout << "e. ??????" << endl;
            cout << "???????????????";
            cin >> b;
            switch (b) {
                case 'a':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'A':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'b':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'B':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'e':
                    cout << endl << endl;
                    reCallFunction(1);
                case 'E':
                    cout << endl << endl;
                    reCallFunction(1);
                default:
                    cout << "???????????????\n" << endl;
                    reCallFunction(1);
                    break;
            }
            break;
        case 'A':
            cout << "\n\n?????????????????????????????????" << endl;
            cout << "a. ????????????????????????????????????????????????" << endl;
            cout << "b. ???????????????????????????" << endl;
            cout << "c. ????????????????????????" << endl;
            cout << "d. ?????????????????????????????????" << endl;
            cout << "e. ??????" << endl;
            cout << "???????????????";
            cin >> b;
            switch (b) {
                case 'a':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'A':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'b':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'B':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'e':
                    cout << endl << endl;
                    reCallFunction(1);
                case 'E':
                    cout << endl << endl;
                    reCallFunction(1);
                default:
                    cout << "???????????????\n" << endl;
                    reCallFunction(1);
                    break;
            }
            break;
        case 'b':
            cout << "\n\n?????????????????????????????????" << endl;
            cout << "a. ??????????????????????????????????????????????????????" << endl;
            cout << "b. ???????????????????????????" << endl;
            cout << "c. ??????????????????" << endl;
            cout << "d. ?????????????????????" << endl;
            cout << "e. ??????dock????????????" << endl;
            cout << "f. ??????" << endl;
            cout << "???????????????";
            cin >> c;
            switch (c) {
                case 'a':
                    cout << "????????????????????????????????????????????????????????????>???????????????????????? ??????????????????????????????????????????????????????1????????????" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "????????????\n" << endl;
                        reCallFunction(1);
                    }else{
                        cout << "???????????????\n" << endl;
                        reCallFunction(1);
                    }
                    break;
                case 'A':
                    cout << "????????????????????????????????????????????????????????????>???????????????????????? ??????????????????????????????????????????????????????1????????????" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "????????????\n" << endl;
                        reCallFunction(1);
                    }else{
                        cout << "???????????????\n" << endl;
                        reCallFunction(1);
                    }
                    break;
                case 'b':
                    cout << "?????????????????????????????????????????????????????????????????????????????????Ctrl??????????????????????????????????????????????????????" << endl;
                    cout << "?????????????????????????????????????????????" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                case 'B':
                    cout << "?????????????????????????????????????????????????????????????????????????????????Ctrl??????????????????????????????????????????????????????" << endl;
                    cout << "?????????????????????????????????????????????" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'e':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'E':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'f':
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                case 'F':
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                default:
                    cout << "???????????????\n" << endl;
                    reCallFunction(1);
                    break;
            }
            break;
        case 'B':
            cout << "\n\n?????????????????????????????????" << endl;
            cout << "a. ??????????????????????????????????????????????????????" << endl;
            cout << "b. ???????????????????????????" << endl;
            cout << "c. ??????????????????" << endl;
            cout << "d. ?????????????????????" << endl;
            cout << "e. ??????dock????????????" << endl;
            cout << "f. ??????" << endl;
            cout << "???????????????";
            cin >> c;
            switch (c) {
                case 'a':
                    cout << "????????????????????????????????????????????????????????????>???????????????????????? ??????????????????????????????????????????????????????1????????????" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "????????????\n" << endl;
                        reCallFunction(1);
                    }else{
                        cout << "???????????????\n" << endl;
                        reCallFunction(1);
                    }
                    break;
                case 'A':
                    cout << "????????????????????????????????????????????????????????????>???????????????????????? ??????????????????????????????????????????????????????1????????????" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "????????????\n" << endl;
                        reCallFunction(1);
                    }else{
                        cout << "???????????????\n" << endl;
                        reCallFunction(1);
                    }
                    break;
                case 'b':
                    cout << "?????????????????????????????????????????????????????????????????????????????????Ctrl??????????????????????????????????????????????????????" << endl;
                    cout << "?????????????????????????????????????????????" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                case 'B':
                    cout << "?????????????????????????????????????????????????????????????????????????????????Ctrl??????????????????????????????????????????????????????" << endl;
                    cout << "?????????????????????????????????????????????" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'e':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'E':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'f':
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                case 'F':
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                default:
                    cout << "???????????????\n" << endl;
                    reCallFunction(1);
                    break;
            }
            break;
        case 'c':
            cout << "????????????????????????" << endl;
            break;
        case 'C':
            cout << "????????????????????????" << endl;
            break;
        default:
            cout << "???????????????\n" << endl;
            reCallFunction(1);
            break;
    }
}

void timeShowing (int n) {
    time_t now;
    struct tm *timenow;
    time (&now);
    timenow = localtime(&now);
    cout << endl << "?????????" << asctime(timenow);
    cout << "???????????????\n" << endl;
}

void timeShowing_En (int n) {
    time_t now;
    struct tm *timenow;
    time (&now);
    timenow = localtime(&now);
    cout << endl << "Noe is " << asctime(timenow);
    cout << "Welcome to use!\n" << endl;
}

void autoSave(int n) {
    int i, b;
    char a;

    cout << "????????????????????????????????????" << endl;
    cout << "Which language system do you want to choose" << endl;
    cout << "A. ??????    B. English" << endl;
    cout << "????????????????????????????????????" << endl;
    cout << "Please choose the language system which you want to use: ";
    cin >> a;
    switch (a) {
        case 'A':
            i = 1;
            b = 1;
            break;
        case 'B':
            i = 2;
            b = 1;
            break;
        case 'a':
            i = 1;
            b = 1;
            break;
        case 'b':
            i = 2;
            b = 1;
            break;
    }

    ofstream OutFile;
    ofstream OutFile2;

    OutFile.open("/Users/raynor/Documents/data1.txt");   // File location and create a txt file
    //  It can be: OutFile.open("/file location/Test1.txt");
    OutFile2.open("/Users/raynor/Documents/dtat2.txt");  // File location and create a txt file
    //  It can be: OutFile.open(" /file location/Test2.txt");
    OutFile << i;
    OutFile2 << b;

    OutFile.close();
    OutFile2.close();
    
    autoRead(1);
}

void autoRead(int n) {
    int data;
    int temp;
    
    
    
    ifstream readFile("/Users/raynor/Documents/data1.txt");   // File location and read
    //  It can be: ifstream readFile("/file location/Test1.txt");
    ifstream readFile2("/Users/raynor/Documents/dtat2.txt");  // File location and read
    //  It can be: ifstream readFile("/file location/Test2.txt");
    readFile >> temp;
    readFile2 >> data;

    int a = temp;
    int b = data;

    readFile .close();
    
    if (b == 1) {
        if (a == 1) {
            functionOfMain_Cn(1);
        }  else if (a == 2){
            functionOfMain_En(1); // English Vis
        } else {
            cout << endl << "Cannot find files, please re-set!" << endl;
            autoSave(1);
        }
    } else {
        cout << endl << "Cannot find files, please re-set!" << endl;
        autoSave(1);
    }
}

void reCallFunction (int n) {
    char a, b, c;
    int d, e;
    timeShowing(1);
    sleep (1);
    cout << "?????????????????????????????????" << endl;
    cout << "a. dock??????" << endl;
    cout << "b. ??????dock??????" << endl;
    cout << "c. ??????" << endl;
    cout << "???????????????";
    cin >> a;
    switch (a) {
        case 'a':
            cout << "\n\n?????????????????????????????????" << endl;
            cout << "a. ????????????????????????????????????????????????" << endl;
            cout << "b. ???????????????????????????" << endl;
            cout << "c. ????????????????????????" << endl;
            cout << "d. ?????????????????????????????????" << endl;
            cout << "e. ??????" << endl;
            cout << "???????????????";
            cin >> b;
            switch (b) {
                case 'a':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'A':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'b':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'B':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'e':
                    cout << endl << endl;
                    reCallFunction(1);
                case 'E':
                    cout << endl << endl;
                    reCallFunction(1);
                default:
                    cout << "???????????????\n" << endl;
                    reCallFunction(1);
                    break;
            }
            break;
        case 'A':
            cout << "\n\n?????????????????????????????????" << endl;
            cout << "a. ????????????????????????????????????????????????" << endl;
            cout << "b. ???????????????????????????" << endl;
            cout << "c. ????????????????????????" << endl;
            cout << "d. ?????????????????????????????????" << endl;
            cout << "e. ??????" << endl;
            cout << "???????????????";
            cin >> b;
            switch (b) {
                case 'a':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'A':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'b':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'B':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'e':
                    cout << endl << endl;
                    reCallFunction(1);
                case 'E':
                    cout << endl << endl;
                    reCallFunction(1);
                default:
                    cout << "???????????????\n" << endl;
                    reCallFunction(1);
                    break;
            }
            break;
        case 'b':
            cout << "\n\n?????????????????????????????????" << endl;
            cout << "a. ??????????????????????????????????????????????????????" << endl;
            cout << "b. ???????????????????????????" << endl;
            cout << "c. ??????????????????" << endl;
            cout << "d. ?????????????????????" << endl;
            cout << "e. ??????dock????????????" << endl;
            cout << "f. ??????" << endl;
            cout << "???????????????";
            cin >> c;
            switch (c) {
                case 'a':
                    cout << "????????????????????????????????????????????????????????????>???????????????????????? ??????????????????????????????????????????????????????1????????????" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "????????????\n" << endl;
                        reCallFunction(1);
                    }else{
                        cout << "???????????????\n" << endl;
                        reCallFunction(1);
                    }
                    break;
                case 'A':
                    cout << "????????????????????????????????????????????????????????????>???????????????????????? ??????????????????????????????????????????????????????1????????????" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "????????????\n" << endl;
                        reCallFunction(1);
                    }else{
                        cout << "???????????????\n" << endl;
                        reCallFunction(1);
                    }
                    break;
                case 'b':
                    cout << "?????????????????????????????????????????????????????????????????????????????????Ctrl??????????????????????????????????????????????????????" << endl;
                    cout << "?????????????????????????????????????????????" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                case 'B':
                    cout << "?????????????????????????????????????????????????????????????????????????????????Ctrl??????????????????????????????????????????????????????" << endl;
                    cout << "?????????????????????????????????????????????" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'e':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'E':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'f':
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                case 'F':
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                default:
                    cout << "???????????????\n" << endl;
                    reCallFunction(1);
                    break;
            }
            break;
        case 'B':
            cout << "\n\n?????????????????????????????????" << endl;
            cout << "a. ??????????????????????????????????????????????????????" << endl;
            cout << "b. ???????????????????????????" << endl;
            cout << "c. ??????????????????" << endl;
            cout << "d. ?????????????????????" << endl;
            cout << "e. ??????dock????????????" << endl;
            cout << "f. ??????" << endl;
            cout << "???????????????";
            cin >> c;
            switch (c) {
                case 'a':
                    cout << "????????????????????????????????????????????????????????????>???????????????????????? ??????????????????????????????????????????????????????1????????????" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "????????????\n" << endl;
                        reCallFunction(1);
                    }else{
                        cout << "???????????????\n" << endl;
                        reCallFunction(1);
                    }
                    break;
                case 'A':
                    cout << "????????????????????????????????????????????????????????????>???????????????????????? ??????????????????????????????????????????????????????1????????????" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "????????????\n" << endl;
                        reCallFunction(1);
                    }else{
                        cout << "???????????????\n" << endl;
                        reCallFunction(1);
                    }
                    break;
                case 'b':
                    cout << "?????????????????????????????????????????????????????????????????????????????????Ctrl??????????????????????????????????????????????????????" << endl;
                    cout << "?????????????????????????????????????????????" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                case 'B':
                    cout << "?????????????????????????????????????????????????????????????????????????????????Ctrl??????????????????????????????????????????????????????" << endl;
                    cout << "?????????????????????????????????????????????" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'e':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'E':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "????????????\n" << endl;
                    reCallFunction(1);
                    break;
                case 'f':
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                case 'F':
                    cout << endl << endl;
                    reCallFunction(1);
                    break;
                default:
                    cout << "???????????????\n" << endl;
                    reCallFunction(1);
                    break;
            }
            break;
        case 'c':
            cout << "????????????????????????" << endl;
            break;
        case 'C':
            cout << "????????????????????????" << endl;
            break;
        default:
            cout << "???????????????\n" << endl;
            reCallFunction(1);
            break;
    }
}

void reCallFunction_En (int n) {
    char a, b, c;
    int d, e;
    cout << "Choose the function which you want to use:" << endl;
    cout << "a. Dock Function" << endl;
    cout << "b. Close dock Function" << endl;
    cout << "c. Close" << endl;
    cout << "Enter Here: ";
    cin >> a;
    switch (a) {
        case 'a':
            cout << "\n\nChoose the function which you want to use:" << endl;
            cout << "a. Show only active apps (try not to use them)" << endl;
            cout << "b. Add an application delimiter" << endl;
            cout << "c. Disable the automatic delay hiding function" << endl;
            cout << "d. Enable the hidden \"suck\" animation" << endl;
            cout << "e. Back" << endl;
            cout << "Enter Here:";
            cin >> b;
            switch (b) {
                case 'a':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'A':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'b':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'B':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'e':
                    cout << endl << endl;
                    reCallFunction_En(1);
                case 'E':
                    cout << endl << endl;
                    reCallFunction_En(1);
                default:
                    cout << "Wrong input!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
            }
            break;
        case 'A':
            cout << "\n\nChoose the function which you want to use:" << endl;
            cout << "a. Show only active apps (try not to use them)" << endl;
            cout << "b. Add an application delimiter" << endl;
            cout << "c. Disable the automatic delay hiding function" << endl;
            cout << "d. Enable the hidden \"suck\" animation" << endl;
            cout << "e. Back" << endl;
            cout << "Enter Here";
            cin >> b;
            switch (b) {
                case 'a':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'A':
                    system ("defaults write com.apple.dock static-only -bool TRUE; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'b':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'B':
                    system ("defaults write com.apple.dock persistent-apps -array-add '{\"tile-type\"=\"spacer-tile\";}'; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En (1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect suck; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'e':
                    cout << endl << endl;
                    reCallFunction_En(1);
                case 'E':
                    cout << endl << endl;
                    reCallFunction_En(1);
                default:
                    cout << "Wrong input!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
            }
            break;
        case 'b':
            cout << "\n\nChoose the function which you want to close: " << endl;
            cout << "a. Disable \"show only active apps (try not to use them)\"" << endl;
            cout << "b. Delete application delimiter" << endl;
            cout << "c. Recovery automatic delay" << endl;
            cout << "d. Recovery to magic animation" << endl;
            cout << "e. Restore the Dock to factory Settings" << endl;
            cout << "f. Back" << endl;
            cout << "Enter Here: ";
            cin >> c;
            switch (c) {
                case 'a':
                    cout << "To use this feature, disable open Application Display Indicators under System Preferences > Docking (type 1 to continue)" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "Done!!!\n" << endl;
                        reCallFunction_En(1);
                    }else{
                        cout << "Back to main menu.\n" << endl;
                        reCallFunction_En(1);
                    }
                    break;
                case 'A':
                    cout << "To use this feature, disable open Application Display Indicators under System Preferences > Docking (type 1 to continue)" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "Done!!!\n" << endl;
                        reCallFunction_En(1);
                    }else{
                        cout << "Back to main menu.\n" << endl;
                        reCallFunction_En(1);
                    }
                    break;
                case 'b':
                    cout << "To remove the separator, simply click and drag it out of the base, or two-finger click (hold Ctrl key and click) and select \"Remove from Dock\"" << endl;
                    cout << "Press any key and then Enter to confirm that you have continued" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                case 'B':
                    cout << "To remove the separator, simply click and drag it out of the base, or two-finger click (hold Ctrl key and click) and select \"Remove from Dock\"" << endl;
                    cout << "Press any key and then Enter to confirm that you have continued" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'e':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'E':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'f':
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                case 'F':
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                default:
                    cout << "Wrong input!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
            }
            break;
        case 'B':
            cout << "\n\nChoose the function which you want to close: " << endl;
            cout << "a. Disable \"show only active apps (try not to use them)\"" << endl;
            cout << "b. Delete application delimiter" << endl;
            cout << "c. Recovery automatic delay" << endl;
            cout << "d. Recovery to magic animation" << endl;
            cout << "e. Restore the Dock to factory Settings" << endl;
            cout << "f. Back" << endl;
            cout << "Enter Here: ";
            cin >> c;
            switch (c) {
                case 'a':
                    cout << "To use this feature, disable open Application Display Indicators under System Preferences > Docking (type 1 to continue)" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "Done!!!\n" << endl;
                        reCallFunction_En(1);
                    }else{
                        cout << "Back to main menu.\n" << endl;
                        reCallFunction_En(1);
                    }
                    break;
                case 'A':
                    cout << "To use this feature, disable open Application Display Indicators under System Preferences > Docking (type 1 to continue)" << endl;
                    cin >> d;
                    if (d == 1) {
                        system ("defaults write com.apple.dock static-only -bool FALSE; killall Dock");
                        cout << "Done!!!\n" << endl;
                        reCallFunction_En(1);
                    }else{
                        cout << "Back to main menu.\n" << endl;
                        reCallFunction_En(1);
                    }
                    break;
                case 'b':
                    cout << "To remove the separator, simply click and drag it out of the base, or two-finger click (hold Ctrl key and click) and select \"Remove from Dock\"" << endl;
                    cout << "Press any key and then Enter to confirm that you have continued" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                case 'B':
                    cout << "To remove the separator, simply click and drag it out of the base, or two-finger click (hold Ctrl key and click) and select \"Remove from Dock\"" << endl;
                    cout << "Press any key and then Enter to confirm that you have continued" << endl;
                    cin >> e;
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                case 'c':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'C':
                    system ("defaults write com.apple.dock autohide-time-modifier -float 1; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'd':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'D':
                    system ("defaults write com.apple.dock mineffect magic; killall Dock ");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'e':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'E':
                    system ("defaults delete com.apple.dock; killall Dock");
                    cout << "Done!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
                case 'f':
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                case 'F':
                    cout << endl << endl;
                    reCallFunction_En(1);
                    break;
                default:
                    cout << "Wrong input!!!\n" << endl;
                    reCallFunction_En(1);
                    break;
            }
            break;
        case 'c':
            cout << "Close this patch. Bye" << endl;
            break;
        case 'C':
            cout << "Close this patch. Bye" << endl;
            break;
        default:
            cout << "Wrong input!!!\n" << endl;
            reCallFunction_En(1);
            break;
    }
}
