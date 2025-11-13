// 函数: sub_4bb1d0
// 地址: 0x4bb1d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx_1 = *arg2
int32_t ebx = ((edx_1 s>> 4 | edx_1) & arg1[1]) << 2

for (int32_t* i = *(ebx + *arg1); i != 0; i = i[6])
    if (edx_1 == *i)
        *(i + 8) = *arg3
        return i

int32_t* eax_5 = sub_64bfd0(0x20)
eax_5[3] += 1

if (*eax_5 == 0)
    sub_64be70(eax_5)

int32_t* ecx_1 = *eax_5
*eax_5 = *ecx_1
*ecx_1 = *arg2
*(ecx_1 + 8) = *arg3
ecx_1[6] = *(ebx + *arg1)
int32_t eax_12 = *arg1
*(ebx + eax_12) = ecx_1
arg1[2] += 1
return eax_12
