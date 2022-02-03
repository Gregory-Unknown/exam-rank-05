#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell {
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell();
        ASpell(const std::string &n, const std::string &eff);
        ASpell(const ASpell &sp);
        virtual ~ASpell();
        ASpell &operator=(const ASpell &sp);
        std::string getName() const;
        std::string getEffects() const;
        virtual ASpell *clone() const = 0;
        void launch(const ATarget &tar) const;
};