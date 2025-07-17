#include "first_app.hpp"


namespace lve
{

    FirstApp::FirstApp() : lveWindow(WIDTH, HEIGHT, "Window") {}
    
    void FirstApp::run()
    {
        while(!lveWindow.shouldClose())
        {
            glfwPollEvents();
        }
    }
}