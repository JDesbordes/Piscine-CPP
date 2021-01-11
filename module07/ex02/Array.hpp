#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<class T>
class Array
{

	public:
		Array() : array(new T[0]), _size(0){};
		~Array()
		{
			delete[](array);
		};
		Array<T>( Array const & src ) : array(new T[src.size()]), _size(src.size())
		{
			for (unsigned int i = 0; i < _size; i++)
			{
				array[i] = src[i];
			}
		};
		Array(unsigned int n): array(new T[n]), _size(n)
		{
			for (unsigned int i = 0; i < _size; i++)
                array[i] = T();
		};

		unsigned int size() const
		{
			return (_size);
		}

		Array<T>	&operator=( Array const & rhs )
		{
			if (this->array)
                delete[] this->array;
            array = new T[rhs.size()];
            _size = rhs.size();
            for (unsigned int i = 0; i < _size; i++)
                array[i] = T(rhs[i]);
            return (*this);
		};

		T &		operator[](unsigned int index)
		{
			if (index >= _size)
				throw IndexOutOfBoundsException();
			return (this->array[index]);
		}

		const T &	operator[](unsigned int index) const
		{
			if (index >= _size)
				throw IndexOutOfBoundsException();
			T &temp = this->array[index];
			return (temp);
		}

		class IndexOutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what () const throw(){return ("Index out of bounds :(");};
		};

	private:
		T *array;
		const unsigned int _size;
};

#endif /* *********************************************************** ARRAY_H */