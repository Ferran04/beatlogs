//
// Created by ferra on 08/12/2024.
//

#ifndef LIBRARYTREE_H
#define LIBRARYTREE_H

#include "MediaItem.h"

class LibraryTree {

public:
    void print() const {
        mRootMediaItem.print();
    }
private:
    MediaItem mRootMediaItem;
};

#endif //LIBRARYTREE_H
