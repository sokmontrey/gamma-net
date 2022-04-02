#ifndef MODEL_HH
#define MODEL_HH

#include <iostream>
#include <vector>

#include "../Matrix/matrix.hh"
#include "./layer.hh"

class Model{
	private:
		vector<int> shape;
		//including input layer
		vector<Layer> layers;
	public:
		Model(vector<int> shape);
		Model(vector<int> shape, vector<Matrix (*)(Matrix& a, bool isDerivative) activations>);
		Model(vector<Layer> layers);

		/*__setter__*/
		void setActivation(vector<Matrix (*)(Matrix& a, bool isDerivative)> activations);
};

#endif
