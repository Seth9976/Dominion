// 函数: sub_68b830
// 地址: 0x68b830
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_64bfd0(0xc)
eax[3] += 1

if (*eax == 0)
    sub_64be70(eax)

int32_t* ecx_1 = *eax
*eax = *ecx_1
*ecx_1 = 0
ecx_1[2] = 0
*ecx_1 = *arg2
ecx_1[2] = arg1[1]
void* result = arg1[1]

if (result == 0)
    arg1[2] += 1
    *arg1 = ecx_1
    arg1[1] = ecx_1
    return result

*(result + 4) = ecx_1
arg1[2] += 1
arg1[1] = ecx_1
return result
