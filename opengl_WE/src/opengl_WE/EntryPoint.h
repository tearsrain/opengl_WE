#pragma once

#ifdef OE_PLATFORM_WIN


extern OE::Application* OE::CreateApplication();

int main(int  args, char** argv) {

	auto app = OE::CreateApplication();
	app->Run();
	delete app;
	return 0;
}


#endif // OE_PLATFORM_WIN