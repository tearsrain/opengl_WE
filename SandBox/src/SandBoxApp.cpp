#include "OE.h"

class SandBox : public OE::Application {
public:
	SandBox() {
	
	
	}
	~SandBox()
	{

	}
};

OE::Application* OE::CreateApplication() {
	return new SandBox();
}