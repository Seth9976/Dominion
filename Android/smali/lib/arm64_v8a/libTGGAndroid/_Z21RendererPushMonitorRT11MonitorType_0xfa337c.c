// 函数: _Z21RendererPushMonitorRT11MonitorType
// 地址: 0xfa337c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
DrawModeSet(0)
uint64_t x8 = *gpRenderAppData
int64_t x8_1 = x8 + (sx.q(*(x8 + 0x398)) << 5)
*(x8_1 + 0x198) = 1
*(x8_1 + 0x19c) = x19
DrawModeSet(0)
int64_t* x0 = *gGraphicsInterface
(*(*x0 + 0x110))(x0, zx.q(x19))
*(*gpRenderAppData + 0x165) = 0
int64_t result = Draw3DSetRTInversion(false)
uint64_t x8_5 = *gpRenderAppData
*(x8_5 + 0x398) += 1
return result
