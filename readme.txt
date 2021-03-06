Making shallow copies results in the following memory allocation error:

(Sample)

friendBook(4171,0x1000b15c0) malloc: *** error for object 0x10105f2a0: pointer being freed was not allocated

We resolve this by refactoring our code to perform deep copies.