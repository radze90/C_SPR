#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <pwd.h>

int main()
{
    uid_t euid = geteuid();
    struct passwd *pwuid = getpwuid(euid);

    puts(pwuid->pw_name);

    return 0;
}

