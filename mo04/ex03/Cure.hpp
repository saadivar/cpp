#include "AMetria.hpp"

class cure  : public AMetria
{
    public:
        cure();
        ~cure();
        cure(const cure& am);
        cure& operator=(const cure& am);
        cure* clone() const;
        void use(ICharacter& target);
}