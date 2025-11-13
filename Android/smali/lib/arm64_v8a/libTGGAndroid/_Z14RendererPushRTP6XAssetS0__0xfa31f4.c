// 函数: _Z14RendererPushRTP6XAssetS0_
// 地址: 0xfa31f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpRenderAppData
int64_t x9_1 = sx.q(*(x8 + 0x398)) + 1
*(x8 + 0x398) = x9_1.d
int64_t x8_1 = x8 + (x9_1 << 5)
*(x8_1 + 0x1a0) = arg1
*(x8_1 + 0x1a8) = arg2
*(x8_1 + 0x198) = 2
*(x8_1 + 0x1b0) = 0
DrawModeSet(0)
int64_t* x0 = *gGraphicsInterface
(*(*x0 + 0x118))(x0, arg1, arg2)
*(*gpRenderAppData + 0x165) = 1
return Draw3DSetRTInversion(true) __tailcall
