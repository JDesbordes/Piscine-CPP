#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<class T>
class Array
{

	public:
		Array() : array(new T[0]), size(0){};
		~Array()
		{
			delete[](array);
		};
		Array( Array const & src ) : array(new T[src.getSize()]), size(src.getSize())
		{
			for (unsigned int i = 0; i < size; i++)
			{
				array[i] = src[i];
			}
		};
		Array(unsigned int n): array(new T[n]), size(n){};

		unsigned int getSize() const
		{
			return (size);
		}

		Array &		operator=( Array const & rhs )
		{
			Array arr(rhs);
			return(arr);
		};

		T &		operator[](unsigned int index)
		{
			if (index >= size)
				throw IndexOutOfBoundsException();
			return (this->array[index]);
		}

		T &		operator[](unsigned int index) const
		{
			if (index >= size)
				throw IndexOutOfBoundsException();
			return (this->array[index]);
		}

		class IndexOutOfBoundsException : public std::exception
		{
			public:
				IndexOutOfBoundsException () throw() {} ;
				IndexOutOfBoundsException (const IndexOutOfBoundsException&) throw() {} ;
				IndexOutOfBoundsException& operator= (const IndexOutOfBoundsException&) throw() {} ;
				virtual ~IndexOutOfBoundsException() throw() {};
				virtual const char* what () const throw(){return ("Index out of bounds :(");};
		};

	private:
		T *array;
		const unsigned int size;
};

#endif /* *********************************************************** ARRAY_H */