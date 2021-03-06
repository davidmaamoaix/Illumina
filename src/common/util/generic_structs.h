#ifndef ILLUMINA_GENERIC_ARRAY_H
#define ILLUMINA_GENERIC_ARRAY_H

#include <stdlib.h>

#include "common/specs.h"
#include "common/util/assert.h"

#define GEN_ARRAY_T(T) \
    struct {\
        POOL_SIZE_T size;\
        T *elem;\
    }

#define GEN_ARRAY_INIT(array, size_in, T) \
    do {\
        (array)->size = (size_in);\
        (array)->elem = malloc((size_in) * sizeof(T));\
        ASSERT_MALLOC((array)->elem);\
    } while (0)

#define GEN_ARRAY_SIZE(array) ((array)->size)

#define GEN_ARRAY_GET(array, i) ((array)->elem[(i)])

#define GEN_ARRAY_SET(array, i, val) (array)->elem[(i)] = (val)

#define GEN_ARRAY_RELEASE(array) free((array)->elem)

#define GEN_ARRAY_RELEASE_PTR(array) \
    do {\
        for (int i = 0; i < (array)->size; ++i) {\
            free((array)->elem[i]);\
        }\
        free((array)->elem);\
    } while (0)

#define GEN_PAIR_T(A, B) \
    struct {\
        A first;\
        B second;\
    }

#define GEN_PAIR_FST(pair) (pair)->first

#define GEN_PAIR_SND(pair) (pair)->first

#define GEN_PAIR_SET_FST(pair, val) (pair)->first = (val)

#define GEN_PAIR_SET_SND(pair, val) (pair)->first = (val)

#endif //ILLUMINA_GENERIC_ARRAY_H
