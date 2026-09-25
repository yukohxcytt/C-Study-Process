#include <stdio.h>
struct point // struct definition
{
    int x;
    int y;
};
struct point *getstruct(struct point *p);
void output(struct point);
void print(const struct point *p);
int main()
{
    struct point y = {0, 0};
    getstruct(&y);
    output(y);
    print(getstruct(&y)); // 嵌套函数，执行到这一行时候，会再进入getstruct函数，再进行一次输入，更改y的两个值
    return 0;
}

struct point *getstruct(struct point *p)
{
    scanf("%d", &p->x);
    scanf("%d", &p->y);
    printf("%d,%d\n", p->x, p->y);
    return p;
}
void output(struct point p)
{
    printf("%d,%d\n", p.x, p.y);
}
void print(const struct point *p)
{
    printf("%d,%d", p->x, p->y);
}