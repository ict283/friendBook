// For review purposes only!

#ifndef FriendBook_h
#define FriendBook_h

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class FriendBook {

public:

FriendBook(string name);
    
FriendBook(FriendBook &fb); //custom copy constructor

~FriendBook();

void addFriend(string name);

void edtFriend(int pos, string name);

void display();
    
void copy (FriendBook &fb);
    
string getName();
    
string* getFriendList();
    
FriendBook& operator = (FriendBook &fb); //custom '=' operator

private:

string your_name;

string * friendList;

int count;

};

#endif /* FriendBook_h */
