// 函数: sub_5f8c00
// 地址: 0x5f8c00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edx = arg1 + 0xa0
int32_t result_2 = 0
__builtin_memcpy(arg2, edx, 0x120)

while (*edx != 0)
    result_2 += 1
    edx = &edx[0x12]
    
    if (result_2 s>= 4)
        result_2 = 0xffffffff
        break

int32_t result_1
int32_t* edx_1 = &result_1
result_1 = result_2
sub_5f8ba0(arg1 + 0xbd0, edx_1, arg2, arg1 + 0xbd0, 0x1410, 0x400, 0)
sub_5f8ba0(arg1 + 0xbd8, edx_1, arg2, arg1 + 0xbd8, 0x1411, 0x20000000, 0)
sub_5f8ba0(arg1 + 0xbe0, edx_1, arg2, arg1 + 0xbe0, 0x1412, 0x8000000, 0)
sub_5f8ba0(arg1 + 0xbe8, edx_1, arg2, arg1 + 0xbe8, 0x1413, 0x10000000, 0)
int32_t eax_5 = sub_5f8ba0(arg1 + 0xbf0, edx_1, arg2, arg1 + 0xbf0, 0x1415, 0, 0x100)

if (*(arg1 + 0xbf8) != 0)
    eax_5 = sub_5f8ba0(eax_5, edx_1, arg2, 0x800180, 0x1414, 0, 0x40)

if (*(arg1 + 0xbf9) != 0)
    sub_5f8ba0(eax_5, &result_1, arg2, 0x800180, 0x1417, 0, 0x800)

int32_t result = result_1

if (result == 0xffffffff)
    return 4

return result
