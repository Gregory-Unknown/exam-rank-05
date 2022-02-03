#pragma once

#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {
    protected:
        std::string type;
    public:
        ATarget();
        ATarget(const std::string &t);
        ATarget(const ATarget &tar);
        virtual ~ATarget();
        ATarget &operator=(const ATarget &tar);
        std::string getType() const;
        virtual ATarget *clone() const = 0;
        void getHitBySpell(const ASpell &sp) const;
};
