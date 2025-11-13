// 函数: _Z12ReturnInGameR7DomGamePK11DomCardEnumiPS1_Ri
// 地址: 0xaef45c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s< 1)
    return 

int64_t i = 0

do
    uint64_t x12_2 = zx.q(*(arg1 + 0x1528))
    
    if (x12_2.d s>= 1)
        int32_t x11_1 = *(arg2 + (i << 2))
        int64_t x14_1
        
        if (*(arg1 + 0x1a70) != x11_1)
            void* __offset(DomGame, 0x1ad8) x13_3 = arg1 + 0x1ad8
            int64_t x15_1 = 1
            int32_t x15_2
            
            do
                x14_1 = x15_1
                
                if (x12_2 == x15_1)
                    break
                
                x15_2 = *x13_3
                x13_3 += 0x68
                x15_1 = x14_1 + 1
            while (x15_2 != x11_1)
        
        if (*(arg1 + 0x1a70) == x11_1 || x14_1 u< x12_2)
            int64_t x12_1 = sx.q(*arg5)
            *arg5 = x12_1.d + 1
            *(arg4 + (x12_1 << 2)) = x11_1
    
    i += 1
while (i != zx.q(arg3))
