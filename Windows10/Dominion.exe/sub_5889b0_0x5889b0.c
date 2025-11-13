// 函数: sub_5889b0
// 地址: 0x5889b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = arg5

if (ebx != 0 || arg4 != 0x3ea)
label_588a38:
    void* eax_2 = sub_5887c0(arg1, arg2, arg3, 1)
    arg5 = eax_2
    
    if (eax_2 != 0)
        int32_t eax_3 = arg10
        
        if (eax_3 != 0xc)
            goto label_588a93
        
        int32_t var_18
        char const* const var_14
        
        if (ebx != 1)
            eax_3 = arg4
            
            if (eax_3 == 0x3ee)
                eax_3 = 0
                goto label_588a90
            
            if (eax_3 == 0x3ea || eax_3 == 0x460 || eax_3 == 0x45f)
                eax_3 = 3
                goto label_588a90
            
            var_14 = "CalcDrawRevealStyle"
            var_18 = 0x35dd
        else
            eax_3 = ebx + 4
        label_588a90:
            arg10 = eax_3
        label_588a93:
            int32_t ecx_5 = 0
            
            if (ebx == 2)
                eax_3 = arg3[0x541]
                
                if (eax_3 != 3 && eax_3 != 5 && eax_3 != 4 && eax_3 != 6 && arg3[0x540].b == 0)
                    uint32_t eax_4 = arg2
                    
                    if (arg2 == arg3[0x673])
                        eax_4 = arg3[0x674]
                    
                    eax_3 = sub_59f9b0(eax_4, arg2, arg3, eax_4, 0x2d, arg9, &arg5, 1, 1, 0, 0, 0)
                    ecx_5 = 0
                
                sub_5822e0(eax_3, arg2, arg3, arg5, nullptr, arg4, arg10, arg6, arg7, arg8, 0, 0, 
                    nullptr, ecx_5, 0xffffffff, nullptr)
                return arg5
            
            if (ebx == 1)
                eax_3 = arg3[0x541]
                
                if (eax_3 != 3 && eax_3 != 5 && eax_3 != 4 && eax_3 != 6 && arg3[0x540].b == 0)
                    uint32_t eax_5 = arg2
                    
                    if (arg2 == arg3[0x673])
                        eax_5 = arg3[0x674]
                    
                    eax_3 = sub_59f9b0(eax_5, arg2, arg3, eax_5, 0x2c, arg9, &arg5, 1, 0, 0, 0, 0)
                    ecx_5 = 0
                
                sub_5822e0(eax_3, arg2, arg3, arg5, nullptr, arg4, arg10, arg6, arg7, arg8, 0, 0, 
                    nullptr, ecx_5, 0xffffffff, nullptr)
                return arg5
            
            if (ebx == 0)
                uint32_t ecx_9 = zx.d(sub_582040(eax_3))
                eax_3 = arg3[0x541]
                
                if (eax_3 != 3 && eax_3 != 5 && eax_3 != 4 && eax_3 != 6 && arg3[0x540].b == ebx.b)
                    uint32_t eax_7 = arg2
                    
                    if (arg2 == arg3[0x673])
                        eax_7 = arg3[0x674]
                    
                    eax_3 = sub_59f9b0(eax_7, arg2, arg3, eax_7, (ecx_9 ^ 1) + 0x2e, arg9, &arg5, 
                        1, 0, 0, 0, 0)
                
                sub_5822e0(eax_3, arg2, arg3, arg5, nullptr, arg4, arg10, arg6, arg7, arg8, 0, 0, 
                    nullptr, 0, 0xffffffff, nullptr)
                return arg5
            
            if (ebx == 3)
                sub_5822e0(eax_3, arg2, arg3, arg5, nullptr, arg4, arg10, arg6, arg7, arg8, 0, 0, 
                    nullptr, 1, 0xffffffff, nullptr)
                return arg5
            
            var_14 = "DrawCardToNoShuffle"
            var_18 = 0x36ab
        
        sub_63b870(eax_3, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
            var_18, var_14)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
else
    arg1 = sub_571ee0(arg1, arg2, arg3, 0xb08)
    
    if (arg1 == 0xffffffff)
        goto label_588a38
    
    arg1 <<= 5
    
    if (*(arg1 + arg3 + 0x152dc) == ebx)
        goto label_588a38
    
    uint32_t eax = sub_571ee0(arg1, arg2, arg3, 0xb08)
    uint32_t edi_1 = eax
    
    if (edi_1 == 0xffffffff)
        eax = sub_591930()
    
    if (arg3[edi_1 * 8 + 0x54b7] != 1)
        eax = sub_591930()
    
    sub_571cb0(eax, edi_1, arg3, 0xffffffff, 0, 0)

return 0
