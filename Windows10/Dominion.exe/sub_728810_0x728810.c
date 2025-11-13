// 函数: sub_728810
// 地址: 0x728810
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = *(arg1 + 0xa8)
void* eax = *(arg1 + 0xac)
void* var_8 = arg1 + 0x20

if (ebx u< eax)
label_728879:
    char edx = *ebx
    char* ebx_1 = ebx + 1
    void* var_c_1 = arg1 + 0xa8
    *(arg1 + 0xa8) = ebx_1
    
    if (edx == 0x42)
        if (ebx_1 u< eax)
        label_7288da:
            eax.b = *ebx_1
            *(arg1 + 0xa8) = &ebx_1[1]
            
            if (eax.b == 0x4d)
                sub_7203e0(arg1)
                sub_7203e0(arg1)
                sub_7203e0(arg1)
                sub_7203e0(arg1)
                sub_7203e0(arg1)
                sub_7203e0(arg1)
                uint32_t eax_8 = sub_7203e0(arg1)
                uint32_t eax_11 = (sub_7203e0(arg1) << 0x10) + eax_8
                
                if (eax_11 == 0xc || eax_11 == 0x28 || eax_11 == 0x38 || eax_11 == 0x6c
                        || eax_11 == 0x7c)
                    return 1
        else if (*var_8 != 0)
            ebx_1 = arg1 + 0x28
            void* eax_5 = (*(arg1 + 0x10))(*(arg1 + 0x1c), ebx_1, *(arg1 + 0x24))
            *(arg1 + 0xa8) = ebx_1
            
            if (eax_5 != 0)
                *(arg1 + 0xac) = eax_5 + 0x28 + arg1
            else
                *var_8 = 0
                *(arg1 + 0xac) = arg1 + 0x29
                *ebx_1 = 0
            
            goto label_7288da
else if (*(arg1 + 0x20) != 0)
    ebx = arg1 + 0x28
    void* eax_2 = (*(arg1 + 0x10))(*(arg1 + 0x1c), ebx, *(arg1 + 0x24))
    *(arg1 + 0xa8) = ebx
    
    if (eax_2 != 0)
        eax = eax_2 + 0x28 + arg1
        *(arg1 + 0xac) = eax
    else
        *(arg1 + 0x20) = eax_2
        eax = arg1 + 0x29
        *(arg1 + 0xac) = eax
        *ebx = 0
    
    var_8 = arg1 + 0x20
    goto label_728879

return 0
