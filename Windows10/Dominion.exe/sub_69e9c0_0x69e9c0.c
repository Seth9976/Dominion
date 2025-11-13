// 函数: sub_69e9c0
// 地址: 0x69e9c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_64bfd0(0x28)
eax[3] += 1

if (*eax == 0)
    sub_64be70(eax)

int32_t* esi = *eax
*eax = *esi
__builtin_memset(esi, 0, 0x28)
*esi = *arg2
esi[1] = arg2[1]
esi[2] = arg2[2]
esi[3] = arg2[3]
int32_t eax_6 = arg2[4]
esi[5] = arg2[5]
esi[4] = eax_6
char* eax_7 = arg2[6]
esi[6] = eax_7

if (eax_7 != 0 && *eax_7 != 0)
    eax_7 = sub_63d4e0(&esi[6])
    *(eax_7 + 4) += 1

eax_7.b = arg2[7].b
esi[7].b = eax_7.b
esi[8] = 0
esi[9] = arg1[1]
void* result = arg1[1]

if (result == 0)
    arg1[2] += 1
    *arg1 = esi
    arg1[1] = esi
    return result

*(result + 0x20) = esi
arg1[2] += 1
arg1[1] = esi
return result
