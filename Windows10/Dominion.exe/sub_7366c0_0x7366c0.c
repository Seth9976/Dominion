// 函数: sub_7366c0
// 地址: 0x7366c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* i = *arg2

while (i != 0)
    int32_t* i_9 = i
    i = i[4]
    sub_64c080(i_9, 0x18)

arg2[2] = 0
*arg2 = 0
arg2[1] = 0
int128_t* i_1 = *arg1

while (i_1 != 0)
    int128_t* i_6 = i_1
    i_1 = i_1[1].d
    int32_t* eax_1 = sub_64bfd0(0x18)
    eax_1[3] += 1
    
    if (*eax_1 == 0)
        sub_64be70(eax_1)
    
    int32_t* ecx_1 = *eax_1
    *eax_1 = *ecx_1
    __builtin_memset(ecx_1, 0, 0x18)
    *ecx_1 = *i_6
    ecx_1[5] = arg2[1]
    void* eax_5 = arg2[1]
    
    if (eax_5 == 0)
        *arg2 = ecx_1
    else
        *(eax_5 + 0x10) = ecx_1
    
    arg2[2] += 1
    arg2[1] = ecx_1

int32_t* i_2 = arg2[3]

while (i_2 != 0)
    int32_t* i_10 = i_2
    i_2 = i_2[2]
    sub_64c080(i_10, 0x10)

arg2[5] = 0
arg2[3] = 0
arg2[4] = 0
int32_t* i_3 = arg1[3]

while (i_3 != 0)
    int32_t* i_7 = i_3
    i_3 = i_3[2]
    int32_t* eax_6 = sub_64bfd0(0x10)
    eax_6[3] += 1
    
    if (*eax_6 == 0)
        sub_64be70(eax_6)
    
    int32_t* edx = *eax_6
    *eax_6 = *edx
    *edx = zx.o(0)
    int32_t ecx_4 = i_7[1]
    *edx = *i_7
    edx[1] = ecx_4
    edx[3] = arg2[4]
    void* eax_10 = arg2[4]
    
    if (eax_10 == 0)
        arg2[3] = edx
    else
        *(eax_10 + 8) = edx
    
    arg2[5] += 1
    arg2[4] = edx

int32_t* i_4 = arg2[6]

while (i_4 != 0)
    int32_t* i_11 = i_4
    i_4 = i_4[5]
    sub_64c080(i_11, 0x1c)

int32_t* ecx_7 = arg1
arg2[8] = 0
arg2[6] = 0
arg2[7] = 0
int128_t* i_5 = ecx_7[6]

if (i_5 != 0)
    do
        int128_t* i_8 = i_5
        i_5 = *(i_5 + 0x14)
        int32_t* eax_11 = sub_64bfd0(0x1c)
        eax_11[3] += 1
        
        if (*eax_11 == 0)
            sub_64be70(eax_11)
        
        int32_t* ecx_6 = *eax_11
        *eax_11 = *ecx_6
        __builtin_memset(ecx_6, 0, 0x1c)
        *ecx_6 = *i_8
        ecx_6[4] = i_8[1].d
        ecx_6[6] = arg2[7]
        void* eax_16 = arg2[7]
        
        if (eax_16 == 0)
            arg2[6] = ecx_6
        else
            *(eax_16 + 0x14) = ecx_6
        
        arg2[8] += 1
        arg2[7] = ecx_6
    while (i_5 != 0)
    
    ecx_7 = arg1

*(arg2 + 0x24) = *(ecx_7 + 0x24)
arg2[0xb] = ecx_7[0xb]
arg2[0xc] = ecx_7[0xc]
arg2[0xd] = ecx_7[0xd]
arg2[0xe] = ecx_7[0xe]
arg2[0xf] = ecx_7[0xf]
arg2[0x10] = ecx_7[0x10]
arg2[0x11] = ecx_7[0x11]
arg2[0x12] = ecx_7[0x12]
arg2[0x13] = ecx_7[0x13]
int32_t result = ecx_7[0x14]
arg2[0x14] = result
return result
