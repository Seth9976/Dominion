// 函数: _Z23UI2ParseResultMakeFloatR13UI2ExprTreeRTRK7XString
// 地址: 0x104e5e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v0 = atof(XString::operator char const*())
int64_t x8 = sx.q(*(arg1 + 0x428))
v0.d = fconvert.s(v0)
*(arg1 + 0x428) = x8.d + 1
*(arg1 + x8 * 0x38 + 0xa8) = 3
*(arg1 + x8 * 0x38 + 0xb0) = v0.d
int64_t result = XString::XString()
int32_t* entry_x8
*entry_x8 = 3
*(entry_x8 + 8) = arg1 + x8 * 0x38 + 0xa8
return result
