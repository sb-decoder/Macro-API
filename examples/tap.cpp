#include <macro/macro.h>

#include <iostream>

int main() {
    Macro::Misc::Sleep(2000);
    Macro::Keyboard::Down(Macro::Keyboard::Key::SHIFT);
    Macro::Keyboard::Tap(Macro::Keyboard::Key::H);
    Macro::Keyboard::Up(Macro::Keyboard::Key::SHIFT);

    Macro::Keyboard::Tap(Macro::Keyboard::Key::E);
    Macro::Keyboard::Tap(Macro::Keyboard::Key::L);
    Macro::Keyboard::Tap(Macro::Keyboard::Key::L);
    Macro::Keyboard::Tap(Macro::Keyboard::Key::O);

    Macro::Keyboard::Tap(Macro::Keyboard::Key::COMMA);
    Macro::Keyboard::Tap(Macro::Keyboard::Key::SPACE);

    Macro::Keyboard::Tap(Macro::Keyboard::Key::W);
    Macro::Keyboard::Tap(Macro::Keyboard::Key::O);
    Macro::Keyboard::Tap(Macro::Keyboard::Key::R);
    Macro::Keyboard::Tap(Macro::Keyboard::Key::L);
    Macro::Keyboard::Tap(Macro::Keyboard::Key::D);

    Macro::Keyboard::Down(Macro::Keyboard::Key::SHIFT);
    Macro::Keyboard::Tap(Macro::Keyboard::Key::ONE);
    Macro::Keyboard::Up(Macro::Keyboard::Key::SHIFT);

    std::cout << "Done!" << std::endl;
    std::cin.get();

    return 0;
}
