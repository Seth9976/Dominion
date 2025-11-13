// 函数: _Z7DrawTriP4Vec2PK10ColorRgbaI
// 地址: 0xc1c514
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v2 = *arg1
int64_t x8 = *(arg1 + 0x10)
int64_t var_30 = x8
int64_t var_28 = x8
int128_t var_60
__builtin_memcpy(&var_60, 
    "\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x"
"00\x00\x00\x3f\x00\x00\x00\x3f", 
    0x20)
int128_t var_40 = v2
int64_t var_80 = SpriteColorSet(arg2, gRgbaINone)
int64_t var_78 = SpriteColorSet(arg2 + 4, gRgbaINone)
SpriteColorSet(arg2 + 8, gRgbaINone)
int64_t var_70 = SpriteColorSet(arg2 + 8, gRgbaINone)
return DrawQuadParams(*TEXTURE_SYS_WHITE_PIXEL, &var_40, &var_60, &var_80, true, nullptr)
