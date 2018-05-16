

#include <SDL2/SDL_events.h>

void DispatchKeyboardEvents(SDL_Event& rEvent);
void UpdateEvents() {

    SDL_Event e;
    while(SDL_PollEvent(&e))
    {
        //Dispatch registered Keyboard Events.
        DispatchKeyboardEvents(e);
    }

}