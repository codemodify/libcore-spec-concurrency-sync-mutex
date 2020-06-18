#ifndef __libcore_concurrency_sync_mutex__
#define __libcore_concurrency_sync_mutex__

#include <libcore-types/types.h>

typedef struct {
	pointer houseKeeping;  // private

} * Mutex;

extern void MutexCreate(Mutex mutex);
extern void MutexLock(Mutex mutex);
extern void MutexUnlock(Mutex mutex);
extern void MutexDelete(Mutex mutex);

#endif