// 函数: sub_774070
// 地址: 0x774070
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = data_1a98fb8
int32_t edx = data_1a98fbc
int32_t result = ecx | edx
data_1a98fa8 = &data_87362c

if (result != 0)
    result = SteamAPI_UnregisterCallResult(&data_1a98fa8, ecx, edx)
    data_1a98fb8.q = 0

return result
