// 函数: _Z15UI2GetTransform9UI2Handle
// 地址: 0x10423d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t* entry_x8
int128_t v0

if (arg1.d != 0)
    int32_t x9_1 = arg1.d & 0xffff
    
    if (x9_1 u< *(gUI2 + 8))
        int64_t x10_1 = *gUI2
        
        if (*(x10_1 + mulu.dp.d(x9_1, 0x19a8) + 0x19a0) == arg1.d)
            void* x9_3 = x10_1 + zx.q(x9_1) * 0x19a8
            v0 = *(x9_3 + 0x16c0)
            *entry_x8 = *(x9_3 + 0x16b0)
            entry_x8[1] = v0
            return 

v0 = *(TI + 0x10)
*entry_x8 = *TI
entry_x8[1] = v0
