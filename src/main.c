#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>

static int verbose_flag;

int main(int argc, char **argv)
{
    int c;

    while(1)
    {
        static struct option long_options[] = 
        {
            {"verbose", no_argument, &verbose_flag, 1},
            {"brief",   no_argument, &verbose_flag, 0},
            {"new-item", required_argument, 0, 'i'},
            {"new-storage", required_argument, 0, 's'},
            {"storage-name", required_argument, 0, 'n'},
            {"list-contents", optional_argument, 0, 'l'},
            {"delete-item", required_argument, 0, 'd'},
            {"delete-storage", required_argument, 0, 'e'}
        };

        int option_index = 0;
        
        c = getopt_long(argc, argv, "isnlde", long_options, &option_index);

        if (c == -1)
            break;
        switch(c)
        {
            case 'i':
                break;
            case 's':
                break;
            case 'n':
                break;
            case 'l':
                printf("list option\n");
                break;
            case 'd':
                break;
            case 'e':
                break;
            default:
                exit(1);
        }
    }

if (verbose_flag)
    puts ("verbose flag is set");

  /* Print any remaining command line arguments (not options). */
  if (optind < argc)
    {
      printf ("non-option ARGV-elements: ");
      while (optind < argc)
        printf ("%s ", argv[optind++]);
      putchar ('\n');
    }

    exit (0);
}