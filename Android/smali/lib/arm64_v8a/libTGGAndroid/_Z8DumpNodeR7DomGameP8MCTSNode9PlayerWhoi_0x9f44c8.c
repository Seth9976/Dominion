// 函数: _Z8DumpNodeR7DomGameP8MCTSNode9PlayerWhoi
// 地址: 0x9f44c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

printf("Node: %lx\n")
printf("  Score %f", (fconvert.d(*(arg2 + (sx.q(arg3) << 2) + 0x94))).d)
int64_t result = printf(", Visits %d\n", zx.q(*(arg2 + 0xb0)))

if (*(arg2 + 0xd8) s>= 1)
    int64_t x22_1 = 0
    int64_t i = 0
    
    do
        char var_450[0x400]
        sub_9f45c0(&var_450, arg2, *(arg2 + 0xd0) + x22_1)
        int64_t x1_2
        
        if (zx.q(arg4) == i)
            x1_2 = 0x2a
        else
            x1_2 = 0x20
        
        void* x8_4 = *(arg2 + 0xd0) + x22_1
        printf("   %cChild %d, Visits %d, Prior %f Movelog %s", x1_2, zx.q(i.d), 
            zx.q(*(x8_4 + 0x50)), &var_450, (fconvert.d(*(x8_4 + 0x54))).d)
        result = putchar(0xa)
        i += 1
        x22_1 += 0x70
    while (i s< sx.q(*(arg2 + 0xd8)))

return result
