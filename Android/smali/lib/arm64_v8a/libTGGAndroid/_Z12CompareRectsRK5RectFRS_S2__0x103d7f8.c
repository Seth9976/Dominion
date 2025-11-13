// 函数: _Z12CompareRectsRK5RectFRS_S2_
// 地址: 0x103d7f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.d = *arg1

if (not(v0.d f>= *arg2))
    *arg3 = *arg2
    *arg2 = *arg1
else if (not(v0.d f>= *arg3))
    *arg3 = *arg1
