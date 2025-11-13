// 函数: _Z24RendererSetMainRTMonitor11MonitorType
// 地址: 0xfa2cac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpRenderAppData
*(x8 + 0x174) = arg1
*(x8 + 0x398) = 0
*(x8 + 0x170) = 1
DrawModeSet(0)
int64_t* x0 = *gGraphicsInterface
(*(*x0 + 0x110))(x0, zx.q(arg1))
*(*gpRenderAppData + 0x165) = 0
return Draw3DSetRTInversion(false) __tailcall
