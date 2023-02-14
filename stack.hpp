#ifndef FT_STACK
# define FT_STACK

# include <vector>
# include <deque>
# include <stack>

namespace ft
{

template<class T, class Container = std::deque<T> >
class	stack
{
	public :
		typedef	typename Container::value_type	value_type;
		typedef typename Container::size_type	size_type;
		typedef	Container						container_type;

	protected :
		container_type	c;

	public :
		explicit stack(const Container& = Container()) {}

		bool		empty(void) const {return (c.empty());}
		size_type	size(void) const {return (c.size());}
		void		push(const value_type& __v) {return (c.push_back(__v));}
};

}

#endif
