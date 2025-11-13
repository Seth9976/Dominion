// 函数: _Z24RendererSetMainRTTextureP6XAssetS0_b
// 地址: 0xfa2d10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpRenderAppData
*(x8 + 0x180) = arg1
*(x8 + 0x188) = arg2
*(x8 + 0x398) = 0
*(x8 + 0x170) = 2
*(x8 + 0x190) = arg3 & 1
DrawModeSet(0)
int64_t* x0 = *gGraphicsInterface
(*(*x0 + 0x118))(x0, arg1, arg2)
*(*gpRenderAppData + 0x165) = 1
return Draw3DSetRTInversion(((*gGlobalVRAppType != 5 ? 1 : 0).b
    | (*gGraphicsDriverType != 1 ? 1 : 0).b | (not.d(arg3.d)).b) & 1) __tailcall
