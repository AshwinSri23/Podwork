#ifndef PODCAST_H
#define PODCAST_H

#include <iostream>
#include "Array.h"
#include "Episode.h"

using namespace std;

class Podcast{

    friend ostream& operator<<(ostream& ost, Podcast& podcast);

    public:
        Podcast(const string title,const string host);
        ~Podcast();
        bool equals(const string title);
        Episode* get(int index);
        int getSize();
        void print(ostream& ost) const;
        void printWithEpisodes(ostream& ost) const;
        void add(Episode* episode);
        void clear();

    private:
        Array<Episode*> episodes;
        const string title;
        const string host;
        
};


#endif