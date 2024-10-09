#include <SFML/Graphics.hpp>

int main() {
    // Create a window with the specified size and title
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Hello World");

    // Main loop, runs until the window is closed
    while (window.isOpen()) {
        // Process events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Clear the window with a black color
        window.clear(sf::Color::Black);

        // Create a text object to display
        sf::Font font;
        if (!font.loadFromFile("../Arial.ttf")) {
            // Error handling if the font can't be loaded
            return -1;
        }

        sf::Text text("Hello, SFML!", font, 50);
        text.setFillColor(sf::Color::White);
        text.setPosition(200, 250); // Center the text roughly

        // Draw the text to the window
        window.draw(text);

        // Display what has been drawn to the window
        window.display();
    }

    return 0;
}
