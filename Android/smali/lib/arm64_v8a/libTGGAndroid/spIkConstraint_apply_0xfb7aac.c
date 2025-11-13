// 函数: spIkConstraint_apply
// 地址: 0xfb7aac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_6 = arg1[1].d
int128_t v0
int128_t v1
int128_t v2

if (x8_6 == 2)
    int64_t* x9_2 = arg1[2]
    void* x8_3 = arg1[3]
    int128_t v3
    v3.d = *(arg1 + 0x2c)
    v2.d = arg1[6].d
    v0.d = *(x8_3 + 0x6c)
    v1.d = *(x8_3 + 0x78)
    return spIkConstraint_apply2(*x9_2, x9_2[1], zx.q(arg1[4].d), zx.q(arg1[5].d), v0, v1, v2, v3)
        __tailcall

if (x8_6 != 1)
    return 

void* x8 = arg1[3]
v2.d = *(arg1 + 0x2c)
v0.d = *(x8 + 0x6c)
v1.d = *(x8 + 0x78)
return spIkConstraint_apply1(*arg1[2], zx.q(*(arg1 + 0x24)), zx.q(arg1[5].d), 
    zx.q(*(*arg1 + 0x34)), v0, v1, v2) __tailcall
