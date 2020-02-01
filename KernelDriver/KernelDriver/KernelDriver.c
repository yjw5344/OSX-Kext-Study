//
//  KernelDriver.c
//  KernelDriver
//
//  Created by Jungwon on 2020/02/01.
//  Copyright © 2020 Jungwon. All rights reserved.
//

#include <mach/mach_types.h>
#include <libkern/libkern.h>

kern_return_t KernelDriver_start(kmod_info_t * ki, void *d);
kern_return_t KernelDriver_stop(kmod_info_t *ki, void *d);

kern_return_t KernelDriver_start(kmod_info_t * ki, void *d)
{
    printf("Hello World!\n");
    return KERN_SUCCESS;
}

kern_return_t KernelDriver_stop(kmod_info_t *ki, void *d)
{
    printf("Goodbye World!\n");
    return KERN_SUCCESS;
}
