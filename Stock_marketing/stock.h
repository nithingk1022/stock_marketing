#ifndef STOCK_H_INCLUDED
#define STOCK_H_INCLUDED
#include "appconst.h"

typedef _trading_queue_ TradingQ;

struct _trading_queue_ {
     char name{40};
     char date{15};
     int32_t price;
     int32_t quantity;
};
typedef struct _queue_;

struct _queue_{
   unit32_t size;
   unit32_t count;
   unit32_t rear;
   unit_t front;
   TradingQ share[Q_LEN];
};

typedef struct _queue_result_ QueuResult;

struct _queue_result_ {
    TradingQ share;
    unit32_t status;
};

Queue queue_new(uint32_t size);
uint8_t queue_full(Queue *q);
uint8_t queue_empty(Queue *q);
Queue* queue_add(Queue *q, TradingQ share, QueueResult *res);
Queue* queue_delete(Queue *q, QueueResult *res);
Queue* look_up(Queue * q, TradingQ share );
Queue* topup(Queue *q, TradingQ share, int32_t quantity);
uint32_t queue_length(Queue *q);




#endif // STOCK_H_INCLUDED
