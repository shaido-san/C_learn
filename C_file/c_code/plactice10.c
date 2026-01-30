# include <stdio.h>

struct  Stats
{
    int count;
    int sum;
    int max;
    int min;
};

void stats_init(struct Stats *s)
{
    s->count = 0;
    s->sum = 0;
    s->max = -214764;
    s->min = 2194545;
}

void stats_add(struct Stats *s, int x)
{
    s->count += 1;
    s->sum += x;

    if (x > s->max) s->max = x;
    if (x < s->min) s->min = x;
};

int main(void)
{
    struct Stats st;
    stats_init(&st);

    for (int i = 0; i < 5; i++) {
        int x;
        scanf("%d", &x);
        stats_add(&st, x);
    }

    printf("count=%d sum=%d, max=%d, min=%d\n", st.count, st.sum, st.max, st.min);
    return 0;
}