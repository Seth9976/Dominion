// 函数: _Z11EmitTexAnimiRK17MaterialFnTexAnimR11EmitResults
// 地址: 0xf80ce8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9_3 = (*arg2 ^ *TEXANIM_NONE) | (*(arg2 + 8) ^ *(TEXANIM_NONE + 8))
    | (*(arg2 + 0x10) ^ *(TEXANIM_NONE + 0x10)) | (*(arg2 + 0x18) ^ *(TEXANIM_NONE + 0x18))
char* entry_x8

if (x9_3 == 0)
    return XString::XString(entry_x8) __tailcall
int128_t v1 = *(arg2 + 0x10)
void* x10_4 = arg3 + (sx.q(*(arg3 + muls.dp.d(arg1, 0xc) + 0x274)) << 5) + 0x334
*x10_4 = *arg2
*(x10_4 + 0x10) = v1
return XFormatString("\tfloat2 uv = MultiplyMatrixVec(float3(arg_uv, 1.0), gTexAnim%d).xy;\n")
    __tailcall
