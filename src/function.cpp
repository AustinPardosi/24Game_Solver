#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <chrono>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;
using namespace std::chrono;

int changeType (string x) {
    if (x == "A") {
        return 1;
    } else if (x == "J") {
        return 11;
    } else if (x == "Q") {
        return 12;
    } else if (x == "K") {
        return 13;
    } else if (x == "10") {
        return 10;
    } else {
        return (int)x[0]-48 ;
    }
}

string changeData (int x) {
    if (x == 1) {
        return "A";
    } else if (x == 11) {
        return "J";
    } else if (x == 12) {
        return "Q";
    } else if (x == 13) {
        return "K";
    } else if (x == 10) {
        return "10";
    } else {
        string s = to_string(x);
        return s;
    }
}

