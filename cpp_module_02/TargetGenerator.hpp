#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP


#include "ATarget.hpp"
#include <iostream>
#include <vector>

class TargetGenerator
{   
    
    public:
        TargetGenerator();
        ~TargetGenerator();

    private:
        std::vector<ATarget *> _store;
        TargetGenerator(TargetGenerator &cp);
        TargetGenerator &operator=(TargetGenerator &cp);
    
    public:
       void     learnTargetType(ATarget*);
       void     forgetTargetType(std::string const &);
       ATarget* createTarget(std::string const &);

};

#endif
