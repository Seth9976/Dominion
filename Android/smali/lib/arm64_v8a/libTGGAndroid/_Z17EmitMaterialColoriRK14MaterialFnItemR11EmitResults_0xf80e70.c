// 函数: _Z17EmitMaterialColoriRK14MaterialFnItemR11EmitResults
// 地址: 0xf80e70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XFormatString("samplerFn_layer%d")
int64_t x21 = sx.q(*(arg3 + 0x3c8))
*(arg3 + 0x3c8) = x21.d + 1
*(arg3 + muls.dp.d(arg1, 0xc) + 0x27c) = x21.d
*(arg3 + (x21 << 2) + 0x3b8) = *(arg2 + 0x18)
XString::GetString()
XFormatString("float4 %s(float2 arg_uv, float4 color)\n{\n\treturn gMaterialColor%d;\n}\n")
int64_t x8_3 = sx.q(*(arg3 + 0x208))
void* x21_1 = arg3 + (x8_3 << 4)
*(arg3 + 0x208) = x8_3.d + 1
XString::operator=(x21_1 + 8)
XString::operator=(x21_1 + 0x10)
return XString::~XString()
