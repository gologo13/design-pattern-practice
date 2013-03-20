#include <string>
#include <map>
#pragma once

class SharedConfig
{
    typedef std::map<std::string, int> Dict;
    static SharedConfig* _instance;
    Dict _store;

private:
    /**
     * Constructor
     */
    SharedConfig();
    /**
     * Copy Constructor
     */
    SharedConfig(const SharedConfig&);

public:
    /**
     * get the instance
     */
    static SharedConfig* getInstance();
    /**
     * Destructor
     */
    ~SharedConfig();
    /**
     * set a value
     */
    void set(const std::string& , int);
    /**
     * get a value
     */
    int get(const std::string&);
};
