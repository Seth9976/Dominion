// 函数: sub_f361c4
// 地址: 0xf361c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x9 = **(arg1 + 0x10)
int32_t* x8 = *x9

if (x9[1] == x8)
    return 1

return zx.q(not.d(*x8)) & 1
