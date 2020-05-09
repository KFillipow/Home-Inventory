#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>



int main(int argc, char **argv)
{
    int opt;

    static struct option long_options[] = 
    {
        {"new_item", required_argument, 0, 'i'},
        {"new_storage", required_argument, 0, 'i'},
        {"storage_name", required_argument, 0, 'i'},
        {"list_contents", optional_argument, 0, 'i'},
        {"delete_item", required_argument, 0, 'd'},
        {"delete_storage", required_argument, 0, 'd'}
    };

    while((opt = getopt(argc, argv, "")) != -1)
    {
        switch(opt)
        {
            case 'd': //delete 
        }
    }
}