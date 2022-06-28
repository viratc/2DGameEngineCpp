#include "Game.h"
#include <iostream>

// Constructor method
Game::Game() {
    std::cout<< "Game constructor called!!" << std::endl;
}

// We essentially have to implement all the methods from Game.h
Game::~Game() {
    std::cout<< "Game destructor called!!" << std::endl;
}

void Game::Initialize() {

}

void Game::Run() {
    while(true){
        ProcessInput();
        Update();
        Render();
    }

}

void Game::ProcessInput() {

}

void Game::Update() {

}

void Game::Render() {

}

void Game::Destroy() {

}

