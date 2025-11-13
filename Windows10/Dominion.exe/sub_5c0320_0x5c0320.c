// 函数: sub_5c0320
// 地址: 0x5c0320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1

if (arg1 == 0)
    return 0

if (arg1 u> 0x3fffffff)
    sub_5b0890()
    noreturn

int32_t esi = arg1 << 2
void* result = malloc(esi + 0x10)
void* result_1 = result
void* eax_2

if (result_1 != 0)
    eax_2 = result & 0xfffffff0
    result = eax_2 + 0x10
    *(result - 4) = result_1

if ((result_1 != 0 && eax_2 != 0xfffffff0) || esi == 0)
    return result

sub_5b0890()
noreturn
