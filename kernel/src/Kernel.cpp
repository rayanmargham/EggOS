#include "KernelUtil.h"
#include "Memory/Heap.h"
#include "Scheduling/PIT/PIT.h"
#include "Main.h"

extern "C" void KernelStart(BootInfo* BootInfo){

    KernelInfo KernelInfo = InitializeKernel(BootInfo);
    
    Start();

    while(true){
        asm ("hlt");
    }
}