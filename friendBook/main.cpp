// For review purposes only!

#include <iostream>
#include "FriendBook.h"

using namespace std;

int main(int argc, const char * argv[]) {

        FriendBook acc1 ("Amy");
        acc1.addFriend("Lewis");
        acc1.addFriend("Gopal");
        acc1.addFriend("June");
        acc1.display();

        //Attempt to create a copy using default copy constructor
        FriendBook acc2(acc1);
        acc2.display();

        //Attempt to create a copy using default '=' operator
        FriendBook acc3("");
        acc3=acc1;
        acc3.display();

        /* Program will crash with a memory allocation error */

        return 0;
}
