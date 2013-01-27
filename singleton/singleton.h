#include <string>
#include <map>
#pragma once

class Config
{
    typedef std::map<std::string, int> Dict;
    static Config* _instance;
    Dict _store;

private:
    /**
     * Constructor
     */
    Config();

public:
    /**
     * get the instance
     */
    static Config* getInstance();
    /**
     * Destructor
     */
    ~Config();
    /**
     * set a value
     */
    void set(const std::string& , int);
    /**
     * get a value
     */
    int get(const std::string&);
};
