// 函数: sub_57c810
// 地址: 0x57c810
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* var_c98 = arg4
uint32_t eax_2

if (arg4 != 0xffffffff)
    int32_t eax_10
    void* ecx_4
    char edx_2
    TEB* fsbase
    
    if ((arg4.b & 0x30) == 0)
        eax_2 = sub_576940(arg4, arg2, arg3, arg4)
        uint32_t ebx_1 = eax_2
        
        if (*(ebx_1 + 0x58) == 0)
        label_57c989:
            eax_2.b = 1
            CookieCheckFunction(eax_2)
            return eax_2
        
        if (*(ebx_1 + 0x4c) != 2)
            eax_2 = sub_591930()
        
        void* eax_3 = sub_573260(eax_2, arg2, arg3, var_c98)
        int32_t ecx_1 = *(ebx_1 + 0x38)
        int32_t edx_1 = *(ebx_1 + 0x3c)
        void var_c90
        *(eax_3 + 0x48) = &var_c90
        *(eax_3 + 0x50) = ecx_1
        *(eax_3 + 0x54) = edx_1
        *(eax_3 + 0x44) = 0xffffffff
        *(eax_3 + 0x58) = *(ebx_1 + 0x74)
        *(eax_3 + 0x5c) = *(ebx_1 + 0x78)
        *(eax_3 + 0x68) = arg6
        *(eax_3 + 0x60) = arg7
        *(eax_3 + 0x64) = arg8
        edx_2 = (*(ebx_1 + 0x58))(arg5)
        ecx_4 = *fsbase->ThreadLocalStoragePointer
        eax_10 = *(ecx_4 + 0xf010)
        
        if (eax_10 s> 0)
        label_57c8e0:
            *(ecx_4 + 0xf010) = eax_10 - 1
            uint32_t eax_11
            eax_11.b = edx_2
            CookieCheckFunction(eax_11)
            return eax_11
        
    label_57ca0d:
        sub_63b870(eax_10, &data_801800, "cs.numContexts > 0", 
            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_12
    int32_t edx_3
    eax_12, edx_3 = sub_5769e0(arg4, arg2, arg3, arg4)
    eax_2 = sub_5915b0(eax_12, edx_3, arg3, var_c98)
    uint32_t ebx_2 = eax_2
    
    if (ebx_2 == 0)
    label_57c979:
        
        if (*eax_12 != 6)
            eax_2 = sub_591930()
        
        if (*(eax_12 + 0xa4) == 0)
            goto label_57c989
        
        void* eax_13 = sub_573260(eax_2, arg2, arg3, var_c98)
        *(eax_13 + 0x68) = arg6
        *(eax_13 + 0x64) = arg8
        edx_2 = (*(eax_12 + 0xa4))(arg5)
        ecx_4 = *fsbase->ThreadLocalStoragePointer
        eax_10 = *(ecx_4 + 0xf010)
        
        if (eax_10 s<= 0)
            goto label_57ca0d
        
        goto label_57c8e0
    
    eax_2 = sub_5754f0(eax_2, ebx_2, arg3, 0, 0x40)
    
    if (eax_2.b == 0)
        goto label_57c979
    
    if (*(arg3 + 0x19d8) != 0)
        eax_2 = sub_571b30(ebx_2, *(arg3 + 0xd48))
        int32_t ebx_3 = *(eax_2 + 0x90)
        
        if (ebx_3 == 0xffffffff)
            goto label_57c979
        
        eax_2 = sub_583fc0(eax_2, arg2, arg3, 0x1000)
        
        if (eax_2 s>= ebx_3)
            goto label_57c979

eax_2.b = 0
CookieCheckFunction(eax_2)
return eax_2
