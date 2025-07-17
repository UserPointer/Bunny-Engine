#pragma once

#include "../core/window/lve_window.hpp"

namespace lve
{
    class FirstApp
    {   
        public:
            FirstApp();
            void run();

            
        private:    
            static constexpr int WIDTH = 800;
            static constexpr int HEIGHT = 600;
            
            LveWindow lveWindow;
    };
}