// 函数: _Z16DomLogReadActionR9PlayerLogR8DomYield
// 地址: 0xb17d80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x24 = *(arg1 + 0x10)
int32_t x23 = *(arg1 + 0x14)

if (x23 s< x24)
    LogReadInt(arg1, arg2 + 4)
    LogReadInt(arg1, arg2 + 0x74)
    int32_t x8_1 = *(arg2 + 4)
    
    if (x8_1 != 5 && x8_1 != 9 && *(arg2 + 0x74) s>= 1)
        int64_t i = 0
        void* __offset(DomYield, 0x78) x22_1 = arg2 + 0x78
        
        do
            LogReadInt(arg1, x22_1)
            i += 1
            x22_1 += 4
        while (i s< sx.q(*(arg2 + 0x74)))
    
    if (*(arg2 + 0xd18) != 0 && *(arg2 + 0x74) s>= 1)
        int64_t i_1 = 0
        int32_t* x22_2 = arg2 + 0xd08
        
        do
            LogReadInt(arg1, x22_2)
            i_1 += 1
            x22_2 = &x22_2[1]
        while (i_1 s< sx.q(*(arg2 + 0x74)))
    
    LogReadInt(arg1, arg2 + 0x48)
    LogReadInt(arg1, arg2 + 0x70)

return zx.q(x23 s< x24 ? 1 : 0)
