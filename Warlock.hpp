#pragma once

#include <iostream>
#include <string>
#include "SpellBook.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
    private:
        std::string name;
        std::string title;
        SpellBook book;
        Warlock();
        Warlock(const Warlock &war);
        Warlock &operator=(const Warlock &war);
    public:
        Warlock(const std::string &n, const std::string &t);
        ~Warlock();
        std::string getName() const;
        std::string getTitle() const;
        void setTitle(const std::string &t);
        void introduce() const;
        void learnSpell(ASpell *sp);
        void forgetSpell(const std::string &spName);
        void launchSpell(const std::string &spName, const ATarget &tar);
};