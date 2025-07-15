#include "lve_window.hpp"

namespace lve
{  
    LveWindow::LveWindow(int w, int h, std::string n) : WIDTH(w), HEIGHT(h), windowName(n)
    {
        initWindow();
    }

    void LveWindow::initWindow()
    {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);   // A hint that is needed so that the Opengl concrete
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);     // A hint that is needed to prohibit the change of the window after its creation 

        window = glfwCreateWindow(WIDTH, HEIGHT, windowName.c_str(), nullptr, nullptr);
    }

    LveWindow::~LveWindow()
    {
        glfwDestroyWindow(window);
        glfwTerminate();
    }
}