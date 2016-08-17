#include <boost/numeric/ublas/matrix.hpp>

/** Layer is an Abstract Base Class containing general Layer operations.
 *
 *  To train a Neural Network, one generally has to calculate the gradient of
 *  the weights with respect to some loss function. This is an example of
 *  operation that this class is expected to have. Additionally, all Layers
 *  are composed by Neurons, which are generally manipulated as matrices.
 *  These "neurons" can be declared here. */
class Layer
{
public:
	boost::numeric::ublas::matrix<int> m;
	Layer();
	~Layer();

	// I am using these functions inspired by
	// https://github.com/lonl/CDBN/tree/master/toolbox/CDBNLIB
	//
	// void calculateGradients();
	// void applyGradients();
	// void feedForward();
};

