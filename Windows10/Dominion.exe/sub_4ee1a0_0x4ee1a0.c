// 函数: sub_4ee1a0
// 地址: 0x4ee1a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t i = arg5
int32_t* edx_2 = *(((i s% 0x2717) << 2) + &data_1938e70)

if (edx_2 == 0)
label_4ee1e1:
    int32_t i_3 = i
    sub_4f7f30("Couldn't lookup %d\n")
    edx_2 = nullptr
else
    while (*edx_2 != i)
        edx_2 = edx_2[0x6e]
        
        if (edx_2 == 0)
            goto label_4ee1e1

int32_t esi = 1
int32_t ecx_3 = arg7

if (arg6 != 0xffffffff)
    int32_t ebx_1 = arg6 + ecx_3 * 6
    int32_t i_6 = *((ebx_1 << 2) + &data_19e1450)
    
    if (i_6 s> 0)
        int32_t i_5 = i_6
        void* ecx_7 = ebx_1 * 0xc80 + &data_1942ad0
        int32_t i_1
        
        do
            bool cond:0_1 = *ecx_7 != i
            int32_t eax_10 = esi + 1
            ecx_7 += 4
            
            if (cond:0_1)
                eax_10 = esi
            
            esi = eax_10
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        ecx_3 = arg7
    
    int32_t eax_12 = ebx_1 * 0x320 + *((ebx_1 << 2) + &data_19e1450)
    *((ebx_1 << 2) + &data_19e1450) += 1
    *((eax_12 << 2) + &data_1942ad0) = i
else
    int32_t i_4 = *((ecx_3 << 2) + &data_19e1708)
    arg5 = i_4
    
    if (i_4 s> 0)
        void* ecx_5 = ecx_3 * 0xc80 + &data_19ca9d0
        int32_t i_2
        
        do
            bool cond:1_1 = *ecx_5 != i
            int32_t eax_5 = esi + 1
            ecx_5 += 4
            
            if (cond:1_1)
                eax_5 = esi
            
            esi = eax_5
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        ecx_3 = arg7
        i_4 = arg5
    
    *(((ecx_3 * 0x320 + i_4) << 2) + &data_19ca9d0) = i
    *((ecx_3 << 2) + &data_19e1708) = i_4 + 1

if (esi s> 0xc)
    esi = 0xc

void* ebx_3 = &arg3[arg4 * 0x34]
*(ebx_3 + 0x18) = i
*(ebx_3 + 0x1c) = edx_2[1]

if (arg6 != 0xffffffff)
    *(ebx_3 + arg6 + 0x2c) = 1
    
    if ((*(arg9 + (arg2 << 2)) & 2) == 0)
        *(ebx_3 + 0x35) = 1
    
    if ((*(arg9 + (arg2 << 2)) & 4) == 0)
        *(ebx_3 + 0x36) = 1

*(ebx_3 + 0x28) = ecx_3
int32_t ecx_8 = edx_2[3]
*(ebx_3 + 0x20) = edx_2[2]
*(ebx_3 + 0x24) = ecx_8
*(ebx_3 + 0x32) = esi.w
*(ebx_3 + 0x47) = *(edx_2 + 0x10)
*(ebx_3 + 0x57) = edx_2[8]

if ((arg8 & 4) != 0)
    *(ebx_3 + 0x38) = 1

if ((arg8 & 8) != 0)
    *(ebx_3 + 0x39) = 1

int32_t result = sx.d(*arg3)

if (result s<= arg4)
    result = arg4 + 1
    *arg3 = result.w

return result
