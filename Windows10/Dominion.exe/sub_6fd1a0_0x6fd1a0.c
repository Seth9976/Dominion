// 函数: sub_6fd1a0
// 地址: 0x6fd1a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_64bfd0(0x1c)
eax[3] += 1

if (*eax == 0)
    sub_64be70(eax)

int32_t* ecx_2 = *eax
data_147decc = ecx_2
int32_t result = *ecx_2
*eax = result
*ecx_2 = 0
data_147df0c = 0x43c80000
data_147df10 = 0x44160000
__builtin_memcpy(&ecx_2[1], 
    "\x05\x00\x00\x00\x07\x00\x00\x00\x06\x00\x00\x00\x05\x00\x00\x00\x05\x00\x00\x00\x05\x00\x00\x00", 
    0x18)
return result
