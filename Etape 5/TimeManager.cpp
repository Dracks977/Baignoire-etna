//
// Created by eclat on 15/04/2019.
//

#include "TimeManager.hh"

void TimeManager::Start() {
     this->start = std::chrono::system_clock::now();
};

void TimeManager::Update() {
    this->odltime = this->newtime;
    this->newtime = std::chrono::system_clock::now();
}

unsigned int TimeManager::GetElapsedTime() const {
    std::chrono::duration<double> elapsed_seconds = this->newtime - this->odltime;
    unsigned int final = elapsed_seconds.count() * 1000;
    return final;
}

unsigned int TimeManager::GetStartedTime() const {
    std::chrono::duration<double> elapsed_seconds = this->newtime - this->start;
    unsigned int final = elapsed_seconds.count() * 1000;
    return final;
}

