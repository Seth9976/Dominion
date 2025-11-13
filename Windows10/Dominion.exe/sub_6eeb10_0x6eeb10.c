// 函数: sub_6eeb10
// 地址: 0x6eeb10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

data_147d480 - data_147d484
int32_t var_24
GetWindowRect(GetDlgItem(data_147d470, 0x80), &var_24)
ScreenToClient(data_147d470, &var_24)
POINT point
ScreenToClient(data_147d470, &point)
int32_t result = int.d(_mm_cvtepi32_ps(zx.o(point.x - (var_24 + 0x16) - 8)) * arg1) + var_24 + 0x16
int32_t var_20
_mm_cvtepi32_ps(zx.o(point.y - (var_20 + 0xa) - 0x14))
return result
