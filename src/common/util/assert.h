#ifndef ILLUMINA_ASSERT_H
#define ILLUMINA_ASSERT_H

#include "common/logging.h"

#define ASSERT_MALLOC(ptr) \
    if (ptr == NULL) {\
        ERROR("malloc failed at [%s:%d:%s]", __FILENAME__, __LINE__, __func__);\
        exit(EXIT_FAILURE);\
    }

#endif //ILLUMINA_ASSERT_H
