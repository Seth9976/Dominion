// 函数: sub_64c020
// 地址: 0x64c020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_64bfd0(arg1)
eax[3] += 1

if (arg1 s> 0x400 && eax[4] == 0xffffffff)
    int32_t eax_1 = sub_687730(arg1)
    memset(eax_1, 0, arg1)
    return eax_1

if (*eax == 0)
    sub_64be70(eax)

int32_t* esi_1 = *eax
*eax = *esi_1
memset(esi_1, 0, arg1)
return esi_1
