#pragma once

#define POK_NEEDS_DEBUG 1

#define POK_NEEDS_THREADS 1
#define POK_NEEDS_PARTITIONS 1
#define POK_NEEDS_SCHED 1
#define POK_NEEDS_TIME 1
#define POK_NEEDS_CONSOLE 1
#define POK_NEEDS_LOCKOBJECTS 1

#define POK_CONFIG_NB_THREADS 6
#define POK_CONFIG_NB_LOCKOBJECTS 0
#define POK_CONFIG_NB_PARTITIONS 1

#define POK_CONFIG_PARTITIONS_SIZE \
    { 120 * 1024 }

#define POK_CONFIG_SCHEDULING_SLOTS \
    { 5000 }
#define POK_CONFIG_SCHEDULING_MAJOR_FRAME 5000
#define POK_CONFIG_SCHEDULING_SLOTS_ALLOCATION \
    { 0 }
#define POK_CONFIG_SCHEDULING_NBSLOTS 1

#define POK_NEEDS_THREAD_SUSPEND 1
#define POK_NEEDS_THREAD_SLEEP 1

#define POK_CONFIG_PARTITIONS_NTHREADS \
    { 4 }
#define POK_CONFIG_PARTITIONS_NLOCKOBJECTS \
    { 0 }

#include <core/schedvalues.h>
#define POK_CONFIG_PARTITIONS_SCHEDULER \
    { POK_LAB_SCHED_WRR }
