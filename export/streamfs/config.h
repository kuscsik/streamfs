//
// Created by Zoltan Kuscsik on 4/17/20.
//

#pragma once

#include <array>

// Plugin location directory
#define STREAMFS_PLUGIN_DIRECTORY "plugins/"

// Buffer chunk sizes
#define BUFFER_CHUNK_SIZE 4096 /* 1k chunks */

// Max number of buffer chunks in a list
#define MAX_BUFFER_LIST_COUNT 256

using buffer_chunk  = std::array<unsigned char, BUFFER_CHUNK_SIZE>;
