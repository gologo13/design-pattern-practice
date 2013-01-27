#include "singleton.h"

Config::Config()
{
}

Config::Config(const Config&)
{
}

Config::~Config()
{
}

Config* Config::getInstance()
{
    return _instance;
}

void Config::set(const std::string& key, int value)
{
    _store[key] = value;
}

int Config::get(const std::string& key)
{
    Dict::const_iterator it = _store.find(key);
    if (it != _store.end()) {
        return it->second;
    } else {
        return INT_MAX;
    }
}

Config* Config::_instance = new Config();
