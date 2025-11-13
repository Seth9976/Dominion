// 函数: _Z25RemoveAbilityByIdentifier17AbilityIdentifier
// 地址: 0xadcb40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, v0, v1, v2, v3 = DomGetContext()
DomGame* x21 = *(result + 8)
int32_t x8 = *(x21 + 0x19c0)

if (x8 s>= 1)
    void* result_1 = result
    int32_t x22_1 = 0
    
    do
        void* fp_1 = x21 + muls.dp.d(x22_1, 0xb8)
        
        if (*(fp_1 + 0x3c248) == arg1)
            int64_t x26_1 = sx.q(x22_1)
            uint64_t x2_1
            
            if (*(x21 + x26_1 * 0xb8 + 0x3c254) != 3)
                x2_1 = zx.q(*(x21 + x26_1 * 0xb8 + 0x3c220))
                
                if (x2_1.d == 0xffffffff)
                    goto label_adccbc
                
                goto label_adcc4c
            
            void* x8_9 = x21 + x26_1 * 0xb8
            int64_t var_68_1 = 0
            int32_t var_70_1 = 0
            int32_t var_78_1 = 0
            int32_t var_80_1 = 0
            result, v0, v1, v2, v3 = NotifyEffect(x21, 0x1c, zx.q(*(x8_9 + 0x3c220)), 
                zx.q(*(x8_9 + 0x3c258)), zx.q(*(x8_9 + 0x3c25c)), 0, 0, 0)
            x2_1 = zx.q(*(x21 + x26_1 * 0xb8 + 0x3c220))
            uint64_t x4_1
            
            if (x2_1.d != 0xffffffff)
            label_adcc4c:
                x4_1 = zx.q(*(x21 + x26_1 * 0xb8 + 0x3c294))
                
                if (x4_1.d != 0)
                label_adccf4:
                    int64_t var_68_2 = 0
                    int32_t var_70_2 = 0
                    int32_t var_78_2 = 0
                    int32_t var_80_2 = 0
                    result, v0, v1, v2, v3 = NotifyEffect(*(result_1 + 8), 0x1c, x2_1, 0x14, x4_1, 
                        zx.q(*(x21 + x26_1 * 0xb8 + 0x3c298)), 0, 0)
            else
            label_adccbc:
                x2_1 = zx.q(*(x21 + x26_1 * 0xb8 + 0x3c21c))
                x4_1 = zx.q(*(x21 + x26_1 * 0xb8 + 0x3c294))
                
                if (x4_1.d != 0)
                    goto label_adccf4
            x22_1 -= 1
            int64_t x8_2 = sx.q(*(x21 + 0x19c0)) - 1
            *(x21 + 0x19c0) = x8_2.d
            v1 = *(x21 + x8_2 * 0xb8 + 0x3c238)
            v2 = *(x21 + x8_2 * 0xb8 + 0x3c208)
            v3 = *(x21 + x8_2 * 0xb8 + 0x3c218)
            *(fp_1 + 0x3c228) = *(x21 + x8_2 * 0xb8 + 0x3c228)
            *(fp_1 + 0x3c238) = v1
            *(fp_1 + 0x3c208) = v2
            *(fp_1 + 0x3c218) = v3
            v0 = *(x21 + x8_2 * 0xb8 + 0x3c278)
            v3 = *(x21 + x8_2 * 0xb8 + 0x3c248)
            v2 = *(x21 + x8_2 * 0xb8 + 0x3c258)
            *(fp_1 + 0x3c268) = *(x21 + x8_2 * 0xb8 + 0x3c268)
            *(fp_1 + 0x3c278) = v0
            *(fp_1 + 0x3c248) = v3
            *(fp_1 + 0x3c258) = v2
            v1 = *(x21 + x8_2 * 0xb8 + 0x3c298)
            v0 = *(x21 + x8_2 * 0xb8 + 0x3c2a8)
            v2 = *(x21 + x8_2 * 0xb8 + 0x3c288)
            *(fp_1 + 0x3c2b8) = *(x21 + x8_2 * 0xb8 + 0x3c2b8)
            *(fp_1 + 0x3c298) = v1
            *(fp_1 + 0x3c2a8) = v0
            *(fp_1 + 0x3c288) = v2
            x8 = *(x21 + 0x19c0)
        
        x22_1 += 1
    while (x22_1 s< x8)

return result
