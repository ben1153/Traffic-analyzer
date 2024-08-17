# Traffic-analyzer
Objective:
To develop a C++ application that reads traffic data (e.g., vehicle logs) and provides analytics such as vehicle count, average speed, and classification of vehicles. This project will simulate a basic traffic analysis system, which can be extended to more complex scenarios.
Key Features:
Data Input:

The program will read data from a file containing traffic logs. Each entry in the log could include details like timestamp, vehicle ID, speed, and type of vehicle.
Data Parsing:

The application will parse the input file and extract relevant information.
Analytics:

Count the total number of vehicles.
Calculate the average speed of vehicles.
Classify vehicles based on type (e.g., car, truck, motorcycle).
Data Output:

Display the analyzed data on the console.
Project Structure:
File Structure:

css
Copy code
TrafficAnalyzer/
├── include/
│   ├── TrafficAnalyzer.h
│   ├── Vehicle.h
├── src/
│   ├── main.cpp
│   ├── TrafficAnalyzer.cpp
│   ├── Vehicle.cpp
├── data/
│   ├── traffic_log.txt
├── Makefile
└── README.md
Classes and Functions:

Vehicle Class:

Attributes:
std::string id; - Vehicle ID.
std::string type; - Vehicle type (e.g., car, truck).
double speed; - Speed of the vehicle.
std::string timestamp; - Timestamp of the record.
Methods:
Constructor to initialize the vehicle object.
Getters for each attribute.
TrafficAnalyzer Class:

Attributes:
std::vector<Vehicle> vehicles; - List of vehicles.
Methods:
void load_data(const std::string &filename); - Reads the log file and populates the vehicles vector.
int count_vehicles() const; - Returns the total number of vehicles.
double calculate_average_speed() const; - Calculates the average speed of vehicles.
std::map<std::string, int> classify_vehicles() const; - Classifies vehicles based on type and returns a count for each type.
Implementation Details:

Vehicle.cpp:
Implementation of the Vehicle class.
TrafficAnalyzer.cpp:
Implementation of the TrafficAnalyzer class.
main.cpp:
Entry point of the application.
Create an instance of TrafficAnalyzer, load data from the file, and display the results.
Sample Data:

