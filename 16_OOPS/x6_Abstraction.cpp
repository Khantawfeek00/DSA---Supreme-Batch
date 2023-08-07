#include <bits/stdc++.h>
#include "Birds.h"
using namespace std;

void birdDoesSomething(Bird *&b)
{
    b->eat();
    b->fly();
    b->eat();
    b->fly();
    b->eat();
    b->fly();
    b->eat();
    b->fly();
}
int main()
{
    // Bird *b = new Sparrow();
    // birdDoesSomething(b);

    // Bird *a = new Eagle();
    // birdDoesSomething(a);

    Bird *c = new Pigon();
    birdDoesSomething(c);
}