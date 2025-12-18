#include <stdio.h>
#include <string.h>

struct Person
{
    char name[20];
    int age;
};

void print_person(struct Person p);
void birthday(struct Person *p);

int main(void)
{
    struct Person a;
    strcpy(a.name, "saito");
    a.age = 33;

    print_person(a);

    birthday(&a);
    print_person(a);

    return 0;
}

void print_person(struct Person p)
{
    printf("name=%s age=%d\n", p.name, p.age);
}

void birthday(struct Person *p)
{
    p->age = p->age+1;
}