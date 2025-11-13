// 函数: sub_4bb4c0
// 地址: 0x4bb4c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = *arg2
int32_t ecx = ((edx s>> 4 | edx) & arg1[1]) << 2

for (int32_t* i = *(ecx + *arg1); i != 0; i = i[0x26])
    if (edx == *i)
        __builtin_memcpy(&i[1], arg3, 0x94)
        return i

int32_t* eax_5 = sub_64bfd0(0x9c)
eax_5[3] += 1

if (*eax_5 == 0)
    sub_64be70(eax_5)

int32_t* edx_1 = *eax_5
*eax_5 = *edx_1
*edx_1 = *arg2
__builtin_memcpy(&edx_1[1], arg3, 0x94)
int32_t* ecx_2 = ecx
edx_1[0x26] = *(ecx_2 + *arg1)
int32_t eax_10 = *arg1
*(ecx_2 + eax_10) = edx_1
arg1[2] += 1
return eax_10
