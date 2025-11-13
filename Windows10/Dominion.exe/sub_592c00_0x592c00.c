// 函数: sub_592c00
// 地址: 0x592c00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t ebx = zx.d(arg4)

if (ebx u>= 0x320)
    sub_591930()

void* eax_1 = ebx * 0x64 + arg3
void* esi_1 = nullptr
uint32_t eax_2 = *(eax_1 + 0x1a4c)
void* var_10 = eax_2
uint32_t eax_3

if (arg5 != 0)
    int32_t i_4 = arg2[0x15e2]
    
    if (i_4 s<= 0)
        goto label_592dab
    
    void* eax_11 = &arg2[2]
    int32_t i_3 = i_4
    int32_t i
    
    do
        int32_t ecx_2 = *eax_11
        
        if ((ecx_2 == 1 || ecx_2 == 2) && *(eax_11 + 4) == var_10)
            esi_1 = eax_11
        
        eax_11 += 0x1c
        i = i_3
        i_3 -= 1
    while (i != 1)
    ebx = zx.d(arg4)
    
    if (esi_1 == 0)
        i_4 = arg2[0x15e2]
    label_592dab:
        esi_1 = &arg2[i_4 * 7 + 2]
        arg2[0x15e2] = i_4 + 1
        __builtin_memset(esi_1, 0, 0x1c)
        
        if (ebx u>= 0x320)
            sub_591930()
        
        void* eax_18 = sub_571b30(*(eax_1 + 0x1a4c), *(arg3 + 0xd48))
        int32_t eax_21 = 1
        
        if (((*(eax_18 + 0x98) & 0x7f000400) | (*(eax_18 + 0x9c) & 0x940)) != 0)
            eax_21 = 2
        
        *esi_1 = eax_21
        *(esi_1 + 4) = var_10
        *(esi_1 + 0xc) = 0
    
    eax_3 = arg5
    *(esi_1 + 0xc) += 1
    *(esi_1 + 8) += eax_3
    *arg2 += eax_3
else
    if (ebx u>= 0x320)
        sub_591930()
        eax_2 = sub_591930()
    
    eax_3 = sub_5754f0(eax_2, *(eax_1 + 0x1a4c), arg3, 0x4000000, 0)
    
    if (eax_3.b == 0)
        if (ebx u>= 0x320)
            sub_591930()
        
        if (sub_5754f0(eax_1, *(eax_1 + 0x1a4c), arg3, 0x40000000, 0) == 0)
            eax_3 = eax_1
        label_592cec:
            
            if (*(eax_3 + 0x1a70) != 0xffffffff)
                int32_t i_5 = arg2[0x15e2]
                void* eax_6
                
                if (i_5 s> 0)
                    eax_6 = &arg2[2]
                    int32_t i_2 = i_5
                    int32_t i_1
                    
                    do
                        if (*eax_6 == 3 && *(eax_6 + 4) == var_10)
                            esi_1 = eax_6
                        
                        eax_6 += 0x1c
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                
                if (i_5 s<= 0 || esi_1 == 0)
                    esi_1 = &arg2[i_5 * 7 + 2]
                    arg2[0x15e2] = i_5 + 1
                    eax_6 = var_10
                    *esi_1 = 3
                    *(esi_1 + 4) = eax_6
                    *(esi_1 + 8) = 0
                
                *(esi_1 + 8) += 1
                return eax_6
        else
            if (ebx u>= 0x320)
                sub_591930()
            
            eax_3 = eax_1
            
            if (*(eax_3 + 0x1a4c) == 0xd4d)
                goto label_592cec
            
            if (ebx u>= 0x320)
                sub_591930()
                eax_3 = eax_1
            
            if (*(eax_3 + 0x1a4c) == 0xd4e)
                goto label_592cec

return eax_3
