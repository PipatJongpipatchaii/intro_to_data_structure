#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename KeyT,
          typename MappedT,
          typename HasherT,
          typename EqualT>
size_t CP::unordered_map<KeyT,MappedT,HasherT,EqualT>::max_bucket_length() {
    // your code here
    size_t m = 0;
    for (BucketT b : mBuckets){
        if (b.size()>m) m = b.size();
    }
    return m;
}

#endif
