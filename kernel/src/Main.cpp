#include "Scheduling/PIT/PIT.h"
#include "Memory/Heap.h"
#include "BasicRenderer.h"
#include "Main.h"
#include "Applications/EggPad/eggpad.h"
void Start(){
    uint32_t color = GlobalRenderer->Colour;
    PIT::SetDivisor(65535);
    GlobalRenderer->Next();
    GlobalRenderer->Print("Welcome To ");
    GlobalRenderer->Colour = 0x132dad;
    GlobalRenderer->Print("EggOS");
    PIT::Sleep(1000);
    GlobalRenderer->Next();
    GlobalRenderer->Next();
    GlobalRenderer->Colour = color;
    GlobalRenderer->Print("KERNEL: ");
    GlobalRenderer->Colour = 0x00ff1e;
    GlobalRenderer->Print("OK");
    GlobalRenderer->Colour = 0xf2ff00;
    GlobalRenderer->Print(" \(NOTE: KEYBOARD DISABLING HAS NOT BEEN IMPLENTED YET SO YOU CAN STILL TYPE THIS WILL BE CHANGED IN THE FUTURE\)");
    GlobalRenderer->Colour = color;
    GlobalRenderer->Next();
    PIT::Sleep(50);
    GlobalRenderer->Print("EggOS Modules: ");
    GlobalRenderer->Colour = 0x00ff1e;
    GlobalRenderer->Print("OK");
    PIT::Sleep(40);
    GlobalRenderer->Next();
    GlobalRenderer->Next();
    for (int i = 1; i < 5; i++){
        GlobalRenderer->Print("EGGS EGGS EGGS EGGS EGGTIME EGGS EGGS EGGS FUNNY EGG AH YES THE EGG IT IS THE FUNNY EGG HAHHAHAH");
        GlobalRenderer->Next();
        PIT::Sleep(50);
        GlobalRenderer->Print("I LOVE THE EGG ITS SO FUNNI!");
        GlobalRenderer->Next();
        
    }
    PIT::Sleep(50);
    GlobalRenderer->Clear();
    GlobalRenderer->CursorPosition = {0, 0};
    GlobalRenderer->Colour = color;
    GlobalRenderer->Print("EggOS:Launching EGGPad 1.00 |");
    for (int i = 1; i < 10; i++){
    GlobalRenderer->ClearChar();
    GlobalRenderer->Print("/");
    PIT::Sleep(100);
    GlobalRenderer->ClearChar();
    GlobalRenderer->Print("-");
    PIT::Sleep(100);
    GlobalRenderer->ClearChar();
    GlobalRenderer->Print("\\");
    PIT::Sleep(100);
    GlobalRenderer->ClearChar();
    GlobalRenderer->Print("|");
    PIT::Sleep(100);
    GlobalRenderer->ClearChar();
    GlobalRenderer->Print("/");
      
    }
    GlobalRenderer->Next();
    GlobalRenderer->Colour = 0x00ff1e;                                                                                                                                                                    
    GlobalRenderer->Print("DONE");     
    PIT::Sleep(100);
    GlobalRenderer->Clear();
    GlobalRenderer->Colour = color;
    GlobalRenderer->CursorPosition = {0,0};
    StartPad();                                                                                                                          

    
   
} 