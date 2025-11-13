// 函数: _Z13EmitFnPreludePKcR11EmitResults
// 地址: 0xf8177c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XFormatString("samplerFn_%s")
int64_t x8_1 = sx.q(*(arg2 + 0x208))
int64_t x9 = sx.q(*(arg2 + 0x24c))
*(arg2 + 0x208) = x8_1.d + 1
*(arg2 + 0x24c) = x9.d + 1
*(arg2 + (x9 << 2) + 0x20c) = x8_1.d
return XString::operator=(arg2 + (x8_1 << 4) + 8)
