#include "ASpell.hpp"

ASpell::ASpell()
{

}
ASpell::ASpell(const std::string &n, const std::string &eff)
: name(n), effects(eff)
{

}
ASpell::ASpell(const ASpell &sp)
{
    *this = sp;
}
ASpell::~ASpell()
{

}
ASpell &ASpell::operator=(const ASpell &sp)
{
    if (this != &sp) {
        name = sp.name;
        effects = sp.effects;
    }
    return (*this);
}
std::string ASpell::getName() const
{
    return (name);
}
std::string ASpell::getEffects() const
{
    return (effects);
}
void ASpell::launch(const ATarget &tar) const
{
    tar.getHitBySpell(*this);
}