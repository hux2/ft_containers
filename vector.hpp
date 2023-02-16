#ifndef FT_VECTOR
# define FT_VECTOR

#include "vector_test.hpp"
#include <memory>
# include <vector>

namespace ft
{
	template<class T, class Alloc>
	struct	vector_base
	{
		public :
			typedef	Alloc										allocator_type;
			typedef	T											value_type;
			typedef	typename allocator_type::reference			reference;
			typedef	typename allocator_type::const_reference	const_reference;
			typedef	typename allocator_type::pointer			pointer;
			typedef	typename allocator_type::const_pointer		const_pointer;
			typedef	size_t										size_type;
			typedef	ptrdiff_t									difference_type;
			//iterator;
			//const_iterator;
			//reverse_iterator;
			//const_reverse_iterator;

		protected :
			
			

	};

	template<class T, class Alloc = std::allocator<T> >
	class	vector 
		: private vector_base<T, Alloc>
	{
		private :
			typedef	vector_base<T, Alloc>						base;
		public : 
			typedef	T											value_type;
			typedef	Alloc										allocator_type;
			typedef	typename base::reference					reference;
			typedef	typename base::const_reference				const_reference;
			typedef	typename base::pointer						pointer;
			typedef	typename base::const_pointer				const_pointer;
			typedef	typename base::size_type					size_type;
			typedef	typename base::difference_type				difference_type;
			//iterator;
			//const_iterator;
			//reverse_iterator;
			//const_reverse_iterator;
			
	};

}

#endif
