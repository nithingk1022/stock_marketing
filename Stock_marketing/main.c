#include <stdio.h>
#include <stdlib.h>
#include"stocks.c"
#include"stocks.h"
#include"appconst.h"
#include"stocks.h"

void test()
{
 Queue q=queue_new[5]
 Queue *q1;
 TradingQ share;
 QueueResult p;
 q=queue_add(q1,share,p);
 q=queue_add(q1,share,p);
 q=queue_add(q1,share,p);
 q=queue_add(q1,share,p);
 q=queue_add_share(q1,share,p);
 q=look_up(q1,share,p);
 q=top_up(q1,share,p);

}

int main()
{
    printf("Hello world!\n");
    test()
    return 0;
}
