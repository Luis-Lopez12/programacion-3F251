
#include <iostream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>

using namespace ftxui;
int main(int argc, char const *argv[])
{
    Screen pantalla =Screen::Create(
        DimensionFull();
        Dimension::Full()
    
    );
    
    auto document = hbox({
        vbox()
    });
    ftxui::Render(pantalla,document);


    return EXIT_SUCCESS;
}
