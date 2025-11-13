// 函数: sub_714ad0
// 地址: 0x714ad0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_147ded8
int32_t* result

if (eax == 0)
    result = malloc(0x18)
else
    result = eax(0x18, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0xeb)

if (result != 0)
    __builtin_memset(result, 0, 0x18)

sub_7149a0(result, arg2, result, arg3, sub_714aa0, arg5, arg6)
int32_t ebx_1 = arg3 * arg4
int32_t eax_1 = data_147ded8
result[3] = ebx_1
int32_t ebx_2 = ebx_1 << 2
int32_t eax_2

if (eax_1 == 0)
    eax_2 = malloc(ebx_2)
else
    eax_2 = eax_1(ebx_2, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0xef)

if (eax_2 != 0)
    memset(eax_2, 0, ebx_2)

result[4] = eax_2
return result
