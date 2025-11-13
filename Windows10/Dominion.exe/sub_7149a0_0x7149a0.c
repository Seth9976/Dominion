// 函数: sub_7149a0
// 地址: 0x7149a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_147ded8
*arg3 = arg2
int32_t* eax_1

if (eax == 0)
    eax_1 = malloc(0xc)
else
    eax_1 = eax(0xc, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x52)

if (eax_1 != 0)
    *eax_1 = 0
    eax_1[1] = 0

arg3[1] = eax_1
eax_1[2] = arg5
*arg3[1] = arg6
*(arg3[1] + 4) = arg7
int32_t eax_5 = data_147ded8
int32_t result

if (eax_5 == 0)
    result = malloc(arg4 * 0x4c - 0x4c)
else
    result = eax_5(arg4 * 0x4c - 0x4c, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x75)

int32_t result_1 = result

if (result_1 != 0)
    result = memset(result_1, 0, arg4 * 0x4c - 0x4c)

arg3[2] = result_1
return result
