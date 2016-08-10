#include <boost/numeric/ublas/matrix.hpp>

class Layer
{
	public:
	int x;
	boost::numeric::ublas::matrix m;
	Layer();
	~Layer();
};

