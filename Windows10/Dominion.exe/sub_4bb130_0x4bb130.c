// 函数: sub_4bb130
// 地址: 0x4bb130
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx_1 = *arg2
int32_t ebx = ((edx_1 s>> 4 | edx_1) & arg1[1]) << 2

for (int32_t* i = *(ebx + *arg1); i != 0; i = i[4])
    if (edx_1 == *i)
        int32_t ecx_3 = arg3[1]
        i[2] = *arg3
        i[3] = ecx_3
        return i

int32_t* eax_5 = sub_64bfd0(0x18)
eax_5[3] += 1

if (*eax_5 == 0)
    sub_64be70(eax_5)

int32_t* edx_2 = *eax_5
*eax_5 = *edx_2
*edx_2 = *arg2
int32_t eax_10 = arg3[1]
edx_2[2] = *arg3
edx_2[3] = eax_10
edx_2[4] = *(ebx + *arg1)
int32_t eax_13 = *arg1
*(ebx + eax_13) = edx_2
arg1[2] += 1
return eax_13
