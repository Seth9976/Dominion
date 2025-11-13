// 函数: sub_7523c0
// 地址: 0x7523c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_3 = data_147ded8
int32_t* result

if (eax_3 == 0)
    result = malloc(0xc)
else
    result = eax_3(0xc, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Array.c", 0x22)

if (result != 0)
    result[2] = 0

int32_t eax = data_147ded8
result[1] = arg1
int32_t ebx_1 = arg1 << 2
*result = 0
int32_t eax_1

if (eax == 0)
    eax_1 = malloc(ebx_1)
else
    eax_1 = eax(ebx_1, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Array.c", 0x22)

if (eax_1 != 0)
    memset(eax_1, 0, ebx_1)

result[2] = eax_1
return result
