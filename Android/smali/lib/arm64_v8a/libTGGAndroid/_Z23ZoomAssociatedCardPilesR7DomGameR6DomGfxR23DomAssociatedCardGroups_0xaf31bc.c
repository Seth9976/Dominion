// 函数: _Z23ZoomAssociatedCardPilesR7DomGameR6DomGfxR23DomAssociatedCardGroups
// 地址: 0xaf31bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
int32_t x8 = *(arg2 + 0x2c)

if (x8 != 1)
    goto label_af3244

int32_t x8_1 = *(arg2 + 0x178)

if (x8_1 == 0)
    return 

uint64_t x9_1 = zx.q(x8_1.w)

if (x9_1.d u>= *(gDomClient + 0x205e8))
    return 

int64_t x10_1 = *(gDomClient + 0x205e0)

if (*(x10_1 + x9_1 * 0x21d8 + 0x21d0) != x8_1)
    return 

arg2 = x10_1 + x9_1 * 0x21d8
x8 = *(arg2 + 0x2c)
label_af3244:

if (x8 != 0)
    return 

uint64_t x14_1 = zx.q(*(gDomClient + 0x205e8))

if (x14_1.d == 0)
    return 

void* i_1 = *(gDomClient + 0x205e0)
void* i = i_1

do
    if (zx.d(*(i + 0x21d2)) != 0)
        if (i != 0xffffffff)
            int32_t x24_1 = 0
            int64_t x14_2 = i_1 + x14_1 * 0x21d8
            int64_t var_4b70[0x160]
            
            do
                if (*(i + 0x2c) == 0 && *(i + 0xa4) == 0x474)
                    int32_t x16_5 = *(i_1 + zx.q(*(i + 0x9c)) * 0x21d8 + 0x68)
                    
                    if (x16_5 == *(arg2 + 0x98))
                        int32_t* x17_2 = &var_4b70 + muls.dp.d(x24_1, 0x18)
                        *x17_2 = x16_5
                        x24_1 += 1
                        *(x17_2 + 8) = *(i + 0xc8)
                        *(x17_2 + 0x10) = i
                
                if (i == 0)
                    i = i_1
                else
                    i += 0x21d8
                
                if (i u>= x14_2)
                    break
                
                while (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u>= x14_2)
                        goto label_af3358
            while (i != 0xffffffff)
            
        label_af3358:
            
            if (x24_1 != 0)
                std::__ndk1::__less<AssocCard, AssocCard> var_68
                std::__ndk1::__sort<std::__ndk1::__less<AssocCard, AssocCard>&, AssocCard*>(
                    &var_4b70, &var_4b70 + muls.dp.d(x24_1, 0x18), &var_68)
                void* x27_1 = arg3 + sx.q(*(arg3 + 0x2080))
                *(arg3 + 0x2084) += 1
                *x27_1 = 0
                
                if (x24_1 s>= 1)
                    int64_t j = 0
                    int64_t x20_1 = 0
                    
                    do
                        int32_t x8_7 = *x27_1
                        
                        if (x8_7 == 0)
                            *(x27_1 + 4) = 0xd
                            x20_1 = *(&var_4b70 + j * 0x18 + 8)
                            x8_7 = 0
                        else
                            int64_t x9_6 = *(&var_4b70 + j * 0x18 + 8)
                            
                            if (x20_1 != x9_6)
                                int64_t x10_2 = sx.q(*(arg3 + 0x2080))
                                x8_7 = 0
                                x20_1 = x9_6
                                int32_t x12_1 = *(arg3 + x10_2)
                                *(arg3 + 0x2084) += 1
                                x27_1 = arg3 + sx.q(x10_2.d + x12_1 * 0xc + 8)
                                *(arg3 + 0x2080) = x10_2.d + x12_1 * 0xc + 8
                                *x27_1 = 0xd00000000
                        
                        *x27_1 = x8_7 + 1
                        void* x9_8 = *(&var_4b70 + j * 0x18 + 0x10)
                        int32_t k
                        
                        for (k = *(x9_8 + 0x2c); k == 3; k = *(x9_8 + 0x2c))
                            arg1 = zx.q(*(x9_8 + 0x30))
                            
                            if (arg1.d == 0x70d)
                                goto label_af33e8
                            
                            if (arg1.d == 0x718)
                                goto label_af33e8
                            
                            int32_t x8_9 = *(x9_8 + 0x70)
                            
                            if (x8_9 == 0)
                                goto label_af33e8
                            
                            x9_8 = *(gDomClient + 0x205e0) + zx.q(x8_9.w) * 0x21d8
                        
                        if (k == 5)
                            arg1 = zx.q(*(x9_8 + 0x204))
                        else if (k == 1)
                            arg1 = zx.q(*(x9_8 + 0x170))
                        else
                            if (k != 0)
                                pthread_kill(pthread_self(), 6)
                                void* x0_3
                                int32_t x1_2
                                x0_3, x1_2 = XNoReturn()
                                return DomGetCardPlaceholder_ZoomExtra(x0_3, x1_2) __tailcall
                            
                            arg1 = CardWhat(gDomClient + 0x20728, zx.q(*(x9_8 + 0x98)))
                        
                    label_af33e8:
                        void* x8_6 = x27_1 + sx.q(x8_7) * 0xc
                        *(x8_6 + 8) = arg1.d
                        void* x9_3 = *(&var_4b70 + j * 0x18 + 0x10)
                        j += 1
                        int32_t x9_4 = *(x9_3 + 0x21d0)
                        *(x8_6 + 0xc) = 0
                        *(x8_6 + 0x10) = x9_4
                    while (j != zx.q(x24_1))
                
                int64_t x8_11 = sx.q(*(arg3 + 0x2080))
                *(arg3 + 0x2080) = x8_11.d + *(arg3 + x8_11) * 0xc + 8
        
        break
    
    i += 0x21d8
while (i u< i_1 + x14_1 * 0x21d8)
