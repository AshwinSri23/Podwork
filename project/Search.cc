#include "Search.h"

//Implement H_Search

H_Search::H_Search(const string& host):host(host){}

bool H_Search::matches(const Episode* episode){
    if(host==(episode->getHost())){
        return true;
    }
    return false;
}


void H_Search::print(ostream& ost){
    ost<<"Host:"<<host<<endl;
}




//Implement C_Search

C_Search::C_Search(const string& category):category(category){}

bool C_Search::matches(const Episode* episode){
    if(category==(episode->getCategory())){
        return true;
    }
    return false;
}

void C_Search::print(ostream& ost){
    ost<<"Category:"<<category<<endl;
}


//Implement HC_Search
HorC_Search::HorC_Search(const string& host, const string& category):H_Search(host),C_Search(category),host(host),category(category){}

bool HorC_Search::matches(const Episode* episode){
    
    if(host==(episode->getHost()) || category==(episode->getCategory())){
        return true;
    }
    return false;
}

void HorC_Search::print(ostream& ost){
    H_Search::print(ost);
    C_Search::print(ost);
}

ostream& operator<<(ostream& ost, Search& s){
    s.print(ost);
    return ost;
}

