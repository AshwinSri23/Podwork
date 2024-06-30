#ifndef PODIFY_H
#define PODIFY_H

#include <iostream>
#include "Array.h"
#include "Podcast.h"
#include "Search.h"

using namespace std;

class Podify{
    public:
        ~Podify();
        void addPodcast(Podcast* podcast);
        void addEpisode(Episode* episode,const string podcastTitle);
        const Array<Podcast*>& getPodcasts();
        Podcast* getPodcast(int index);
        Podcast* getPodcast(const string& title);
        void getEpisodes(Search& search,Array<Episode*>& episodes);
    private:
        Array<Podcast*> podcasts;
};
 

#endif