#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
private:
    std::string id;
    std::string type;
    double speed;
    std::string timestamp;

public:
    Vehicle(const std::string &id, const std::string &type, double speed, const std::string &timestamp);

    std::string getId() const;
    std::string getType() const;
    double getSpeed() const;
    std::string getTimestamp() const;
};

#endif
