// 函数: _Z11IsStreamingP6XAsset
// 地址: 0x106c63c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8 = *(SoundGetDef(arg1) + 0x38)
int32_t x9 = x8[1]
int32_t x9_1

if (x9 s< 0)
    x9_1 = x9 + 7
else
    x9_1 = x9

return zx.q(float.s(x8[3] s/ ((x9_1 s>> 3) * x8[2])) / float.s(*x8) > fconvert.s(4f) ? 1 : 0)
