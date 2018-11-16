# Mint
A Lightweight Command Line Game Engine

## Plan
Make a game engine for command line games. Create easier abstraction layers on top of NCurses for rendering simple as well as more complex objects. Support blending and z-index layering (painters algorithm & depth buffer) for drawing objects to the viewport. Have object hierarchy in a scene with viewport-decoupled transforms (ie world->viewport tranformation matrix). Support console logging from within the application (since it's in terminal that's not a given). Create abstraction layer on FMOD for audio. Basically make a unity-inspired abstraction for the application to run in, but in a console application.

## Stuff So Far
* FMOD is in there, no engine code to run it yet
* NCurses is in there, used for rendering
### Rendering
* 3 Primitive Renderable Objects: MTChar MTLabel and MTMesh
* MTMesh allows complex objects made out of chars at defined positions to render
* Works basically like a mesh with vertex data
### Logging
* Popover window for logging
* static functions to log normal, error, and warning
* can hide the console with a macro
