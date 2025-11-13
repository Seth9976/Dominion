// 函数: _Z14HasTwoSameCostPK11DomCardEnumi
// 地址: 0xa34b38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x26_1

if (arg2 s< 1)
    x26_1 = 0
else
    uint64_t fp_1 = zx.q(arg2)
    int64_t x25_1 = 0
    void* __offset(DomCardEnum, 0x4) x22_1 = arg1 + 4
    int64_t x24_1 = 1
    int32_t x27_1 = 1
    uint64_t var_68_1 = fp_1
    int64_t x28_1
    
    do
        x28_1 = x25_1 + 1
        x26_1 = x28_1 u< fp_1 ? 1 : 0
        void* __offset(DomCardEnum, 0x4) x23_1 = x22_1
        
        if (x28_1 u< fp_1)
            while (true)
                int32_t x20_1 = *x23_1
                void* x0_1 = DomDefGet(zx.q(*(arg1 + (x25_1 << 2))), 0x17)
                void* x0_3 = DomDefGet(zx.q(x20_1), 0x17)
                
                if (*(x0_1 + 0xc4) == *(x0_3 + 0xc4))
                    x26_1 = x27_1
                    break
                
                fp_1 -= 1
                x23_1 += 4
                
                if (x24_1 == fp_1)
                    goto label_a34b7c
            
            break
        
    label_a34b7c:
        fp_1 = var_68_1
        x24_1 += 1
        x22_1 += 4
        x25_1 = x28_1
        x27_1 = x26_1
    while (x28_1 != fp_1)

return zx.q(x26_1) & 1
