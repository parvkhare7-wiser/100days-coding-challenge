#include <stdio.h>

int main() {
    struct Employee {char name[50]; int id;};
    struct Employee e1 = {"Arun", 5}, e2;

    FILE *f = fopen("emp.bin", "wb");
    fwrite(&e1, sizeof(e1), 1, f);
    fclose(f);

    f = fopen("emp.bin", "rb");
    fread(&e2, sizeof(e2), 1, f);
    fclose(f);

    printf("%s %d\n", e2.name, e2.id);
    return 0;
}
