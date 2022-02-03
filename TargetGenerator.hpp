#pragma once

#include <map>
#include <string>
#include "ATarget.hpp"

class TargetGenerator {
        std::map<std::string, ATarget *> data;
        TargetGenerator(const TargetGenerator &sb);
        TargetGenerator &operator=(const TargetGenerator &sb);
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget *tar);
        void forgetTargetType(const std::string &tarName);
        ATarget* createTarget(const std::string &tarName);
};