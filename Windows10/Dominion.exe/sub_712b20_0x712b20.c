// 函数: sub_712b20
// 地址: 0x712b20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_147ded8
int32_t* result

if (eax == 0)
    result = malloc(0x84)
else
    result = eax(0x84, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AnimationState.c", 0x32e)

if (result != 0)
    *(result + 4) = zx.o(0)
    memset(&result[0xc], 0, 0x54)

int32_t xmm1 = (zx.o(0)).d
result[5] = 0
*result = arg4
result[6] = arg5
__builtin_memset(&result[7], 0, 0x14)
int32_t* eax_3 = *(arg4 + 4)
result[0xc] = eax_3
result[0xd] = 0xbf800000
result[0xe] = 0xbf800000
result[0xf] = 0
result[0x10] = 0
__builtin_memcpy(&result[0x11], 
    "\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x00\x4f\x00\x00\x80\x3f\x00\x00\x80\x3f", 0x14)
result[0x18] = 0x3f800000
result[0x16] = 0

if (arg6 != 0)
    xmm1 = sub_70fd30(eax_3, *arg6, *arg3, arg4)

result[0x17] = xmm1
result[0x1a] = 2
result[0x1b] = sub_7523c0(0x10)
int32_t eax_5 = data_147ded8
int32_t* eax_6

if (eax_5 == 0)
    eax_6 = malloc(0xc)
else
    eax_6 = eax_5(0xc, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AnimationState.c", 0x28)

if (eax_6 != 0)
    eax_6[2] = 0

int32_t eax_7 = data_147ded8
*eax_6 = 0
eax_6[1] = 0x10
int32_t eax_8

if (eax_7 == 0)
    eax_8 = malloc(0x40)
else
    eax_8 = eax_7(0x40, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AnimationState.c", 0x28)

if (eax_8 != 0)
    memset(eax_8, 0, 0x40)

eax_6[2] = eax_8
result[0x1c] = eax_6
return result
