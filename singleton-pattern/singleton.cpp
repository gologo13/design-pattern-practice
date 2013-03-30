#include "singleton.h"

SharedConfig::SharedConfig()
{
}

SharedConfig::SharedConfig(const SharedConfig&)
{
}

SharedConfig::~SharedConfig()
{
}

SharedConfig* SharedConfig::getInstance()
{
    return _instance;
}

void SharedConfig::set(const std::string& key, int value)
{
    _store[key] = value;
}

int SharedConfig::get(const std::string& key)
{
    Dict::const_iterator it = _store.find(key);
    if (it != _store.end()) {
        return it->second;
    } else {
        return INT_MAX;
    }
}

SharedConfig* SharedConfig::_instance = new SharedConfig();
