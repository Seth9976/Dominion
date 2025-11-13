// 函数: sub_758a10
// 地址: 0x758a10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_3 = data_147ded8
int32_t* result

if (eax_3 == 0)
    result = malloc(0x34)
else
    result =
        eax_3(0x34, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\ClippingAttachment.c", 0x32)

if (result != 0)
    __builtin_memset(result, 0, 0x28)
    result[0xc] = 0

int32_t ecx = data_19e277c
uint32_t eax_1 = zx.d(ecx.w) << 0xb
data_19e277c = ecx + 1
result[0xb] = eax_1
result[0xa] = result
sub_752290(eax_1, arg1, result, 6, sub_758990, sub_7589e0)
result[0xc] = 0
return result
