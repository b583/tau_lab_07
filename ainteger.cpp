#ifndef ATOMIC_INTEGER
#define ATOMIC_INTEGER

class AtomicInteger {

    int i = 0;

    public: int getAndIncrement() {
        int old = i;
        i++;
        return old;
    }

};

#endif