//
//  helpers.hpp
//  Entity Rotation
//
//  Created by Justin Byrne on 5/29/22.
//

#ifndef helpers_hpp
#define helpers_hpp

#include <SDL2/SDL.h>
#include <stdio.h>

#pragma mark - RANDOM NUMBER

int generate_random ( int lower, int upper );

#pragma mark - ARRAY

void array_shift ( int * array, int SIZE_1D, bool shift_left, int positions_to_shift );

void array_shift ( int array[][2], int SIZE_1D, int SIZE_2D, bool shift_left, int positions_to_shift );

#pragma mark - GEOMETRY

bool isInsideCircle ( int point_x, int point_y, int circle_x, int circle_y, int radius );

#pragma mark - SDL

int SDL_RenderDrawCircle ( SDL_Renderer * renderer, int x, int y, int radius );

int SDL_RenderFillCircle ( SDL_Renderer * renderer, int x, int y, int radius );

#endif /* helpers_hpp */
