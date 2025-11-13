// 函数: sub_693450
// 地址: 0x693450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = 0
int32_t var_c = arg2

if (arg4 s> 0)
    void* esi_2 = arg5 + 8
    
    while (true)
        int32_t ecx = *(arg2 + (edi << 2))
        int32_t eax = ecx * 0x32c
        *(esi_2 - 8) = ecx
        *(esi_2 - 4) = 2
        char** edx_2 = arg3 + 0xc + eax
        *esi_2 = edx_2
        char const* const eax_1
        
        switch (ecx)
            case 0
                eax_1 = "mouse left"
            label_6935c2:
                edi += 1
                *edx_2 = eax_1
                arg2 = var_c
                esi_2 += 0xc
                
                if (edi s>= arg4)
                    break
                
                continue
            case 1
                eax_1 = "mouse right"
                goto label_6935c2
            case 2
                eax_1 = "mouse scroll up"
                goto label_6935c2
            case 3
                eax_1 = "mouse scroll down"
                goto label_6935c2
            case 4
                eax_1 = "keyboard space"
                goto label_6935c2
            case 5
                eax_1 = "keyboard enter"
                goto label_6935c2
            case 6
                eax_1 = "keyboard esc"
                goto label_6935c2
            case 7
                eax_1 = "keyboard tab"
                goto label_6935c2
            case 8
                eax_1 = "keyboard left"
                goto label_6935c2
            case 9
                eax_1 = "keyboard right"
                goto label_6935c2
            case 0xa
                eax_1 = "keyboard up"
                goto label_6935c2
            case 0xb
                eax_1 = "keyboard down"
                goto label_6935c2
            case 0xe
                eax_1 = "keyboard paste"
                goto label_6935c2
            case 0xf
                eax_1 = "gamepad a"
                goto label_6935c2
            case 0x10
                eax_1 = "gamepad b"
                goto label_6935c2
            case 0x11
                eax_1 = "gamepad x"
                goto label_6935c2
            case 0x12
                eax_1 = "gamepad y"
                goto label_6935c2
            case 0x13
                eax_1 = "gamepad back"
                goto label_6935c2
            case 0x14
                eax_1 = "gamepad select"
                goto label_6935c2
            case 0x15
                eax_1 = "gamepad left dpad"
                goto label_6935c2
            case 0x16
                eax_1 = "gamepad left shoulder"
                goto label_6935c2
            case 0x17
                eax_1 = "gamepad right dpad"
                goto label_6935c2
            case 0x18
                eax_1 = "gamepad right shoulder"
                goto label_6935c2
            case 0x19
                eax_1 = "oc remote enter"
                goto label_6935c2
            case 0x1a
                eax_1 = "oc remote back"
                goto label_6935c2
            case 0x1b
                eax_1 = "oc remote up"
                goto label_6935c2
            case 0x1c
                eax_1 = "oc remote down"
                goto label_6935c2
            case 0x1d
                eax_1 = "oc remote left"
                goto label_6935c2
            case 0x1e
                eax_1 = "oc remote right"
                goto label_6935c2
            case 0x1f
                eax_1 = "gear remote trigger"
                goto label_6935c2
            case 0x20
                eax_1 = "gear remote touchpad"
                goto label_6935c2
            case 0x21
                eax_1 = "gear remote back"
                goto label_6935c2
            case 0x22
                eax_1 = "gear touchpad"
                goto label_6935c2
            case 0x23
                eax_1 = "gear back"
                goto label_6935c2
            case 0x2b
                eax_1 = "android back"
                goto label_6935c2
        
        sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\Controller.cpp", 0xae, 
            "ClickStateAlloc")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

return arg4
