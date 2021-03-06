// For review purposes only!

#include "FriendBook.h"

FriendBook::FriendBook(string name){
        your_name =name;
        count=0;
        friendList = new string [3];
}

FriendBook::FriendBook(FriendBook &fb){
    count=0;
    friendList = new string[3];
    copy(fb);
    cout<<"*New member "+your_name<<endl;
}

FriendBook::~FriendBook(){
        delete[] friendList;
        friendList=NULL;
        cout<<"Deleted "<<your_name<<"'s Friends"<<endl;
}

void FriendBook::addFriend(string name){
        friendList[count]=name;
        count++;
}

void FriendBook::edtFriend(int pos, string name){
        friendList[pos]=name;
        pos++;
}

void FriendBook::display(){
        cout<<endl;
        cout<<your_name+"'s friends are:"<<endl;
        for(int i = 0; i<count; i++) {
                cout<<friendList[i]+", ";
        }
        cout<<endl<<endl;
}

void FriendBook::copy (FriendBook &fb){
        your_name = fb.getName();
        for(int i =0; i<3; i++) {
                if(fb.getFriendList()[i]!="") {
                        addFriend(fb.getFriendList()[i]);
                }else{
                        break;
                }
        }
}

string FriendBook::getName(){
        return this->your_name;
}

string* FriendBook::getFriendList(){
        return this->friendList;
}

FriendBook& FriendBook::operator = (FriendBook &fb){
    copy(fb);
    return *this;
}
