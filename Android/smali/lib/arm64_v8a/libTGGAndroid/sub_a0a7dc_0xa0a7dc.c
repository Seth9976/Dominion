// 函数: sub_a0a7dc
// 地址: 0xa0a7dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = setjmp(0x14a72e8)

if (x0 == 0)
    if (*(arg1 + 0x19e4) == 0)
        DomFinalizeSetup(arg1)
    
    DomGameRun(arg1)

return zx.q(x0 == 0 ? 1 : 0)
