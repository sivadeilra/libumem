#pragma once


typedef int pthread_t;

typedef struct pthread_mutex {
    int _a;
} pthread_mutex_t;

typedef struct pthread_cond {
    int _a;

} pthread_cond_t;

struct pthread_attr_t {
    int _a;
};

inline void pthread_attr_init(pthread_attr_t*) {}
inline void pthread_attr_setdetachstate(pthread_attr_t*, int s) {}

#define PTHREAD_CREATE_DETACHED 0

inline int pthread_create(pthread_t* newthread, pthread_attr_t* attr, void*, void*) {
return 0;
}

inline pthread_t pthread_self() { return 0;  }
inline void pthread_cond_broadcast(pthread_cond_t* cond) {}
inline void pthread_cond_signal(pthread_cond_t* cond) {}
int pthread_cond_wait(pthread_cond_t* cond, pthread_mutex_t* mutex);
inline int pthread_cond_timedwait(pthread_cond_t* cond, void*, void*) { return 1;  }
inline void pthread_mutex_lock(pthread_mutex_t* mutex) {}
inline int pthread_mutex_trylock(pthread_mutex_t* mutex) { return 0;  }
inline void pthread_mutex_unlock(pthread_mutex_t* mutex) {}
inline void pthread_mutex_init(pthread_mutex_t* mutex, void*) {}
inline void pthread_cond_init(pthread_cond_t* cond, void*) {}
inline void pthread_mutex_destroy(pthread_mutex_t*) {}
inline void pthread_cond_destroy(pthread_cond_t*) {}

#define PTHREAD_MUTEX_INITIALIZER { 0 }
#define PTHREAD_COND_INITIALIZER { 0 }
#define PTHREAD_CANCEL_DISABLE 0


inline int pthread_setcancelstate(pthread_t p, int* state) { return 0; }


inline int gettimeofday(void*, void*) { return 0; }
