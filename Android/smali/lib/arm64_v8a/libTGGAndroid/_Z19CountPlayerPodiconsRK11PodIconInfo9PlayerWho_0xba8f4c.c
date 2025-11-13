// 函数: _Z19CountPlayerPodiconsRK11PodIconInfo9PlayerWho
// 地址: 0xba8f4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x1000) s>= 1)
    int64_t i = 0
    PodIconInfo const& x22_1 = arg1
    
    do
        int64_t x0_1 = CalcPodIconWhere(*(arg1 + (sx.q(*x22_1) << 3) + 0x1008))
        
        if (x0_1.d == 1 && (x0_1 u>> 0x20).d == arg2)
            return zx.q(*(x22_1 + 4) - *x22_1)
        
        i += 1
        x22_1 += 8
    while (i s< sx.q(*(arg1 + 0x1000)))

return 0
