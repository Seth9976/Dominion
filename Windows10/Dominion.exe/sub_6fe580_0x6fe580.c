// 函数: sub_6fe580
// 地址: 0x6fe580
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_6fe4f0(arg4)
uint32_t count = arg2 * arg3
int32_t edx = *(arg4 + 0x2d8)
uint32_t count_1 = *(eax + 0x14) - edx

if (count s>= count_1)
    count = count_1

if (count s<= 0)
    return 0

int32_t ecx_2 = *(arg4 + 0x2d0)
int32_t eax_2 = *(eax + 0x18)

if (ecx_2 == 0)
    memcpy(arg1, edx + eax_2, count)
    *(arg4 + 0x2d8) += count
    return divu.dp.d(0:count, arg2)

sub_69f3e0(eax_2, arg1, ecx_2, edx, count, eax_2)
*(arg4 + 0x2d8) += count
return divu.dp.d(0:count, arg2)
