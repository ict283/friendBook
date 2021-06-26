// For review purposes only!!

#ifndef FriendBook_h
#define FriendBook_h

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class FriendBook {

public:

FriendBook(string name);
    
FriendBook(FriendBook &fb);

~FriendBook();

void addFriend(string name);

void edtFriend(int pos, string name);
    
string getName();
    
string* getFriendList();

void display();

void copy (FriendBook &fb);

FriendBook& operator = (FriendBook &fb);

private:

string your_name;

string * friendList;

int count;

};

#endif /* FriendBook_h */
