#include <iostream>
using namespace std;

int main() {
    int ae,be,ce,de,fe;

    cout << "Enter Criterion A score for English: ";
    cin >> ae;
    cout << "Enter Criterion B score for English: ";
    cin >> be;
    cout << "Enter Criterion C score for English: ";
    cin >> ce;
    cout << "Enter Criterion D score for English: ";
    cin >> de;
    fe = ae + be + ce + de;
    
    if (fe == 1 || fe == 2 || fe == 3 || fe == 4 || fe == 5) {
        cout << "Final IB level is 1 \n";
    }
    else if (fe == 6 || fe == 7 || fe == 8 || fe == 9) {
        cout << "Final IB level is 2 \n";
    }
    else if (fe == 10 || fe == 11 || fe == 12 || fe == 13 || fe == 14) {
        cout << "Final IB level is 3 \n";
    }
    else if (fe == 15 || fe == 16 || fe == 17 || fe == 18) {
        cout << "Final IB level is 4 \n";
    }
    else if (fe == 19 || fe == 20 || fe == 21 || fe == 22 || fe == 23) {
        cout << "Final IB level is 5 \n";
    }
    else if (fe ==  24 || fe == 25 || fe == 26 || fe == 27) {
        cout << "Final IB level is 6 \n";
    }
    else if (fe == 28 || fe == 29 || fe == 30 || fe == 31 || fe == 32) {
        cout << "Final IB level is 7 \n";
    }
    else {
        cout << "Please re-enter valid Criterion scores(0-8) \n";
    }

    int au,bu,cu,du,fu;

    cout << "Enter Criterion A score for Urdu: ";
    cin >> au;
    cout << "Enter Criterion B score for Urdu: ";
    cin >> bu;
    cout << "Enter Criterion C score for Urdu: ";
    cin >> cu;
    cout << "Enter Criterion D score for Urdu: ";
    cin >> du;
    fu = au + bu + cu + du;
    
    if (fu == 1 || fu == 2 || fu == 3 || fu == 4 || fu == 5) {
        cout << "Final IB level is 1 \n";
    }
    else if (fu == 6 || fu == 7 || fu == 8 || fu == 9) {
        cout << "Final IB level is 2 \n";
    }
    else if (fu == 10 || fu == 11 || fu == 12 || fu == 13 || fu == 14) {
        cout << "Final IB level is 3 \n";
    }
    else if (fu == 15 || fu == 16 || fu == 17 || fu == 18) {
        cout << "Final IB level is 4 \n";
    }
    else if (fu == 19 || fu == 20 || fu == 21 || fu == 22 || fu == 23) {
        cout << "Final IB level is 5 \n";
    }
    else if (fu ==  24 || fu == 25 || fu == 26 || fu == 27) {
        cout << "Final IB level is 6 \n";
    }
    else if (fu == 28 || fu == 29 || fu == 30 || fu == 31 || fu == 32) {
        cout << "Final IB level is 7 \n";
    }
    else {
        cout << "Please re-enter valid Criterion scores(0-8)";
    }

    int am,bm,cm,dm,fm;

    cout << "Enter Criterion A score for Math: ";
    cin >> am;
    cout << "Enter Criterion B score for Math: ";
    cin >> bm;
    cout << "Enter Criterion C score for Math: ";
    cin >> cm;
    cout << "Enter Criterion D score for Math: ";
    cin >> dm;
    fm = am + bm + cm + dm;
    
    if (fm == 1 || fm == 2 || fm == 3 || fm == 4 || fm == 5) {
        cout << "Final IB level is 1 \n";
    }
    else if (fm == 6 || fm == 7 || fm == 8 || fm == 9) {
        cout << "Final IB level is 2 \n";
    }
    else if (fm == 10 || fm == 11 || fm == 12 || fm == 13 || fm == 14) {
        cout << "Final IB level is 3 \n";
    }
    else if (fm == 15 || fm == 16 || fm == 17 || fm == 18) {
        cout << "Final IB level is 4 \n";
    }
    else if (fm == 19 || fm == 20 || fm == 21 || fm == 22 || fm == 23) {
        cout << "Final IB level is 5 \n";
    }
    else if (fm ==  24 || fm == 25 || fm == 26 || fm == 27) {
        cout << "Final IB level is 6 \n";
    }
    else if (fm == 28 || fm == 29 || fm == 30 || fm == 31 || fm == 32) {
        cout << "Final IB level is 7 \n";
    }
    else {
        cout << "Please re-enter valid Criterion scores(0-8)";
    }

    int ai,bi,ci,di,fi;

    cout << "Enter Criterion A score for I & S: ";
    cin >> ai;
    cout << "Enter Criterion B score for I & S: ";
    cin >> bi;
    cout << "Enter Criterion C score for I & S: ";
    cin >> ci;
    cout << "Enter Criterion D score for I & S: ";
    cin >> di;
    fi = ai + bi + ci + di;
    
    if (fi == 1 || fi == 2 || fi == 3 || fi == 4 || fi == 5) {
        cout << "Final IB level is 1 \n";
    }
    else if (fi == 6 || fi == 7 || fi == 8 || fi == 9) {
        cout << "Final IB level is 2 \n";
    }
    else if (fi == 10 || fi == 11 || fi == 12 || fi == 13 || fi == 14) {
        cout << "Final IB level is 3 \n";
    }
    else if (fi == 15 || fi == 16 || fi == 17 || fi == 18) {
        cout << "Final IB level is 4 \n";
    }
    else if (fi == 19 || fi == 20 || fi == 21 || fi == 22 || fi == 23) {
        cout << "Final IB level is 5 \n";
    }
    else if (fi ==  24 || fi == 25 || fi == 26 || fi == 27) {
        cout << "Final IB level is 6 \n";
    }
    else if (fi == 28 || fi == 29 || fi == 30 || fi == 31 || fi == 32) {
        cout << "Final IB level is 7 \n";
    }
    else {
        cout << "Please re-enter valid Criterion scores(0-8)";
    }

    int as,bs,cs,ds,fs;

    cout << "Enter Criterion A score for Science: ";
    cin >> as;
    cout << "Enter Criterion B score for Science: ";
    cin >> bs;
    cout << "Enter Criterion C score for Science: ";
    cin >> cs;
    cout << "Enter Criterion D score for Science: ";
    cin >> ds;
    fs = as + bs + cs + ds;
    
    if (fs == 1 || fs == 2 || fs == 3 || fs == 4 || fs == 5) {
        cout << "Final IB level is 1 \n";
    }
    else if (fs == 6 || fs == 7 || fs == 8 || fs == 9) {
        cout << "Final IB level is 2 \n";
    }
    else if (fs == 10 || fs == 11 || fs == 12 || fs == 13 || fs == 14) {
        cout << "Final IB level is 3 \n";
    }
    else if (fs == 15 || fs == 16 || fs == 17 || fs == 18) {
        cout << "Final IB level is 4 \n";
    }
    else if (fs == 19 || fs == 20 || fs == 21 || fs == 22 || fs == 23) {
        cout << "Final IB level is 5 \n";
    }
    else if (fs ==  24 || fs == 25 || fs == 26 || fs == 27) {
        cout << "Final IB level is 6 \n";
    }
    else if (fs == 28 || fs == 29 || fs == 30 || fs == 31 || fs == 32) {
        cout << "Final IB level is 7 \n";
    }
    else {
        cout << "Please re-enter valid Criterion scores(0-8)";
    }

}
