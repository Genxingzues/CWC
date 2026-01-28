#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
bool mark = true;
void display(GLFWwindow* window, char s) {
    if (s == 'R') {
        glClearColor(0.95f, 0.05f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
    }
    if (s == 'Y') {
        glClearColor(1.0f, 0.92f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
    }
    if (s == 'B') {
        glClearColor(0.05f, 0.05f, 0.95f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
    }
    if (s == 'O') {
        glClearColor(1.0f, 0.58f, 0.02f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
    }
    if (s == 'G') {
        glClearColor(0.0f, 0.95f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
    }
    if (s == 'P') {
        glClearColor(0.6f, 0.05f, 0.8f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
    }
}
char s;
int main() {
    std::cout << "Welcome to the Colorful Window Creator (CWC)! Press any key to continue:" << std::endl;
    system("read -n 1 -s -r");
    std::cout << "CWC currently supports six colors: Red (R), Yellow (Y), Blue (B), Orange (O), Green (G), and Purple (P)." << std::endl;
    std::cout << "Please enter the first letter of the color you want for your window:" << std::endl;
    std::cin >> s;
    if (s != 'R' && s != 'Y' && s != 'B' && s != 'O' && s != 'G' && s != 'P') {
        std::cout << "CWC works on all Unix-like platforms supporting OpenGL 4.1 or higher." << std::endl;
        return 0;
    }
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    GLFWwindow* window;
    if (s == 'R') {
        window = glfwCreateWindow(600, 600, "CWC - Red Window", NULL, NULL);
    }
    else if (s == 'Y') {
        window = glfwCreateWindow(600, 600, "CWC - Yellow Window", NULL, NULL);
    }
    else if (s == 'B') {
        window = glfwCreateWindow(600, 600, "CWC - Blue Window", NULL, NULL);
    }
    else if (s == 'O') {
        window = glfwCreateWindow(600, 600, "CWC - Orange Window", NULL, NULL);
    }
    else if (s == 'G') {
        window = glfwCreateWindow(600, 600, "CWC - Green Window", NULL, NULL);
    }
    else if (s == 'P') {
        window = glfwCreateWindow(600, 600, "CWC - Purple Window", NULL, NULL);
    }
    else {
        std::cout <<
            "Yo, lucky human! Yeah, you… the one staring at your screen. "
            "You probably will never see this message, because it’s sneakier than an OpenGL app "
            "on Apple Silicon getting magically translated into Metal before it even knows what hit it. 😂\n\n"

            "Just kidding… kinda. This little gem is here to calm down Clang—the diva of compilers—"
            "so it stops throwing warnings that basically never happen. "
            "If you do see this… congratulations, you sneaky little code ninja! 🥷 "
            "You’ve officially trespassed into the sacred halls of the CWC source code.\n\n"

            "Since you’re eyeballing my tiny but mighty window-making project, "
            "here’s a virtual high-five 🖐 and a cheeky wink 😉.\n\n"

            "Brace yourself: in the future, I’m gonna keep tinkering and leveling up CWC—"
            "turning it from ‘barely-there’ into ‘full-on, disco-light, rainbow-blasting, feature-packed mode’. 🌈✨ "
            "Fun surprises might just pop up like Easter eggs 🥚—one by one, totally unannounced.\n\n"

            "Good things are worth waiting for… so grab snacks 🍿, cozy up, and enjoy the suspense "
            "while secretly imagining me furiously coding behind the scenes, "
            "sprinkling magic bits of programmer wizardry everywhere. 🧙‍♂️💻\n\n"

            "P.S. If Clang somehow saw this too… sorry, Clang. You’re still the drama queen. 👑"
            << std::endl;
        return 0;
    }
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);
    while (!glfwWindowShouldClose(window)) {
        display(window, s);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    std::cout << "Thank you for using CWC! Hope to see you next time!" << std::endl;
    return 0;
}
