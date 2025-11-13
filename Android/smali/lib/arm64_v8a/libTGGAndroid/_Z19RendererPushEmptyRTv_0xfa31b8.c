// 函数: _Z19RendererPushEmptyRTv
// 地址: 0xfa31b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = DrawModeSet(0)
uint64_t x8 = *gpRenderAppData
int64_t x9_1 = sx.q(*(x8 + 0x398)) + 1
*(x8 + 0x398) = x9_1.d
int64_t x8_1 = x8 + (x9_1 << 5)
*(x8_1 + 0x198) = 2
*(x8_1 + 0x1a0) = 0
*(x8_1 + 0x1a8) = 0
return result
