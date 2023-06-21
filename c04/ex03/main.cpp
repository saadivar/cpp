#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
int main()
{
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
        
    }
    
    {
        std::cout << "--COPY && ASIGN TESTES--" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		Character* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		Character* bob = new Character("bob");
        std::cout << "---ME---" << std::endl;
		Character *meCopy = new Character(*me);
		Character *bobCopy = new Character(*bob);
		me->use(0, *bob);
		me->use(1, *bob);
		std::cout << "---MECOPY--" << std::endl;
        delete (meCopy->Getadd(1));
        meCopy->unequip(1);
		meCopy->use(0, *bobCopy);
		meCopy->use(1, *bobCopy);

		delete src;
		delete bob;
		delete bobCopy;
		delete me;
		delete meCopy;
    
	}
    return 0;
}
