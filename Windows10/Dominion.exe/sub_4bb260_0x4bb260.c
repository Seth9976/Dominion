// 函数: sub_4bb260
// 地址: 0x4bb260
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx_1 = *arg2
int32_t ebx = ((edx_1 s>> 4 | edx_1) & arg1[1]) << 2

for (int32_t* i = *(ebx + *arg1); i != 0; i = i[2])
    if (edx_1 == *i)
        i[1] = *arg3
        return i

int32_t* eax_5 = sub_64bfd0(0xc)
eax_5[3] += 1

if (*eax_5 == 0)
    sub_64be70(eax_5)

int32_t* ecx_1 = *eax_5
*eax_5 = *ecx_1
*ecx_1 = *arg2
ecx_1[1] = *arg3
ecx_1[2] = *(ebx + *arg1)
int32_t eax_13 = *arg1
*(ebx + eax_13) = ecx_1
arg1[2] += 1
return eax_13
