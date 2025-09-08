#include <iostream>
#include <GLFW/glfw3.h>

int main() {
    std::cout << "Hello\n";

    GLFWwindow *window;

    if( !glfwInit() )
    {
        exit(EXIT_FAILURE);
    }

    window = glfwCreateWindow(300,300,"Test", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    while(!glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate;

}