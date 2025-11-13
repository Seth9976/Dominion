// 函数: _Z14Draw3DTriangleRK3Tri
// 地址: 0xfd5144
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_38 = *(arg1 + 8)
int64_t var_40 = *arg1
int32_t var_2c = *(arg1 + 0x14)
int64_t var_34 = *(arg1 + 0xc)
int32_t var_20 = *(arg1 + 0x20)
int64_t var_28 = *(arg1 + 0x18)
int32_t x8_3 = *(arg1 + 0x20)
int64_t x9_3 = *(arg1 + 0x18)
int128_t var_60
__builtin_memcpy(&var_60, 
    "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x80\x3f\x00\x00\x00\x00", 
    0x20)
int32_t var_14 = x8_3
int64_t var_1c = x9_3

if ((zx.d(data_2422e40) & 1) == 0 && __cxa_guard_acquire(&data_2422e40) != 0)
    data_2422e38 = AssetPtrFromPath("sys/white_pixel.texture", 3)
    __cxa_guard_release(&data_2422e40)

if ((zx.d(data_2422e50) & 1) == 0 && __cxa_guard_acquire(&data_2422e50) != 0)
    data_2422e48 = AssetPtrFromPath("sys/particle_3d_no_z.material", 5)
    __cxa_guard_release(&data_2422e50)

return Draw3DQuadParams(&var_40, &var_60, gSpriteWhite, data_2422e38, data_2422e48)
