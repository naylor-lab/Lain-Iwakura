
#ifndef
#define

#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

json 
std::ifstream f("json/user.json");
json data = json::parse(f);


extern int token = data["token"];

