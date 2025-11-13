// 函数: sub_4bb360
// 地址: 0x4bb360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t esi = *arg2
int32_t ecx = arg2[1]
int32_t ebx = arg2[2]
int32_t edx_5 = (((zx.d(ecx.b) | esi << 8) << 8 | zx.d(ebx.b)) & arg1[1]) << 2

for (int32_t* i = *(edx_5 + *arg1); i != 0; i = i[4])
    if (ebx == i[2] && ecx == i[1] && esi == *i)
        i[3] = *arg3
        return i

int32_t* eax_5 = sub_64bfd0(0x14)
eax_5[3] += 1

if (*eax_5 == 0)
    sub_64be70(eax_5)

int32_t* ecx_2 = *eax_5
*eax_5 = *ecx_2
*ecx_2 = *arg2
ecx_2[2] = arg2[2]
ecx_2[3] = *arg3
ecx_2[4] = *(edx_5 + *arg1)
int32_t eax_13 = *arg1
*(edx_5 + eax_13) = ecx_2
arg1[2] += 1
return eax_13
