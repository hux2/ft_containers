#ifndef FT_STACK
# define FT_STACK

# include <vector>
# include <deque>
# include <stack>

namespace ft
{

template<class T, class Container = std::vector<T> >
class	stack
{
	public :
		typedef	Container							container_type;
		typedef	typename container_type::value_type	value_type;
		typedef typename container_type::size_type	size_type;

	protected :
		container_type	c;

	public :
		explicit stack(const Container& = Container()) {}
		// explicit stack(const container_type& __container = container_type()) : c(__container) {}

		bool				empty(void) const {return (c.empty());}
		size_type			size(void) const {return (c.size());}
		void				push(const value_type& __v) {return (c.push_back(__v));}
		void				pop(void) {return (c.pop_back());}
		value_type&			top(void) {return (c.back());}
		const value_type&	top(void) const {return (c.back());}

		template<class _T, class _Container>
		friend
		bool	operator== (const stack<T, Container>& __lhs, const stack<T, Container>& __rhs);

		template<class _T, class _Container>
		friend
		bool	operator< (const stack<T, Container>& __lhs, const stack<T, Container>& __rhs);

};

template<class T, class Container>
bool	operator== (const stack<T, Container>& __lhs, const stack<T, Container>& __rhs)
{
	return (__lhs.c == __rhs.c);
}

template<class T, class Container>
bool	operator!= (const stack<T, Container>& __lhs, const stack<T, Container>& __rhs)
{
	return (!(__lhs == __rhs));
}

template<class T, class Container>
bool	operator< (const stack<T, Container>& __lhs, const stack<T, Container>& __rhs)
{
	return (__lhs.c < __rhs.c);
}

template<class T, class Container>
bool	operator<= (const stack<T, Container>& __lhs, const stack<T, Container>& __rhs)
{
	return (!(__rhs < __lhs));
}

template<class T, class Container>
bool	operator> (const stack<T, Container>& __lhs, const stack<T, Container>& __rhs)
{
	return (__rhs < __lhs);
}

template<class T, class Container>
bool	operator>= (const stack<T, Container>& __lhs, const stack<T, Container>& __rhs)
{
	return (!(__lhs < __rhs));
}


}

#endif
