// 函数: _Z21UIStateTableElRefreshRjRK9UIElementR14UIStateElementRK5Vec2I
// 地址: 0x1054fe8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(*arg1)

if (result.d == 0)
    result = *(arg2 + 0xc8)
    
    if (result != 0)
        result = UIStateLoad(result)
        void* x8_8 = *(gUISystem + 0x28) + mulu.dp.d(result.d & 0xffff, 0x458)
        *(x8_8 + 0x18) = arg3
        *(x8_8 + 0x20) = *arg4
        *arg1 = result.d
else
    int64_t* x8_2 = *(gUISystem + 0x28) + (result & 0xffff) * 0x458
    XAsset* x24_1 = *x8_2
    XAsset* x22_1
    
    if (x24_1 == 0)
        x22_1 = *(arg2 + 0xc8)
    else
        x22_1 = x24_1
    
    if (x22_1 != x8_2[1])
        result = UIStateDestroy(result.d)
        
        if (x22_1 != 0)
            result = UIStateLoad(x22_1)
            int32_t x9_3 = result.d & 0xffff
            void* x8_5 = *(gUISystem + 0x28) + mulu.dp.d(x9_3, 0x458)
            *(x8_5 + 0x18) = arg3
            *(x8_5 + 0x20) = *arg4
            *arg1 = result.d
            *(*(gUISystem + 0x28) + mulu.dp.d(x9_3, 0x458)) = x24_1

return result
