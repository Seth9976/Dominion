// 函数: _Z34GameClientTryGetServerNotificationj
// 地址: 0x9b681c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()

if (arg1 != 0)
    int32_t x8_1 = arg1 & 0xffff
    
    if (x8_1 u< *(x0 + 0x78f8))
        void* result = *(x0 + 0x78f0) + mulu.dp.d(x8_1, 0xc)
        
        if (*(result + 8) == arg1)
            return result
        
        return nullptr

return 0
