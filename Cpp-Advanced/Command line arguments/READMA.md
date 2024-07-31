about 4 months ago I saw a piece of code (int argc, char* argv[]) at main() from my friend

I wonder what purpose they served but now I know them a bit, thank you my friend 

btw... Here is a little information about them

**argc** is an integer parameter containing a count of the number of arguments passed to the program (think: argc = argument count). argc will always be at least 1, because the first argument is always the name of the program itself. Each command line argument the user provides will cause argc to increase by 1

**argv** is where the actual argument values are stored (think: argv = argument values, though the proper name is “argument vectors”). Although the declaration of argv looks intimidating, argv is really just a C-style array of char pointers (each of which points to a C-style string). The length of this array is argc

Even though these are treated identically but it’s intuitively easier to understand
