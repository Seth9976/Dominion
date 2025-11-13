// 函数: _Z12AnimStateSet9UI2Handle
// 地址: 0x9cb1b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = GetLocalSettings()
int32_t x8 = *(result + 8)
int64_t* x1

if (x8 == 0)
    x1 = &data_11d0478
else if (x8 == 3)
    x1 = &data_11d04a8
else
    if (x8 != 1)
        return result
    
    x1 = &data_11d0490

return UI2SetState(zx.q(arg1), x1, 0xffffffff, 0) __tailcall
