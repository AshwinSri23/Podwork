#include "Podify.h"

Podify::~Podify(){
    for(int i=0; i<podcasts.getSize(); i++){
        delete podcasts[i];
    }
}


void Podify::addPodcast(Podcast* podcast){
    podcasts+=podcast;  
}


void Podify::addEpisode(Episode* episode,const string podcastTitle){
    bool found = false; 
    for(int i=0; i<podcasts.getSize(); i++){
        if((*podcasts[i]).equals(podcastTitle)){
            podcasts[i]->add(episode);
            found = true;
            break;
        }
    }
    if(found==false){
        cout<<"Podcast could not be found with the given title"<<endl;
    }
}


const Array<Podcast*>& Podify::getPodcasts(){
    const Array<Podcast*>& podCastRef = podcasts;
    return podCastRef;
 }

Podcast* Podify::getPodcast(int index){
   return podcasts[index];
}

Podcast* Podify::getPodcast(const string& title){
    bool found = false;
    for(int i=0; i<podcasts.getSize(); i++){
        if(podcasts[i]->equals(title)){
                found = true;
                return podcasts[i];
                break;
            }
        }
    if(found==false){
        cout<<"Podcast could not be found with the given title"<<endl;
    }
    return nullptr;
}

void Podify::getEpisodes(Search& search,Array<Episode*>& episodes){
   //episodes = Array<Episode*>(); 
   for(int i=0; i<podcasts.getSize(); i++){
        for(int j=0; j<podcasts[i]->getSize(); j++){
            if(search.matches((podcasts[i]->get(j)))==true){
                Episode* e = podcasts[i]->get(j);
                episodes+=e;
            }
        }
    }
    /*for(int i=0; i<podcasts.getSize(); i++){
        for(int j=0; j<podcasts[i]->getSize(); j++){
            if(search.matches((podcasts[i]->get(j)))==true){
                Episode e = *(podcasts[i]->get(j));
                //cout<<e<<endl;
                episodes+=(podcasts[i]->get(j));
            }
        }
    }*/

    
}


 

