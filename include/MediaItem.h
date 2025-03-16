//
// Created by ferra on 25/11/2024.
//

#ifndef MEDIAITEM_H
#define MEDIAITEM_H

class MediaItem {
protected:
public:
    virtual ~MediaItem() = default;
    virtual void print() const { /* print a media item */};
private:
};

#endif //MEDIAITEM_H