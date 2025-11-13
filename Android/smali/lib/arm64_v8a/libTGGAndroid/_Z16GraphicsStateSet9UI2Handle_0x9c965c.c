// 函数: _Z16GraphicsStateSet9UI2Handle
// 地址: 0x9c965c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = GetLocalSettings()
int32_t x8 = *(result + 0xc)
int64_t (* const x1)()

if (x8 == 1)
    x1 = UIS_GFX_LOW
else
    if (x8 != 0)
        return result
    
    x1 = UIS_GFX_HIGH

return UI2SetState(zx.q(arg1), x1, 0xffffffff, 0) __tailcall
