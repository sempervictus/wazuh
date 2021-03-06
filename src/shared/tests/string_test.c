/* Copyright (C) 2015-2019, Wazuh Inc.
 * All rights reserved.
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation.
*/

#include <stdio.h>
#include <string.h>

#include "string_op.h"


int main(int argc, char **argv)
{
    int i = 0;
    char *tmp;
    char buf[] = "/var/www/html/Testing This Interface$%^&*().txt";

    tmp = os_shell_escape(buf);
    char clean[] = "/var/www/html/index.html";

    printf("Sent: '%s'\n", buf);
    printf("Fixed: '%s'\n", tmp);
    free(tmp);

    tmp = os_shell_escape(clean);
    printf("Sent: '%s'\n", clean);
    printf("Fixed: '%s'\n", tmp);

    return (0);
}

