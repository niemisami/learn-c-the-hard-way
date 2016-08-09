#include <stdio.h>

int main(int argc, char *argv[])
{
    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n", 
        bugs, bug_rate);

    long universe_of_defects = 1l * 1024l * 1024l * 1024l;
    printf("The entire universe has %ld bugs.\n",
        universe_of_defects);

    // this makes no sense, just a demo of something weird
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("Which means you should care %d%%.\n",
        care_percentage);

    return 0;
    }
