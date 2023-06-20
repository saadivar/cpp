#include "AMetria.hpp"

class ice  : public AMetria
{
    public:
        ice();
        ~ice();
        ice(const ice& am);
        ice& operator=(const ice& am);
        ice* clone() const;
        void use(ICharacter& target);
}