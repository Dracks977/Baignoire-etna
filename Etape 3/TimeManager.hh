//
// Created by eclat on 15/04/2019.
//

#ifndef CPP_TIMEMANAGER_HH
#define CPP_TIMEMANAGER_HH
#include <iostream>
#include <chrono>
#include <ctime>



class TimeManager {
private:
    std::chrono::time_point<std::chrono::system_clock> newtime;
    std::chrono::time_point<std::chrono::system_clock> start;
    std::chrono::time_point<std::chrono::system_clock> odltime;

public:
    static TimeManager& GetInstance()
    {
        static TimeManager instance;
        return instance;
    }

private:
    TimeManager(){};
    TimeManager(TimeManager const&);
    void operator=(TimeManager const&);
public:
    void Start();
    void Update();
    unsigned int GetElapsedTime() const;
    unsigned int GetStartedTime() const;
};


#endif //CPP_TIMEMANAGER_HH
