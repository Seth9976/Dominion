// 函数: _Z17IsCullingReversedv
// 地址: 0xfa2be8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

return zx.q(zx.d(*(*gpRenderAppData + 0x166)) == 0 ? 1 : 0)
    ^ (zx.q(*gGraphicsDriverType != 1 ? 1 : 0) | zx.q(zx.d(*(gDraw3DData + 0x430)) != 0 ? 1 : 0))
