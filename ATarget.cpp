#include "ATarget.hpp"

ATarget::ATarget()
{

}
ATarget::ATarget(const std::string &t)
: type(t)
{

}
ATarget::ATarget(const ATarget &tar)
{
    *this = tar;
}
ATarget::~ATarget()
{

}
ATarget &ATarget::operator=(const ATarget &tar)
{
    if (this != &tar)
        type = tar.type;
    return (*this);
}
std::string ATarget::getType() const
{
    return (type);
}
void ATarget::getHitBySpell(const ASpell &sp) const
{
    std::cout << type << " has been " << sp.getEffects() << "!" << std::endl;
}
