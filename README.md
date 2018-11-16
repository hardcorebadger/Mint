# Mint
A Lightweight Command Line Game Engine

## The Idea
* Based on NCurses, you've got your windows - in mint they are called scenes (like Unity)
* Scenes have object hierarchies like in unity, but everything is determined in 2D coordinates not 3D
* objects has transforms - mainly position, maybe I'll deal with rotation and scale
* objects can have a charMesh - basically the ncurses equivalent of a mesh - its basicallt a textfile showing the ascii characters, and other basically vert attrib arrays (like defining a texture by saying the color at each position)
* charRenderer has a charBody and a charMaterial - basically a shader equivalent - takes in the charMesh and renders it to window
