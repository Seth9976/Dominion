// 函数: sub_63eb10
// 地址: 0x63eb10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
data_bf17e0 = arg2
int32_t i = 1
data_bf21a0 = 1
int32_t result

do
    int32_t eax_1 = *((i << 2) + &data_bf17dc)
    result = (eax_1 u>> 0x1e ^ eax_1) * 0x6c078965 + i
    (&data_bf17e0)[i] = result
    i = data_bf21a0 + 1
    data_bf21a0 = i
while (i u< 0x270)

return result
