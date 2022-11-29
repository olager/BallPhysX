#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cmath>
const int W = 900;
const int H = 600;
using namespace sf;

//int main()
//{
//    RenderWindow window(VideoMode(200, 200), "SFML works!");
//    CircleShape shape(100.f);
//    shape.setFillColor(Color::Green);
//
//    while (window.isOpen())
//    {
//        Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == Event::Closed)
//                window.close();
//        }
//
//        window.clear();
//        window.draw(shape);
//        window.display();
//    }
//
//    return 0;
//}
int main()
{
	sf::RenderWindow window(sf::VideoMode(W, H), "My SFML WORKS!!!");
	while (true)
	{



		Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();
		}
		if (IntRect(125, 150, 550, 104).contains(Mouse::getPosition(window)))
		{
			//Continue.setColor(Color::Blue);
			if (Mouse::isButtonPressed(Mouse::Left)){}
				//menuNum = 1;

		}
		else
		{
			//Continue.setColor(Color::White);
		}
		if (IntRect(125, 250, 550, 104).contains(Mouse::getPosition(window)))
		{
			//NewGame.setColor(Color::Blue);
			if (Mouse::isButtonPressed(Mouse::Left)){}
				//menuNum = 2;
		}
		else
		{
			//NewGame.setColor(Color::White);
		}
		if (IntRect(125, 350, 550, 104).contains(Mouse::getPosition(window)))
		{
			//ChooseLevel.setColor(Color::Blue);
			if (Mouse::isButtonPressed(Mouse::Left)){}
				//menuNum = 3;
		}
		else
		{
			//ChooseLevel.setColor(Color::White);
		}
		if (IntRect(125, 459, 550, 104).contains(Mouse::getPosition(window)))
		{
			//Settings.setColor(Color::Blue);
			if (Mouse::isButtonPressed(Mouse::Left)){}
				//menuNum = 4;
		}
		else
		{
			//Settings.setColor(Color::White);
		}
		if (IntRect(125, 560, 550, 104).contains(Mouse::getPosition(window)))
		{
			//Info.setColor(Color::Blue);
			if (Mouse::isButtonPressed(Mouse::Left)){}
				//menuNum = 5;
		}
		else
		{
			//Info.setColor(Color::White);
		}
		if (IntRect(125, 669, 550, 104).contains(Mouse::getPosition(window)))
		{
			//Quit.setColor(Color::Blue);
			if (Mouse::isButtonPressed(Mouse::Left)){}
				//menuNum = 6;
		}
		else
		{
			//Quit.setColor(Color::White);
		}
		if (Mouse::isButtonPressed(Mouse::Left))
		{
			//if (menuNum == 1) { continuee = 1; Menu = 0; gamerun = 1; gamestart = true; }//если нажали первую кнопку, то выходим из меню 
			//if (menuNum == 2) { bought[0] = 0; bought[1] = 0; Menu = 0; gamerun = 1; gamestart = true; }
			//if (menuNum == 3) { AdvMenu = 1; RaznMenu = 1; levelchange(window); }//если нажали первую кнопку, то выходим из меню 
			//if (menuNum == 4) { AdvMenu = 1; RaznMenu = 2; }
			//if (menuNum == 5)
			/*{
				AdvMenu = 1; RaznMenu = 3;
				dd = 1;
			}
			if (menuNum == 6) { Menu = 0; gamestart = false; gamerun = 0; gg = 0; }*/
		}

		window.clear();



		/*if (true)
		{
			window.draw(menuBG);
			window.draw(Continue);
			window.draw(NewGame);
			window.draw(Settings);
			window.draw(Quit);
			window.draw(Info);
			window.draw(ChooseLevel);
			window.draw(RectangleCon);
			window.draw(RectangleCHL);
			window.draw(RectangleNG);
			window.draw(RectangleSet);
			window.draw(RectangleI);
			window.draw(RectangleQ);
			if (dd == 1)
			{
				window.draw(InfoG);
				if (Keyboard::isKeyPressed(Keyboard::Escape))
				{
					dd = 0;
				}

			}

		}*/
		window.display();

	}
    //float x1 = W / 4;
    //float y1 = H / 2;
    //float x2 = W / 4 * 3;
    //float y2 = H / 2;
    //float r1 = 50;
    //float r2 = 50;
    //float dx1 = rand() % 10;
    //float dy1 = rand() % 10;
    //float dx2 = rand() % 10;
    //float dy2 = rand() % 10;
    //sf::Color col1 = sf::Color(255, 0, 255);
    //sf::Color col2 = sf::Color(255, 255, 0);
   
    //sf::CircleShape shape(0);


    //while (window.isOpen())
    //{
    //    sf::Event event;
    //    while (window.pollEvent(event))
    //    {
    //        if (event.type == sf::Event::Closed)
    //            window.close();
    //    }
    //    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
    //    {
    //        window.close();
    //    }


    //    x1 += dx1;
    //    y1 += dy1;
    //    if ((x1 + r1 > W) || (x1 - r1 < 0)) {
    //        dx1 = -dx1;
    //    }
    //    if ((y1 + r1 > H) || (y1 - r1 < 0)) {
    //        dy1 = -dy1;
    //    }
    //    x2 += dx2;
    //    y2 += dy2;
    //    if ((x2 + r2 > W) || (x2 - r2 < 0)) {
    //        dx2 = -dx2;
    //    }
    //    if ((y2 + r2 > H) || (y2 - r2 < 0)) {
    //        dy2 = -dy2;
    //    }


    //    float Dx = x1 - x2;
    //    float Dy = y1 - y2;
    //    float d = sqrt(Dx * Dx + Dy * Dy); if (d == 0) d = 0.01;
    //    float s = Dx / d; // sin
    //    float e = Dy / d; // cos
    //    if (d < r1 + r2) {
    //        float Vn1 = dx2 * s + dy2 * e;
    //        float Vn2 = dx1 * s + dy1 * e;
    //        float dt = (r2 + r1 - d) / (Vn1 - Vn2);
    //        if (dt > 0.6) dt = 0.6;
    //        if (dt < -0.6) dt = -0.6;
    //        x1 -= dx1 * dt;
    //        y1 -= dy1 * dt;
    //        x2 -= dx2 * dt;
    //        y2 -= dy2 * dt;
    //        Dx = x1 - x2;
    //        Dy = y1 - y2;
    //        d = sqrt(Dx * Dx + Dy * Dy); if (d == 0) d = 0.01;
    //        s = Dx / d; // sin
    //        e = Dy / d; // cos
    //        Vn1 = dx2 * s + dy2 * e;
    //        Vn2 = dx1 * s + dy1 * e;
    //        float Vt1 = -dx2 * e + dy2 * s;
    //        float Vt2 = -dx1 * e + dy1 * s;


    //        float o = Vn2;
    //        Vn2 = Vn1;
    //        Vn1 = o;


    //        dx1 = Vn2 * s - Vt2 * e;
    //        dy1 = Vn2 * e + Vt2 * s;
    //        dx2 = Vn1 * s - Vt1 * e;
    //        dy2 = Vn1 * e + Vt1 * s;
    //        x1 += dx1 * dt;
    //        y1 += dy1 * dt;
    //        x2 += dx2 * dt;
    //        y2 += dy2 * dt;
    //    }





    //    window.clear();

    //    shape.setRadius(r1);
    //    shape.setOrigin(r1, r1);
    //    shape.setPosition(x1, y1);
    //    shape.setFillColor(col1);
    //    window.draw(shape);

    //    shape.setRadius(r2);
    //    shape.setOrigin(r2, r2);
    //    shape.setPosition(x2, y2);
    //    shape.setFillColor(col2);
    //    window.draw(shape);


    //    window.display();
    //    sf::sleep(sf::milliseconds(int(1000 / 120)));
    //}

    return 0;
}