#include <iostream>
#include "TrafficAnalyzer.h"

int main() {
    TrafficAnalyzer analyzer;
    analyzer.load_data("data/traffic_log.txt");

    std::cout << "Total vehicles: " << analyzer.count_vehicles() << std::endl;
    std::cout << "Average speed: " << analyzer.calculate_average_speed() << " km/h" << std::endl;

    auto classification = analyzer.classify_vehicles();
    std::cout << "Vehicle classification:" << std::endl;
    for (const auto &entry : classification) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }

    return 0;
}
