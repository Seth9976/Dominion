// 函数: _Z28ComputeSearchableCardEntriesP14SearchableCardi8Language
// 地址: 0xb27920
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_fc = arg3
int64_t x22 = ExpansionEnumerator::begin()
int64_t x0_3 = ExpansionEnumerator::end()
int32_t var_e0[0x20]
uint64_t x8_1

if (x22 == x0_3)
    x8_1 = 0
else
    int64_t x8 = x0_3 - x22
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    v0_1, v1_1, v2_1 = memcpy(&var_e0, x22, x8 & 0xfffffffffffffffc)
    
    if (x8 - 4 u>= 0xc)
        v1_1.q = 1
        v1_1:8.q = 1
        int64_t i_5 = (((x8 - 4) u>> 2) + 1) & 0x7ffffffffffffffc
        v0_1.q = 0
        v0_1:8.q = 0
        x22 += i_5 << 2
        int64_t i_4 = i_5
        v2_1.q = 0
        v2_1:8.q = 0
        int64_t i
        
        do
            v0_1 += v1_1
            i = i_4
            i_4 -= 4
            v2_1 += v1_1
        while (i != 4)
        uint128_t v0_2
        v0_2.q = vpaddd_s64(v2_1 + v0_1)
        x8_1 = v0_2.q
        
        if (((x8 - 4) u>> 2) + 1 != i_5)
            goto label_b279e8
    else
        x8_1 = 0
    label_b279e8:
        int64_t i_3 = x0_3 - x22
        int64_t i_1
        
        do
            i_1 = i_3
            i_3 -= 4
            x8_1 += 1
        while (i_1 != 4)

int64_t i_2 = 0
int32_t x22_1 = 0
var_e0[zx.q(x8_1.d)] = 0x14

do
    int32_t x23_2 = var_e0[i_2]
    void* var_e8
    int32_t x0_6 = DomExpGet(zx.q(x23_2), &var_e8)
    
    if (x0_6 s>= 1)
        int32_t fp_1 = neg.d(x23_2 << 8)
        uint64_t x26_1 = zx.q(x0_6)
        int32_t var_ec
        
        if (x23_2 != 0x13)
            int64_t x27_1 = 0
            int64_t x28_1 = 0xc0
            
            while (true)
                uint64_t x0_16 = zx.q(*(var_e8 + x28_1))
                
                if (x27_1 == zx.q(x0_16.d + fp_1) && (CanAddCardToKingdom(x0_16, &var_ec) & 1) != 0)
                    if (x22_1 == arg2)
                        break
                    
                    void* x20_3 = arg1 + muls.dp.d(x22_1, 0x18)
                    void* x0_18 = var_e8 + x28_1
                    *x20_3 = *x0_18
                    DomDefName(x0_18 - 0xc0, zx.q(var_fc), nullptr, false)
                    XString::operator=(x20_3 + 8)
                    XString::~XString()
                    int32_t x8_19 = var_ec
                    *(x20_3 + 0x10) = 0
                    *(x20_3 + 4) = x8_19
                    void* x8_20 = var_e8
                    char x0_15
                    
                    if (x23_2 == 0x14)
                        x0_15 = HasEntitlementForCategory(zx.q(*(x8_20 + x28_1)))
                    else
                        int32_t x8_22 = *(x8_20 + x28_1 - 0xc0)
                        
                        if (x8_22 == 2)
                            x0_15 = ProfileHasEntitlementForExpansion(zx.q(x23_2), nullptr)
                        else if (x8_22 == 1)
                            x0_15 = ProfileHasEntitlementForFirstEdition(zx.q(x23_2))
                        else
                            if (x8_22 != 0)
                                pthread_kill(pthread_self(), 6)
                                BestResult* x0_25
                                int32_t* x1_6
                                int32_t x2_1
                                SearchableCard* x3
                                int32_t x4
                                x0_25, x1_6, x2_1, x3, x4 = XNoReturn()
                                return TryAddResult(x0_25, x1_6, x2_1, x3, x4) __tailcall
                            
                            x0_15 = ProfileHasEntitlementForExpansion(zx.q(x23_2), nullptr)
                    
                    x22_1 += 1
                    *(x20_3 + 0x10) |= x0_15 & 1
                
                x27_1 += 1
                x28_1 += 0x780
                
                if (x26_1 == x27_1)
                    goto label_b27a1c
        else
            int64_t x23_3 = 0
            int64_t x24_1 = 0xc0
            
            while (true)
                uint64_t x0_7 = zx.q(*(var_e8 + x24_1))
                
                if (x23_3 == zx.q(x0_7.d + fp_1) && (CanAddCardToKingdom(x0_7, &var_ec) & 1) != 0)
                    if (x22_1 == arg2)
                        break
                    
                    void* x22_2 = arg1 + muls.dp.d(x22_1, 0x18)
                    void* x0_9 = var_e8 + x24_1
                    *x22_2 = *x0_9
                    DomDefName(x0_9 - 0xc0, zx.q(var_fc), nullptr, false)
                    XString::operator=(x22_2 + 8)
                    XString::~XString()
                    int32_t x8_9 = var_ec
                    *(x22_2 + 0x10) = 0
                    *(x22_2 + 4) = x8_9
                    char x0_13 = ProfileHasEntitlementForCard(zx.q(*(var_e8 + x24_1)))
                    *(x22_2 + 0x10) |= x0_13 & 1
                    x22_1 += 1
                
                x23_3 += 1
                x24_1 += 0x780
                
                if (x26_1 == x23_3)
                    goto label_b27a1c
        x22_1 = arg2
        break
    
label_b27a1c:
    i_2 += 1
while (i_2 != zx.q(x8_1.d + 1))

return zx.q(x22_1)
