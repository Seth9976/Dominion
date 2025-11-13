// 函数: _Z18UI2SetBoolPropertyRK3UI29UI2Attribb
// 地址: 0x1031b7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2 const& i_1 = arg1
AttribMap* x0 = GetEdittedMap(arg1, arg2)
int64_t result = AttribMapSetBool(*gUI2AttribTable, x0, arg2.d, arg3 & 1)
UI2 const& i = i_1

do
    *(i + 0x1378) = 2
    i = *(i + 0x17d0)
while (i != 0)

do
    *(i_1 + 0x1370) = 0
    *(i_1 + 0x1710) = 0x3f800000
    i_1 = *(i_1 + 0x17d0)
while (i_1 != 0)

return result
