#include "../../Scheduling/PIT/PIT.h"
#include "../../Memory/Heap.h"
#include "../../BasicRenderer.h"
#include "eggpad.h"

void StartPad(){
    GlobalRenderer->Print("Welcome To EGGPad, You Know What It Does!");
    GlobalRenderer->Next();
    GlobalRenderer->Print("Nothing Is Saved Here At The Moment. Write What You'd Like!");
    GlobalRenderer->Print(" May I suggest the funny EGG HAHA EGG");
    GlobalRenderer->Next();
    GlobalRenderer->Next();

}