#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

int main (int argc, char **argv)
{

	/* This program prints the size of the terminal window you are running
	 * the program in. Useful for CLI or if you need to tell the user to resize
	 * it.
	 */

    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

    printf ("lines %d\n", w.ws_row);
    printf ("columns %d\n", w.ws_col);
    return 0;  
}
