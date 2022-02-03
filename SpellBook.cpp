#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}
SpellBook::~SpellBook()
{
    for(std::map<std::string, ASpell *>::iterator it = data.begin(); it != data.end(); ++it)
        delete it->second;
    data.clear();
}
void SpellBook::learnSpell(ASpell *sp)
{
    if (sp)
        data.insert(std::make_pair<std::string, ASpell *>(sp->getName(), sp->clone()));
}
void SpellBook::forgetSpell(const std::string &spName)
{
    std::map<std::string, ASpell *>::iterator it = data.find(spName);
    if (it != data.end())
        delete it->second;
    data.erase(spName);
}
ASpell* SpellBook::createSpell(const std::string &spName)
{
    ASpell *spell = data[spName];
    if (spell)
        return (spell);
    return (NULL); 
}
