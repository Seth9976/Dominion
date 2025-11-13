// 函数: sub_6a01a0
// 地址: 0x6a01a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t* ebx = data_147ac2c
int32_t* result = *arg1
int32_t eax = result[2]

if (eax != 0)
    *arg1 = eax
    return result

char* eax_2 = *result
char* const ecx_1 = &data_801800

if (eax_2 != 0)
    ecx_1 = eax_2

int32_t eax_3 = sub_69c4d0(ecx_1, 0)
int32_t ebx_1 = ebx[1]
int32_t ecx_4 = (ebx_1 & eax_3) + 1

if (ecx_4 u<= ebx_1)
    int32_t* eax_6 = *ebx + (ecx_4 << 2)
    
    do
        int32_t edx_1 = *eax_6
        
        if (edx_1 != 0)
            *arg1 = edx_1
            return result
        
        ecx_4 += 1
        eax_6 = &eax_6[1]
    while (ecx_4 u<= ebx_1)

*arg1 = 0
return result
