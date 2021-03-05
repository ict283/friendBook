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

<<<<<<< HEAD
        //Attempt to create a copy using default '=' operator
=======
        //Attempt to create a copy using '=' operator
>>>>>>> 9ee7940e388863497332be8d5ec320057443b560
        FriendBook acc3("");
        acc3=acc1;
        acc3.display();

<<<<<<< HEAD
        /* Program will crash with a memory allocation error */
=======
        /* Program will not crash with a memory allocation error */
>>>>>>> 9ee7940e388863497332be8d5ec320057443b560

        return 0;
}
