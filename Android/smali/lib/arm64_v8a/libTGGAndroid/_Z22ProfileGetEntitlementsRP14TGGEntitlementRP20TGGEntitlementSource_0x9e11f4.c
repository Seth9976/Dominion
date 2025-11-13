// 函数: _Z22ProfileGetEntitlementsRP14TGGEntitlementRP20TGGEntitlementSource
// 地址: 0x9e11f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(gGameSettings + 0x10)
uint64_t x12 = zx.q(*(x8 + 0x1f2e0))
int32_t* x14 = x8 + 0x4320
void* x21 = x8
uint64_t x12_1

x12_1 = x12.d u> 1 ? x12 : 1

while (*x14 != *(x8 + 0x1f2e4))
    x21 += 0x7cb8
    uint64_t temp0_1 = x12_1
    x12_1 -= 1
    x14 = &x14[0x1f2e]
    
    if (temp0_1 == 1)
        x21 = x8
        *(x8 + 0x1f2e4) = *(x8 + 0x4320)
        break

*(x21 + 0x30) = 0

if (*(x21 + 0x78a0) == 0)
    int32_t x8_3 = *(x21 + 0x5748)
    *(x21 + 0x78a0) = 0
    
    if (x8_3 s>= 1)
        int64_t i = 0
        int32_t i_7 = 0
        void* x27_1 = x21 + 0x434c
        int32_t var_260[0x80]
        
        do
            if (*(x27_1 + 0x14) u>= CurrentDateTime())
                if (*(x27_1 + 4) != 0x63)
                    int64_t x8_4 = sx.q(*(x21 + 0x78a0))
                    *(x21 + 0x78a0) = x8_4.d + 1
                    void* x8_5 = x21 + (x8_4 << 2)
                    *(x8_5 + 0x78a4) = *x27_1
                    *(x8_5 + 0x7aa4) = *(x27_1 + 4)
                else
                    var_260[sx.q(i_7)] = *x27_1
                    i_7 += 1
            
            i += 1
            x27_1 += 0x28
        while (i s< sx.q(*(x21 + 0x5748)))
        
        if (i_7 s>= 1)
            uint64_t i_6 = zx.q(i_7)
            int32_t (* x9_6)[0x80] = &var_260
            uint64_t i_1
            
            do
                int64_t x13_1 = sx.q(*(x21 + 0x78a0))
                i_1 = i_6
                i_6 -= 1
                *(x21 + 0x78a0) = x13_1.d + 1
                int32_t x14_2 = *x9_6
                x9_6 = &(*x9_6)[1]
                void* x13_2 = x21 + (x13_1 << 2)
                *(x13_2 + 0x78a4) = x14_2
                *(x13_2 + 0x7aa4) = 0x63
            while (i_1 != 1)
    
    void* var_268
    int32_t x0_1 = GameSpecific_GetDlcs(3, &var_268)
    
    if (x0_1 s> 0)
        int64_t i_2 = 0
        
        do
            void* x8_10 = var_268
            DLC* x0_4 = x8_10 + i_2
            int32_t x27_2
            
            if (*(x0_4 + 4) == 0)
                x27_2 = 0xc7
            label_9e13b0:
                int64_t x28_1 = sx.q(*(x21 + 0x78a0))
                *(x21 + 0x78a0) = x28_1.d + 1
                void* x8_11 = x21 + (x28_1 << 2)
                *(x8_11 + 0x78a4) = DomDLCGrantsEntitlement(zx.q(*(x8_10 + i_2)))
                *(x8_11 + 0x7aa4) = x27_2
            else if (LocalDLCState(x0_4) == 0)
                x8_10 = var_268
                x27_2 = 0xc8
                goto label_9e13b0
            i_2 += 0x80
        while (zx.q(x0_1) << 7 != i_2)
    
    int32_t x0_6 = GameSpecific_GetDlcs(0, &var_268)
    
    if (x0_6 s> 0)
        int64_t i_3 = 0
        
        do
            void* x8_13 = var_268
            void* x0_9 = x8_13 + i_3
            int32_t fp_2
            
            if (*(x0_9 + 4) == 0)
                fp_2 = 0xc7
            label_9e1434:
                int64_t x23_1 = sx.q(*(x21 + 0x78a0))
                *(x21 + 0x78a0) = x23_1.d + 1
                void* x8_14 = x21 + (x23_1 << 2)
                *(x8_14 + 0x78a4) = DomDLCGrantsEntitlement(zx.q(*(x8_13 + i_3)))
                *(x8_14 + 0x7aa4) = fp_2
            else if (LocalDLCState(x0_9) == 0)
                x8_13 = var_268
                fp_2 = 0xc8
                goto label_9e1434
            i_3 += 0x80
        while (zx.q(x0_6) << 7 != i_3)
    
    int32_t x0_11 = GameSpecific_GetDlcs(2, &var_268)
    
    if (x0_11 s>= 1)
        int64_t i_4 = 0
        
        do
            void* x8_16 = var_268
            void* x0_14 = x8_16 + i_4
            int32_t fp_3
            
            if (*(x0_14 + 4) == 0)
                fp_3 = 0xc7
            label_9e14b4:
                int64_t x23_2 = sx.q(*(x21 + 0x78a0))
                *(x21 + 0x78a0) = x23_2.d + 1
                void* x8_17 = x21 + (x23_2 << 2)
                *(x8_17 + 0x78a4) = DomDLCGrantsEntitlement(zx.q(*(x8_16 + i_4)))
                *(x8_17 + 0x7aa4) = fp_3
            else if (LocalDLCState(x0_14) == 0)
                x8_16 = var_268
                fp_3 = 0xc8
                goto label_9e14b4
            i_4 += 0x80
        while (zx.q(x0_11) << 7 != i_4)
    
    if (*(x21 + 0x78a0) s>= 1)
        int64_t i_5 = 0
        
        do
            TryTurnOnEntitlement(zx.q(*(x21 + 0x78a4 + (i_5 << 2))))
            i_5 += 1
        while (i_5 s< sx.q(*(x21 + 0x78a0)))
    
    *arg1 = x21 + 0x78a4
    *arg2 = x21 + 0x7aa4
else
    *arg1 = x21 + 0x78a4
    *arg2 = x21 + 0x7aa4

return zx.q(*(x21 + 0x78a0))
