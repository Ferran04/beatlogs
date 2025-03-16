//
// Created by ferran on 22/10/2024.
//

#ifndef SONG_H
#define SONG_H
#include <iostream>
#include <ostream>
#include <string>
#include <utility>
#include "MediaItem.h"

class Song final : public MediaItem {
public:
    // constructors and destructors ---------------------------------------
    Song(std::string title, std::string artist, std::string containerName,
        std::string genre = "", std::string composer = "", std::string format = "",
        std::string lyrics = "", const int durationInSeconds = 0, const int trackNumber = 0,
        const int discNumber = 0)
        : mTitle(std::move(title)), mArtist(std::move(artist)), mContainerName(std::move(containerName)),
          mGenre(std::move(genre)), mComposer(std::move(composer)), mFormat(std::move(format)),
          mLyrics(std::move(lyrics)), mDurationInSeconds(durationInSeconds), mTrackNumber(trackNumber),
          mDiscNumber(discNumber) {
        // Constructor for a song
    }
    // ------------------------------------------------------------------


    // getters, setters and checkers -------------------------------------
    [[nodiscard]] std::string getTitle() const { return mTitle; }
    [[nodiscard]] std::string getArtist() const { return mArtist; }
    [[nodiscard]] std::string getAlbum() const { return mContainerName; }
    [[nodiscard]] std::string getGenre() const { return mGenre; }
    [[nodiscard]] std::string getComposer() const { return mComposer; }
    [[nodiscard]] std::string getFormat() const { return mFormat; }
    [[nodiscard]] std::string getLyrics() const { return mLyrics; }
    [[nodiscard]] int getDurationInSeconds() const { return mDurationInSeconds; }
    [[nodiscard]] int getTrackNumber() const { return mTrackNumber; }
    [[nodiscard]] int getDiscNumber() const { return mDiscNumber; }

    void setTitle(std::string title) { mTitle = std::move(title); }
    void setArtist(std::string artist) { mArtist = std::move(artist); }
    void setAlbum(std::string album) { mContainerName = std::move(album); }
    void setGenre(std::string genre) { mGenre = std::move(genre); }
    void setComposer(std::string composer) { mComposer = std::move(composer); }
    void setFormat(std::string format) { mFormat = std::move(format); }
    void setLyrics(std::string lyric) { mLyrics = std::move(lyric); }
    void setDurationInSeconds(const int durationInSeconds) { mDurationInSeconds = durationInSeconds; }
    void setTrackNumber(const int trackNumber) { mTrackNumber = trackNumber; }
    void setDiscNumber(const int discNumber) { mDiscNumber = discNumber; }

    [[nodiscard]] bool hasTitle() const { return !mTitle.empty(); }
    [[nodiscard]] bool hasArtist() const { return !mArtist.empty(); }
    [[nodiscard]] bool hasAlbum() const { return !mContainerName.empty(); }
    [[nodiscard]] bool hasGenre() const { return !mGenre.empty(); }
    [[nodiscard]] bool hasComposer() const { return !mComposer.empty(); }
    [[nodiscard]] bool hasFormat() const { return !mFormat.empty(); }
    [[nodiscard]] bool hasLyrics() const { return !mLyrics.empty(); }
    [[nodiscard]] bool hasDuration() const { return mDurationInSeconds > 0; }
    [[nodiscard]] bool hasTrackNumber() const { return mTrackNumber > 0; }
    // ------------------------------------------------------------------


    // utility functions ------------------------------------------------
    void print() const override {
        std::cout << "----SONG INFORMATION----" << mTitle << std::endl;
        std::cout << "Title: " << mTitle << std::endl;
        std::cout << "Artist: " << mArtist << std::endl;
        std::cout << "Album: " << mContainerName << std::endl;
        std::cout << "Genre: " << mGenre << std::endl;
        std::cout << "Composer: " << mComposer << std::endl;
        std::cout << "Format: " << mFormat << std::endl;
        std::cout << "Lyrics: " << mLyrics.substr(0, 20) << (mLyrics.length() > 20 ? "..." : "") << std::endl;
        std::cout << "Duration: " << mDurationInSeconds << " seconds" << std::endl;
        std::cout << "Track: " << mTrackNumber << std::endl;
        std::cout << "Disc: " << mDiscNumber << std::endl;
        std::cout << "------------------------" << mTitle << std::endl;
    }

    void printLyrics() const {
        std::cout << "----SONG LYRICS----" << std::endl;
        std::cout << mLyrics << std::endl;
        std::cout << "-------------------" << mArtist << std::endl;
    }
    // ------------------------------------------------------------------


    // operator overloads -----------------------------------------------

    // ------------------------------------------------------------------

private:
    std::string mTitle;
    std::string mArtist;
    std::string mContainerName;
    std::string mGenre;
    std::string mComposer;
    std::string mFormat;
    std::string mLyrics;

    int mDurationInSeconds = 0;
    int mTrackNumber = 0;
    int mDiscNumber = 1;
};

#endif //SONG_H
