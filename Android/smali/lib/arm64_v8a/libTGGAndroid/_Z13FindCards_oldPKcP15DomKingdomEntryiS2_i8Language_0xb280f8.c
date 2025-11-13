// 函数: _Z13FindCards_oldPKcP15DomKingdomEntryiS2_i8Language
// 地址: 0xb280f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_fc = arg6
int32_t var_e0[0x20]
int32_t x19_1

if (zx.d(*arg1) != 0)
    int32_t* x23_1 = ExpansionEnumerator::begin()
    int64_t x0_3 = ExpansionEnumerator::end()
    
    if (x23_1 == x0_3)
        x19_1 = 0
    else
        x19_1 = 0
        
        do
            int32_t x26_1 = *x23_1
            
            if (x26_1 != 0x13)
                if ((ProfileHasEntitlementForExpansion(zx.q(x26_1), nullptr) & 1) != 0)
                    var_e0[sx.q(x19_1)] = x26_1
                    x19_1 += 1
            else if ((ProfileHasAnyPromos() & 1) != 0)
                var_e0[sx.q(x19_1)] = x26_1
                x19_1 += 1
            
            x23_1 = &x23_1[1]
        while (x0_3 != x23_1)
    
    *(&var_e0 + (zx.q(x19_1) << 0x20 s>> 0x1e)) = 0x1400000013

int32_t x21

if (zx.d(*arg1) == 0 || x19_1 s< 0xffffffff)
    x21 = 0
else
    int32_t x19_2 = arg5
    char const* x23_2 = arg1
    int64_t i = 0
    x21 = 0
    int32_t var_134_1 = x19_2
    
    do
        int32_t x24_2 = var_e0[i]
        int64_t var_e8
        int32_t x0_8 = DomExpGet(zx.q(x24_2), &var_e8)
        
        if (x0_8 s>= 1)
            int64_t j = 0
            int32_t x20_1 = neg.d(x24_2 << 8)
            int32_t var_110_1 = x20_1
            
            do
                int64_t x8_7 = var_e8
                int32_t* x9_2 = x8_7 + j * 0x780
                
                if ((*(x9_2 + 0xc8) & 0x302804720c800) == 0)
                    if (x24_2 == 0x14)
                        if ((HasEntitlementForCategory(zx.q(*(x8_7 + j * 0x780 + 0xc0))) & 1) != 0)
                        label_b282f8:
                            int64_t x8_11 = var_e8
                            int32_t x9_4 = *(x8_11 + j * 0x780 + 0xc0)
                            
                            if (j == zx.q(x9_4 + x20_1))
                                if (x19_2 s>= 1)
                                    void* __offset(DomKingdomEntry, 0x4) x10_3 = arg4 + 4
                                    uint64_t k_1 = zx.q(arg5)
                                    uint64_t k
                                    
                                    do
                                        int32_t x12_2 = *(x10_3 - 4)
                                        
                                        if (x12_2 == 1)
                                            if (*x10_3 == x9_4)
                                                goto label_b28264
                                        else if (x12_2 == 0)
                                            break
                                        
                                        k = k_1
                                        k_1 -= 1
                                        x10_3 += 0x10
                                    while (k != 1)
                                
                                DomDefName(x8_11 + j * 0x780, zx.q(var_fc), nullptr, false)
                                
                                if (stristr(XString::operator char const*(), x23_2) != 0)
                                    int32_t x0_21 = stristr(XString::operator char const*(), x23_2)
                                    int32_t x0_22 = XString::operator char const*()
                                    uint64_t x23_3
                                    
                                    if (x21 s< 1)
                                        x23_3 = 0
                                    label_b28490:
                                        void* x25_5 = arg2 + (zx.q(x23_3.d) << 4)
                                        uint64_t x19_4 = zx.q(x23_3.d)
                                        memmove(arg2 + (zx.q(x23_3.d + 1) << 4), x25_5, 
                                            zx.q(2 - x23_3.d) << 0x20 s>> 0x1c)
                                        int32_t* x9_7 = var_e8 + j * 0x780 + 0xc0
                                        *(x25_5 + 4) = *x9_7
                                        int32_t x10_5 = *x9_7
                                        int32_t x21_3
                                        
                                        if (x10_5 u>> 4 != 0x140)
                                            uint64_t x9_9 = zx.q(x10_5 - 0x1410)
                                            
                                            if (x9_9.d u> 7)
                                                *x25_5 = 1
                                                *(x25_5 + 4) = x10_5
                                                *(arg2 + (x19_4 << 4) + 8) = 0
                                                x21_3 = x21
                                            else
                                                x21_3 = x21
                                                
                                                switch (x9_9)
                                                    case 0
                                                        *x25_5 = 3
                                                        *(arg2 + (x19_4 << 4) + 8) = 0x400
                                                    case 1
                                                        *x25_5 = 3
                                                        *(arg2 + (x19_4 << 4) + 8) = 0x20000000
                                                    case 2
                                                        *x25_5 = 3
                                                        *(arg2 + (x19_4 << 4) + 8) = 0x8000000
                                                    case 3
                                                        *x25_5 = 3
                                                        *(arg2 + (x19_4 << 4) + 8) = 0x10000000
                                                    case 4
                                                        *x25_5 = 3
                                                        *(arg2 + (x19_4 << 4) + 8) = 0x4000000000
                                                    case 5
                                                        *x25_5 = 3
                                                        *(arg2 + (x19_4 << 4) + 8) = 0x10000000000
                                                    case 6
                                                        *x25_5 = 2
                                                        *(arg2 + (x19_4 << 4) + 8) = 0x12
                                                    case 7
                                                        *x25_5 = 3
                                                        *(arg2 + (x19_4 << 4) + 8) = 0x80000000000
                                        else
                                            *x25_5 = 2
                                            *(arg2 + (x19_4 << 4) + 8) = *x9_7 - 0x13fe
                                            x21_3 = x21
                                        
                                        if (x21_3 s< 3)
                                            x21 = x21_3 + 1
                                        else
                                            x21 = x21_3
                                    else
                                        uint64_t x20_2 = zx.q(x21)
                                        void* __offset(DomKingdomEntry, 0x4) x21_1 = arg2 + 4
                                        x23_3 = 0
                                        int32_t x19_3 = x0_21 - x0_22
                                        
                                        while (true)
                                            if (*(x21_1 - 4) == 1)
                                                DomDefName(DomDefGet(zx.q(*x21_1), 0x18), 
                                                    zx.q(var_fc), nullptr, false)
                                                int32_t x8_13 =
                                                    stristr(XString::operator char const*(), arg1)
                                                    - XString::operator char const*()
                                                
                                                if (x8_13 s> x19_3)
                                                    break
                                                
                                                if (x8_13 == x19_3 && strcmp(
                                                        XString::operator char const*(), 
                                                        XString::operator char const*()) s>= 1)
                                                    break
                                                
                                                XString::~XString()
                                            
                                            x23_3 += 1
                                            x21_1 += 0x10
                                            
                                            if (x20_2 == x23_3)
                                                x23_3 = zx.q(x20_2.d)
                                                x19_2 = var_134_1
                                                
                                                if (x23_3.d u> 2)
                                                    goto label_b28254
                                                
                                                goto label_b28490
                                        
                                        XString::~XString()
                                        x19_2 = var_134_1
                                        
                                        if (x23_3.d u<= 2)
                                            goto label_b28490
                                label_b28254:
                                    x20_1 = var_110_1
                                    x23_2 = arg1
                                
                                XString::~XString()
                    else if (x24_2 != 0x13)
                        int32_t x8_10 = *x9_2
                        
                        if (x8_10 == 0 || x8_10 == 2)
                            if ((ProfileHasEntitlementForExpansion(zx.q(x24_2), nullptr) & 1) != 0)
                                goto label_b282f8
                        else
                            if (x8_10 != 1)
                                pthread_kill(pthread_self(), 6)
                                return FindNextAvailablePile(XNoReturn()) __tailcall
                            
                            if ((ProfileHasEntitlementForFirstEdition(zx.q(x24_2)) & 1) != 0)
                                goto label_b282f8
                    else if ((ProfileHasEntitlementForCard(zx.q(*(x8_7 + j * 0x780 + 0xc0))) & 1)
                            != 0)
                        goto label_b282f8
                
            label_b28264:
                j += 1
            while (j != zx.q(x0_8))
        
        i += 1
    while (i != zx.q(x19_1 + 2))

return zx.q(x21)
