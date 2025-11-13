// 函数: _Z18ComputePodIconInfoR11PodIconInfo
// 地址: 0xba8bcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x2008) = 0
*(arg1 + 0x1000) = 0
uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
void* x20_1

if (x9.d != 0)
    x20_1 = *(gDomClient + 0x205e0)
    int64_t x9_1 = x20_1 + x9 * 0x21d8
    
    while (zx.d(*(x20_1 + 0x21d2)) == 0)
        x20_1 += 0x21d8
        
        if (x20_1 u>= x9_1)
            goto label_ba8e10

int32_t x8_7

if (x9.d == 0 || x20_1 == 0xffffffff)
label_ba8e10:
    x8_7 = 0
else
    while (true)
        if ((IsPodIcon(x20_1) & 1) != 0)
            int32_t x8_1 = *(x20_1 + 0x2c)
            
            if (x8_1 == 0)
                int32_t x8_3 = *(x20_1 + 0xa4)
                
                if (x8_3 != 6)
                    if (x8_3 == 1)
                        goto label_ba8f44
                    
                    goto label_ba8d10
                
                if ((CardIs(gDomClient + 0x20728, zx.q(*(x20_1 + 0x98)), 0x40000000) & 1) == 0)
                    x8_1 = *(x20_1 + 0x2c)
                label_ba8cd8:
                    
                    if (x8_1 != 8)
                        goto label_ba8d10
                    
                    int32_t x8_4 = *(x20_1 + 0x240)
                    uint64_t x9_2
                    
                    if (x8_4 != 0)
                        x9_2 = zx.q(x8_4.w)
                    
                    if (x8_4 != 0 && x9_2.d u< *(gDomClient + 0x205e8)
                            && *(*(gDomClient + 0x205e0) + x9_2 * 0x21d8 + 0x21d0) == x8_4)
                        goto label_ba8d10
                    
                    int32_t x8_8 = *(x20_1 + 0x248)
                    
                    if (x8_8 != 0)
                        uint64_t x9_6 = zx.q(x8_8.w)
                        
                        if (x9_6.d u< *(gDomClient + 0x205e8))
                            int64_t x10_4 = *(gDomClient + 0x205e0)
                            
                            if (*(x10_4 + x9_6 * 0x21d8 + 0x21d0) == x8_8)
                                PileRemoveToken(x20_1, x10_4 + x9_6 * 0x21d8)
                    
                    UI2Free(x20_1 + 0x2148)
                    UI2Free(x20_1 + 0x214c)
                    UI2Free(x20_1 + 0x2150)
                    UI2Free(x20_1 + 0x2154)
                    uint32_t x0_9 = *(x20_1 + 0x1f90)
                    
                    if (x0_9 != 0)
                        SpineDestroy(x0_9)
                    
                    int32_t x9_7 = *(gDomClient + 0x205f0)
                    *(gDomClient + 0x205f0) = zx.d(*(x20_1 + 0x21d0))
                    *(x20_1 + 0x21d0) = x9_7
                    *(gDomClient + 0x205f4) -= 1
            else
                if (x8_1 != 4)
                    goto label_ba8cd8
                
                if (*(x20_1 + 0x1bc) != 1)
                label_ba8d10:
                    int64_t x8_5 = sx.q(*(arg1 + 0x2008))
                    *(arg1 + 0x2008) = x8_5.d + 1
                    *(arg1 + (x8_5 << 3) + 0x1008) = x20_1
                    x8_7 = *(arg1 + 0x2008)
                    
                    if (x8_7 s> 0x1ff)
                        break
        
        x20_1 += 0x21d8
        int64_t x8_14 = *(gDomClient + 0x205e0) + zx.q(*(gDomClient + 0x205e8)) * 0x21d8
        
        if (x8_14 u> x20_1)
            while (zx.d(*(x20_1 + 0x21d2)) == 0)
                x20_1 += 0x21d8
                
                if (x20_1 u>= x8_14)
                    goto label_ba8e08
            
            if (x20_1 != 0xffffffff)
                continue
        
    label_ba8e08:
        x8_7 = *(arg1 + 0x2008)
        break

bool (* var_68)(DomGfx const*, DomGfx const*) = SortPodIcons
int64_t result = std::__ndk1::__sort<bool (*&)(DomGfx const*, DomGfx const*), DomGfx**>(
    arg1 + 0x1008, arg1 + 0x1008 + (sx.q(x8_7) << 3), &var_68)

if (*(arg1 + 0x2008) s< 1)
    return result

int64_t x23_1 = 0
uint32_t x20_2 = 0
int32_t x26_1 = 0
int32_t x25_1 = 0

while (true)
    int32_t x1_4
    result, x1_4 = CalcPodIconWhere(*(arg1 + (x23_1 << 3) + 0x1008))
    int32_t x21_2 = result.d
    uint32_t x27_1 = (result u>> 0x20).d
    
    if (x23_1 == 0 || x26_1 != x21_2)
    label_ba8e5c:
        int64_t x8_16 = sx.q(*(arg1 + 0x1000))
        x25_1 = x1_4
        void* x8_17 = arg1 + (x8_16 << 3)
        *(arg1 + 0x1000) = x8_16.d + 1
        *x8_17 = x23_1.d
        x23_1 += 1
        *(x8_17 + 4) = x23_1.d
    else
        if (x26_1 u> 3)
            break
        
        switch (x26_1)
            case 0
                goto label_ba8e5c
            case 1, 2
                if (x20_2 != x27_1)
                    goto label_ba8e5c
            case 3
                if (x20_2 != x27_1)
                    goto label_ba8e5c
                
                result = IsBoardPile(zx.q(x20_2))
                
                if ((result.d & 1) == 0 && x25_1 != x1_4)
                    goto label_ba8e5c
        
        x23_1 += 1
        x21_2 = x26_1
        x27_1 = x20_2
        void* x8_22 = arg1 + (sx.q(*(arg1 + 0x1000)) << 3)
        *(x8_22 - 4) += 1
    
    x20_2 = x27_1
    x26_1 = x21_2
    
    if (x23_1 s>= sx.q(*(arg1 + 0x2008)))
        return result

label_ba8f44:
pthread_kill(pthread_self(), 6)
PodIconInfo* x0_14
int64_t x1_5
x0_14, x1_5 = XNoReturn()
return CountPlayerPodicons(x0_14, x1_5) __tailcall
