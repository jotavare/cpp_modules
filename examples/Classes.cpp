/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:03:16 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:03:17 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
 * By default if we dont specify public or private, it will be private;
 * Anything that is done with classes can also be done without classes;
 * The only difference between a struct and a class is that a struct is public by default;
 * Structs only exist kinda to have backwards compatibility with C;
 * But seems like sementiccally, structs are used for plain data structures (vector, matrix, 2 variables);
 * While classes are used for objects that have methods (player movement, player information, a lot of information);
 */

class Player
{
public:
    int x, y;
    int speed;
};

void Move(Player &player, int xa, int ya)
{
    player.x += xa * player.speed;
    player.y += ya * player.speed;
}

int main()
{
    // instance of the class Player
    Player player;
    Move(player, 1, 1);
}

class Player
{
public:
    int x, y;
    int speed;

    // method, can be inside or outside of a class
    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};

int main()
{
    Player player;
    player.Move(1, -1);
}
