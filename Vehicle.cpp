#include "Vehicle.h"

Vehicle::Vehicle(const std::string &id, const std::string &type, double speed, const std::string &timestamp)
    : id(id), type(type), speed(speed), timestamp(timestamp) {}

std::string Vehicle::getId() const { return id; }
std::string Vehicle::getType() const { return type; }
double Vehicle::getSpeed() const { return speed; }
std::string Vehicle::getTimestamp() const { return timestamp; }
