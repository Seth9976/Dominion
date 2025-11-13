// 函数: sub_593ca0
// 地址: 0x593ca0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i_4 = arg5
int32_t* var_10 = arg3
void* i_6 = arg2
void* i_7 = i_6

if (i_4 s> 0)
    void* i_8 = i_6
    int32_t i_2 = i_4
    int32_t i
    
    do
        uint32_t edi_1 = zx.d(*(i_8 + arg4 - i_6))
        
        if (edi_1 u>= 0x320)
            sub_591930()
            arg3 = var_10
        
        *i_8 = arg3[edi_1 * 0x19 + 0x693]
        i_8 += 4
        i = i_2
        i_2 -= 1
    while (i != 1)
    i_6 = i_7
    i_4 = arg5

int32_t eax_2 = i_4 << 2
void* esi_1 = eax_2 + i_6
int32_t eax_3 = eax_2 s>> 2
sub_594ea0(eax_3, esi_1, i_6, eax_3, arg3)

if (i_6 != esi_1)
    void* i_3 = i_6 + 4
    void* i_5 = i_6
    
    if (i_3 != esi_1)
        int32_t ebx_1 = *i_6
        void* i_1
        
        while (true)
            int32_t edi_2 = *i_3
            i_1 = i_3 + 4
            
            if (ebx_1 == edi_2)
                break
            
            i_5 = i_3
            ebx_1 = edi_2
            i_3 = i_1
            
            if (i_3 == esi_1)
                return (esi_1 - i_7) s>> 2
        
        for (; i_1 != esi_1; i_1 += 4)
            int32_t edx_1 = *i_1
            
            if (*i_5 != edx_1)
                i_5 += 4
                *i_5 = edx_1
        
        esi_1 = i_5 + 4

return (esi_1 - i_7) s>> 2
