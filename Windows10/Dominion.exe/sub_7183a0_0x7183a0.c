// 函数: sub_7183a0
// 地址: 0x7183a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_147ded8
int32_t* result

if (eax == 0)
    result = malloc(0x24)
else
    result = eax(0x24, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x46a)

if (result != 0)
    __builtin_memset(&result[1], 0, 0x20)

int32_t eax_1 = data_147ded8
*result = 6
int32_t* eax_2

if (eax_1 == 0)
    eax_2 = malloc(0xc)
else
    eax_2 = eax_1(0xc, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x52)

if (eax_2 != 0)
    *eax_2 = 0
    eax_2[1] = 0

result[1] = eax_2
eax_2[2] = sub_718330
*result[1] = sub_716300
*(result[1] + 4) = sub_718310
int32_t eax_5 = data_147ded8
int32_t eax_6

if (eax_5 == 0)
    eax_6 = malloc(arg1 * 0x4c - 0x4c)
else
    eax_6 = eax_5(arg1 * 0x4c - 0x4c, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x75)

if (eax_6 != 0)
    memset(eax_6, 0, arg1 * 0x4c - 0x4c)

int32_t eax_7 = data_147ded8
result[2] = eax_6
result[3] = arg1
int32_t edi_2 = arg1 << 2
int32_t eax_8

if (eax_7 == 0)
    eax_8 = malloc(edi_2)
else
    eax_8 = eax_7(edi_2, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x46d)

if (eax_8 != 0)
    memset(eax_8, 0, edi_2)

int32_t eax_9 = data_147ded8
result[4] = eax_8
int32_t eax_10

if (eax_9 == 0)
    eax_10 = malloc(edi_2)
else
    eax_10 = eax_9(edi_2, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x46e)

if (eax_10 != 0)
    memset(eax_10, 0, edi_2)

result[5] = arg2
result[6] = eax_10
return result
