// 函数: _Z20ExtraTallAspectRatiov
// 地址: 0x9ab1ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0
float v1
float v2
float v3
v0, v1, v2, v3 = RectScreen()
return zx.q(
    (v2 - v0) / (v3 - v1) < float.s(*(ASPECTS + 4)) / float.s(*(ASPECTS + 8)) + float.s(0xbc23d70a)
    ? 1 : 0)
