#pragma once

#define POK_NEEDS_DEBUG 1
#define POK_NEEDS_SCHED_VERBOSE 1

#define POK_NEEDS_THREADS 1
#define POK_NEEDS_PARTITIONS 1
#define POK_NEEDS_SCHED 1
#define POK_NEEDS_TIME 1
#define POK_NEEDS_CONSOLE 1
#define POK_NEEDS_LOCKOBJECTS 1

#define POK_NEEDS_THREAD_SUSPEND 1
#define POK_NEEDS_THREAD_SLEEP 1

#define POK_CONFIG_NB_PARTITIONS 3
#define POK_CONFIG_PARTITIONS_SIZE \
    { 120 * 1024, 120 * 1024, 120 * 1024 }
#define POK_CONFIG_PARTITIONS_WEIGHT \
    { 2, 2, 1 }
#define POK_CONFIG_SCHEDULING_MAJOR_FRAME 3000

#define POK_CONFIG_NB_THREADS 9
#define POK_CONFIG_PARTITIONS_NTHREADS \
    { 3, 2, 2 }

#include <core/schedvalues.h>
#define POK_CONFIG_PARTITIONS_SCHEDULER \
    { POK_LAB_SCHED_RR, POK_LAB_SCHED_RR, POK_LAB_SCHED_RR }

#define POK_CONFIG_NB_LOCKOBJECTS 0
#define POK_CONFIG_PARTITIONS_NLOCKOBJECTS \
    { 0, 0, 0 }
