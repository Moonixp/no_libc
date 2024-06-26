#ifndef __MMAP_DEFINES_H_
#define __MMAP_DEFINES_H_

/* MMAP DEFINES */
#define MAP_FAILED ((void*)-1)
#define PROT_READ 0x1  /* Page can be read.  */
#define PROT_WRITE 0x2 /* Page can be written.  */
#define PROT_EXEC 0x4  /* Page can be executed.  */
#define PROT_NONE 0x0  /* Page can not be accessed.  */
#define PROT_GROWSDOWN                      \
    0x01000000 /* Extend change to start of \
                  growsdown vma (mprotect only).  */
#define PROT_GROWSUP                        \
    0x02000000 /* Extend change to start of \
                  growsup vma (mprotect only).  */

/* Sharing types (must choose one and only one of these).  */
#define MAP_SHARED 0x01  /* Share changes.  */
#define MAP_PRIVATE 0x02 /* Changes are private.  */
#define MAP_SHARED_VALIDATE                         \
    0x03              /* Share changes and validate \
                         extension flags.  */
#define MAP_TYPE 0x0f /* Mask for type of mapping.  */
/* Other flags.  */
#define MAP_FIXED 0x10 /* Interpret addr exactly.  */
#define MAP_FILE 0
#ifdef __MAP_ANONYMOUS
#define MAP_ANONYMOUS __MAP_ANONYMOUS /* Don't use a file.  */
#else
#define MAP_ANONYMOUS 0x20 /* Don't use a file.  */
#endif
#define MAP_ANON MAP_ANONYMOUS
/* When MAP_HUGETLB is set bits [26:31] encode the log2 of the huge page size.
 */
#define MAP_HUGE_SHIFT 26
#define MAP_HUGE_MASK 0x3f
/* Flags to `msync'.  */
#define MS_ASYNC 1      /* Sync memory asynchronously.  */
#define MS_SYNC 4       /* Synchronous memory sync.  */
#define MS_INVALIDATE 2 /* Invalidate the caches.  */

#endif
