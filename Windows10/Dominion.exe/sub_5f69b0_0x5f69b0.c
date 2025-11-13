// 函数: sub_5f69b0
// 地址: 0x5f69b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg2
int32_t result = 0
int32_t edi = 0
int32_t* esi = arg1

while (*esi != 0)
    edi += 1
    result += 1
    *(arg2 - arg1 + esi) = *esi
    esi = &esi[4]
    
    if (edi s>= 0xa)
        break

int32_t var_8 = 0
void* ebx_1 = &arg1[0x28]

while (*ebx_1 != 0)
    int32_t result_1 = result
    int32_t i = 0
    result += 1
    int128_t* esi_3 = (result << 4) + arg2
    *(arg2 + result_1 * 0x10) = *ebx_1
    void* edx = ebx_1 + 0x10
    
    do
        int32_t ecx_3 = *edx
        
        if (ecx_3 == 0)
            break
        
        int32_t var_20_1 = ecx_3
        i += 1
        int64_t var_1c_1 = 0
        result += 1
        edx += 4
        *esi_3 = 1.o
        esi_3 = &esi_3[1]
    while (i s< 0xe)
    
    ebx_1 += 0x48
    arg2 = var_c
    int32_t ecx_5 = var_8 + 1
    var_8 = ecx_5
    
    if (ecx_5 s>= 4)
        break

int32_t i_2 = 0x6b
int128_t* edx_3 = (result << 4) + var_c
void* ecx_7 = &arg1[0x70]
int32_t i_1

do
    if (*ecx_7 != 0)
        result += 1
        *edx_3 = *ecx_7
        edx_3 = &edx_3[1]
    
    ecx_7 += 0x10
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return result
