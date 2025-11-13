// 函数: _Z25GetOwnedExpansionEditionsP19DomExpansionEdition
// 地址: 0xb421e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_28
int32_t x0_1 = DomGetExpansions(&var_28)
int32_t x20

if (x0_1 s< 1)
    x20 = 0
else
    int64_t i = 0
    x20 = 0
    
    do
        void* x8_1 = var_28
        
        if (*(x8_1 + i + 4) != 0)
            int32_t x0_3 = ProfileHasEntitlementForExpansion(zx.q(*(x8_1 + i)), nullptr)
            void* x8_2 = var_28
            
            if ((x0_3 & 1) != 0)
                *(arg1 + (sx.q(x20) << 2)) = *(x8_2 + i + 4)
                x20 += 1
            
            if (*(x8_2 + i + 8) != 0
                    && (ProfileHasEntitlementForFirstEdition(zx.q(*(x8_2 + i))) & 1) != 0)
                *(arg1 + (sx.q(x20) << 2)) = *(var_28 + i + 8)
                x20 += 1
        
        i += 0x28
    while (mulu.dp.d(x0_1, 0x28) != i)

return zx.q(x20)
