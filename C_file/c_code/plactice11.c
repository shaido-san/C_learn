#include <stdio.h>
#include <string.h>

struct User
{
    int id;
    char name[20];
    int age;
    int active;
};

void users_init(struct User *u, int n)
{
    for (int i = 0; i < n; i++) {
        u[i].id = 0;
        u[i].name[0] = '\0';
        u[i].age = 0;
        u[i].active = 0;
    }
}

struct User* find_user_by_id(struct User *u, int n, int id)
{
    for (int i = 0; i < n; i ++) {
        if (u[i].active == 1 && u[i].id == id) {
            return &u[i];
        }
    }
    return NULL;
}

void update_age(struct User *u, int n, int id, int new_age)
{
    struct  User *p = find_user_by_id(u, n, id);
    if (p != NULL) {
        p->age = new_age;
    }
    
}

int main(void)
{
    struct User users[5];
    users_init(users, 5);

    users[0].id = 1;
    strcpy(users[0].name, "Taro");
    users[0].age = 20;
    users[0].active = 1;

    users[1].id = 2;
    strcpy(users[1].name, "Jiro");
    users[1].age = 30;
    users[1].active = 1;

    users[2].id = 3;
    strcpy(users[2].name, "Suzune");
    users[2].age = 90;
    users[2].active = 1;

    update_age(users, 5, 2, 21);
    
    struct User *p = find_user_by_id(users, 5, 2);
    if (p == NULL) {
        printf("Not found\n");
    } else {
        printf("id=%d name=%s age=%d active=%d\n", p->id, p->name, p->age, p->active);
    }

    return 0;
}
