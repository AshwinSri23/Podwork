#include "Podcast.h"

Podcast::Podcast(const string title,const string host):title(title),host(host){};

Podcast::~Podcast(){
    for(int i=0; i<episodes.getSize(); i++){
        delete episodes[i];
    }
}

bool Podcast::equals(const string title){
    return this->title == title;
}

Episode* Podcast::get(int index){
    return episodes[index];
}

int Podcast::getSize(){
    return episodes.getSize();
}

void Podcast::print(ostream& ost) const{
    ost<<"Podcast Title:"<<(this->title)<<endl;
    ost<<"Podcast Host:"<<(this->host)<<endl;
}

void Podcast::printWithEpisodes(ostream& ost) const{
    ost<<"Podcast Title:"<<(this->title)<<endl;
    ost<<"Podcast Host:"<<(this->host)<<endl;
    
    //printing the episodes
    cout<<"Episodes: "<<endl;
    for(int i=0; i<(episodes.getSize()); i++){
        ost<<(*episodes[i])<<endl;
    }
}

void Podcast::add(Episode* episode){
    episodes+=episode;
}

void Podcast::clear(){
    episodes.clear();
    
}

ostream& operator<<(ostream& ost, Podcast& podcast){
    podcast.print(ost);
    return ost;
}







