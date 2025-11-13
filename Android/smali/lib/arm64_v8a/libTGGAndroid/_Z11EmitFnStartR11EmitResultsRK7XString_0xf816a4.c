// 函数: _Z11EmitFnStartR11EmitResultsRK7XString
// 地址: 0xf816a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = sx.q(*(arg1 + 0x208))
int64_t x9 = sx.q(*(arg1 + 0x24c))
*(arg1 + 0x208) = x8_1.d + 1
*(arg1 + 0x24c) = x9.d + 1
*(arg1 + (x9 << 2) + 0x20c) = x8_1.d
return XString::operator=(arg1 + (x8_1 << 4) + 8) __tailcall
