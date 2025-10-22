// COMSC-210 | Lab 23 | Daniel Santisteban
// IDE used: VS Code

#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string names[], string colors[]);
void display_trip(list<Goat> trip);
int main_menu();

int main() {
    srand(time(0));
    bool again;

    // read & populate arrays for names and colors
     ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();
    list<Goat> trip;
    while(true){
        int response=main_menu();
        if(response==1){
            add_goat(trip,names,colors);
        }
        if(response==4){
            break;
        }


    }
    



    return 0;
}

int main_menu(){
        cout<<"*** GOAT MANAGER 3001! ***"<<endl;
        cout<<"[1] Add a goat"<<endl;
        cout<<"[2] Delete a goat"<<endl;
        cout<<"[3] List goats"<<endl;
        cout<<"[4] Quit"<<endl;
        cout<<"choice  --> ";
        int response;
        cin>>response;
        return response;
}
void add_goat(list<Goat> &trip, string names[], string colors[]){
    int randcolor=rand()%(SZ_COLORS-1)+1;
    int randage=rand()%(MAX_AGE-1)+1;
    int randname=rand()%(SZ_NAMES-1)+1; 
    trip.push_back(Goat(names[randname],randage,colors[randcolor]));
}
void display_trip(list<Goat> trip){
    for(int i=0;i<trip.size();i++){
        cout<<""
    
    }
}