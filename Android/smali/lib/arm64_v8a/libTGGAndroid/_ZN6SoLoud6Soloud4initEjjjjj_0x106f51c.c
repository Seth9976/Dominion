// 函数: _ZN6SoLoud6Soloud4initEjjjjj
// 地址: 0x106f51c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SoLoud::Soloud* x20 = arg1
int64_t result = 1
uint32_t entry_x5

if (entry_x5 u<= 8 && (entry_x5 & 0xfffffffd) != 5 && arg3 u<= 0x10 && entry_x5 != 3)
    SoLoud::Soloud::deinit()
    *(x20 + 8) = SoLoud::Thread::createMutex()
    *(x20 + 0x20a4) = 0
    *(x20 + 0x20a8) = 0
    
    if (arg3 != 0xc && arg3 != 0)
    label_106f5c0:
        
        if (arg3 == 0)
            return 7
        
        return 6
    
    uint32_t x2
    
    x2 = arg4 == 0 ? 0xac44 : arg4
    
    uint32_t x3
    
    x3 = arg5 == 0 ? 0x1000 : arg5
    
    result = SoLoud::opensles_init(x20, arg2, x2, x3, entry_x5)
    
    if (result.d == 0)
        *(x20 + 0x20a4) = 0xc
    else if (arg3 == 0)
        goto label_106f5c0

return result
