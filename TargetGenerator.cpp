#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}
TargetGenerator::~TargetGenerator()
{
    for(std::map<std::string, ATarget *>::iterator it = data.begin(); it != data.end(); ++it)
        delete it->second;
    data.clear();
}
void TargetGenerator::learnTargetType(ATarget *tar)
{
    if (tar)
        data.insert(std::make_pair<std::string, ATarget *>(tar->getType(), tar->clone()));
}
void TargetGenerator::forgetTargetType(const std::string &tarName)
{
    std::map<std::string, ATarget *>::iterator it = data.find(tarName);
    if (it != data.end())
        delete it->second;
    data.erase(tarName);
}
ATarget* TargetGenerator::createTarget(const std::string &tarName)
{
    ATarget *tar = data[tarName];
    if (tar)
        return (tar);
    return (NULL); 
}