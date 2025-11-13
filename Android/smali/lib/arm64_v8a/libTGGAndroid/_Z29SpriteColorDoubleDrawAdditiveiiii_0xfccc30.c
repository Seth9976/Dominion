// 函数: _Z29SpriteColorDoubleDrawAdditiveiiii
// 地址: 0xfccc30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

return zx.q(*gRgbaIWhite) | ((0xffffff & ((0xff00ffff
    & ((0xffff00ff & zx.q(arg1)) | zx.q((0xff & arg2) << 8))) | zx.q((0xff & arg3) << 0x10)))
    | zx.q((0xff & arg4) << 0x18)) << 0x20
