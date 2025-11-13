// 函数: _Z16ParticleTryToGet10ParticleID
// 地址: 0xf93b98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 0)
    int32_t x9_1 = arg1 & 0xffff
    int64_t* x8_2 = *(*gpGameData + 0x20)
    
    if (x9_1 u< x8_2[1].d)
        void* result = *x8_2 + mulu.dp.d(x9_1, 0xa8)
        
        if (*(result + 0xa0) == arg1)
            return result
        
        return nullptr

return 0
