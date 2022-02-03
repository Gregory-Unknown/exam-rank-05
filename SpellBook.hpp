#pragma once

#include <string>
#include <map>
#include "ASpell.hpp"

class SpellBook {
    private:
        std::map<std::string, ASpell *> data;
        SpellBook(const SpellBook &sb);
        SpellBook &operator=(const SpellBook &sb);
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell *sp);
        void forgetSpell(const std::string &spName);
        ASpell* createSpell(const std::string &spName);
};