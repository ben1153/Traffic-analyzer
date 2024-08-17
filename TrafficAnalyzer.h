#ifndef TRAFFICANALYZER_H
#define TRAFFICANALYZER_H

#include <vector>
#include <string>
#include <map>
#include "Vehicle.h"

class TrafficAnalyzer {
private:
    std::vector<Vehicle> vehicles;

public:
    void load_data(const std::string &filename);
    int count_vehicles() const;
    double calculate_average_speed() const;
    std::map<std::string, int> classify_vehicles() const;
};

#endif
