#ifndef SHEETOFPAPER_HPP
# define SHEETOFPAPER_HPP

# include "Enemy.hpp"

class SheetOfPaper : public Enemy
{
	public:
	SheetOfPaper();
	virtual ~SheetOfPaper();
	SheetOfPaper(SheetOfPaper const &copied);
	SheetOfPaper& operator=(const SheetOfPaper &copied);
	virtual void takeDamage(int);
};

#endif
