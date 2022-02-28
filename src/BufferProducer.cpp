//
// Created by Zoltan Kuscsik on 4/20/20.
//

#include <BufferPool.h>
#include "BufferProducer.h"


template <>
void BufferProducer<buffer_chunk >::queueBuffer(buffer_chunk &buffer, bool lastBuffer , size_t lastBufferSize){
    mBufferPool->pushBuffer(buffer, lastBuffer, lastBufferSize);
}

template <>
void BufferProducer<buffer_chunk >::stop() {}