// 函数: _Z12AppStartGamev
// 地址: 0xc759dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpAppData
uint32_t x9 = zx.d(*(x8 + 0x40))
__builtin_memset(x8 + 0x28, 0, 0x11)
*(x8 + 0x20) = 0

if (x9 != 0)
    int64_t result = GameDispose()
    x8 = *gpAppData
    
    if (zx.d(*(x8 + 0x38)) != 0)
        *(x8 + 0x40) = 0
        return result

GameInitialize(*(x8 + 0x28))
uint64_t x8_1 = *gpAppData
*(x8_1 + 0x40) = 1
*(x8_1 + 0x30)
jump(*(**gAppInterface + 0x70))
