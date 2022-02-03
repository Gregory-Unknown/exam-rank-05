#include "Warlock.hpp"

Warlock::Warlock(const std::string &n, const std::string &t)
: name(n), title(t)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}
std::string Warlock::getName() const
{
    return (name);
}
std::string Warlock::getTitle() const
{
    return (title);
}
void Warlock::setTitle(const std::string &t)
{
    title = t;
}
void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}
void Warlock::learnSpell(ASpell *sp)
{
    book.learnSpell(sp);
}
void Warlock::forgetSpell(const std::string &spName)
{
    book.forgetSpell(spName);
}
void Warlock::launchSpell(const std::string &spName, const ATarget &tar)
{
    ASpell *spell = book.createSpell(spName);
    if (spell)
        spell->launch(tar);
}