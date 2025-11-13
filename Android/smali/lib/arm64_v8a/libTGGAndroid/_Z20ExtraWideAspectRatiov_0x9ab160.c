// 函数: _Z20ExtraWideAspectRatiov
// 地址: 0x9ab160
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0
float v1
float v2
float v3
v0, v1, v2, v3 = RectScreen()
return zx.q((v2 - v0) / (v3 - v1)
    > float.s(*(ASPECTS + 0x10)) / float.s(*(ASPECTS + 0x14)) + float.s(0x3c23d70a) ? 1 : 0)
