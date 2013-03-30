/**
 * singleton pattern
 */
#include <iostream>
#include "singleton.h"

int main()
{
    // compile error occurs because the constructor is private.
    // SharedConfig config;

    SharedConfig* config = SharedConfig::getInstance();
    config->set("Tom", 10);
    config->set("Bob", 20);

    std::cout << config->get("Tom") << std::endl; // 10
    std::cout << config->get("Bob") << std::endl; // 20

    // config2 shares the same instance with config
    SharedConfig* config2 = SharedConfig::getInstance();
    std::cout << config2->get("Tom") << std::endl; // 10
    std::cout << config2->get("Bob") << std::endl; // 20

    return 0;
}
