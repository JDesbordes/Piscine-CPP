#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << " = top val" << std::endl;

	mstack.pop();

	std::cout << mstack.size() << " = size" << std::endl;
	std::cout << mstack.empty() << " = empty" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	std::cout << std::endl << "--- iterator ---" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl << "--- reverse iterator ---" << std::endl;
	MutantStack<int>::reverse_iterator itr = mstack.rbegin();
	MutantStack<int>::reverse_iterator iter = mstack.rend();
	while (itr != iter)
	{
		std::cout << *itr << std::endl;
		++itr;
	}

	std::cout << std::endl << "--- const reverse iterator ---" << std::endl;
	MutantStack<int>::const_reverse_iterator itcr = mstack.crbegin();
	MutantStack<int>::const_reverse_iterator itecr = mstack.crend();
	while (itcr != itecr)
	{
		std::cout << *itcr << std::endl;
		++itcr;
	}

	std::cout << std::endl << "--- const iterator ---" << std::endl;
	MutantStack<int>::const_iterator itc = mstack.cbegin();
	MutantStack<int>::const_iterator itec = mstack.cend();
	while (itc != itec)
	{
		std::cout << *itc << std::endl;
		++itc;
	}

	std::stack<int> s(mstack);
	return 0;
}