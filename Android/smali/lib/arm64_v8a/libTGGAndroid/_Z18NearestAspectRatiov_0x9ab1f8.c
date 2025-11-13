// 函数: _Z18NearestAspectRatiov
// 地址: 0x9ab1f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0
float v1
float v2
float v3
v0, v1, v2, v3 = RectScreen()
uint64_t x9 = zx.q(*ASPECTS)
v0 = (v2 - v0) / (v3 - v1)
void* x10 = ASPECTS + x9 * 0xc
v1 = fabs(v0 - float.s(*(x10 + 4)) / float.s(*(x10 + 8)))

if (not(fabs(v0 - float.s(*(ASPECTS + 0x10)) / float.s(*(ASPECTS + 0x14))) >= v1))
    x9 = zx.q(*(ASPECTS + 0xc))
    void* x10_1 = ASPECTS + x9 * 0xc
    v1 = fabs(v0 - float.s(*(x10_1 + 4)) / float.s(*(x10_1 + 8)))

if (not(fabs(v0 - float.s(*(ASPECTS + 0x1c)) / float.s(*(ASPECTS + 0x20))) >= v1))
    x9 = zx.q(*(ASPECTS + 0x18))
    void* x10_2 = ASPECTS + x9 * 0xc
    v1 = fabs(v0 - float.s(*(x10_2 + 4)) / float.s(*(x10_2 + 8)))

if (fabs(v0 - float.s(*(ASPECTS + 0x28)) / float.s(*(ASPECTS + 0x2c))) < v1)
    return zx.q(*(ASPECTS + 0x24))

return zx.q(x9.d)
