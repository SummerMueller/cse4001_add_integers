#include <unistd.h>

int main() {
    int s1 = add_three_integers(3, 5, 2);
    int s2 = add_three_integers(-5, 3, 1);

    print_int("s1=", s1);
    print_int("s2=", s2);

    return 0;
}