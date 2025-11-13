// 函数: sub_5174a0
// 地址: 0x5174a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_10[0x2]
int32_t var_8
uint32_t result
int32_t ecx_2
uint32_t i

do
    var_8 = sub_50ed40(0)
    result, ecx_2 = sub_515c00(&var_10, 1, &var_8, &var_10, 1, nullptr)
    i = result
while (i == 0)

int32_t esi = 0

if (i s> 0)
    do
        int32_t var_20_1 = 0
        result, ecx_2 = sub_50ac80(result, var_10[esi], var_8, ecx_2, 0)
        esi += 1
    while (esi s< i)

return result
