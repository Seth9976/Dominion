// 函数: _ZN5Botan24base64_decode_max_outputEm
// 地址: 0xcab584
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1

if ((arg1 & 3) == 0)
    x8_1 = 0
else
    x8_1 = 4 - (arg1 & 3)

return ((x8_1 + arg1) * 3) u>> 2
