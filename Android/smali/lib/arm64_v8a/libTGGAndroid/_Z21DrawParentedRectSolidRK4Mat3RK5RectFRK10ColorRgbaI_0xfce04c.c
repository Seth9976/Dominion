// 函数: _Z21DrawParentedRectSolidRK4Mat3RK5RectFRK10ColorRgbaI
// 地址: 0xfce04c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0

if ((zx.d(data_2422668) & 1) == 0)
    int32_t x0_2
    x0_2, v0 = __cxa_guard_acquire(&data_2422668)
    
    if (x0_2 != 0)
        data_2422660 = AssetPtrFromPath("sys\white_pixel.texture", 3)
        __cxa_guard_release(&data_2422668)

XAsset* x0 = data_2422660
v0.d = 0x3f000000
v0:4.d = 0x3f000000
v0:8.d = 0x3f000000
v0:0xc.d = 0x3f000000
uint64_t var_28 = zx.q(*arg3)
int128_t var_40 = v0
return DrawParentedRectsParams(x0, arg1, arg2, &var_40, &var_28, nullptr)
