// 函数: _ZN5Botan13x500_name_cmpERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_
// 地址: 0xe8f3a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9_1 = zx.q(*arg2)
uint64_t x8 = zx.q(*arg1)
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x12

if ((x9_1.d & 1) != 0)
    x12 = *(arg2 + 0x10)
else
    x12 = arg2 + 1

int32_t temp0 = x8.d & 1
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x13

if (temp0 != 0)
    x13 = *(arg1 + 0x10)
else
    x13 = arg1 + 1

uint64_t x14_1

if (temp0 == 0)
    x14_1 = x8 u>> 1
else
    x14_1 = *(arg1 + 8)

void* x8_1 = x13 + x14_1
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x11_1

if (x14_1 == 0)
    x11_1 = x13
else
    uint64_t x16_1 = x14_1
    x11_1 = x13
    
    while (true)
        uint64_t x17_1 = zx.q(*x11_1)
        
        if (x17_1.d u> 0x20)
            break
        
        if ((1 << x17_1 & 0x100002600) == 0)
            break
        
        uint64_t temp1_1 = x16_1
        x16_1 -= 1
        x11_1 += 1
        
        if (temp1_1 == 1)
            x11_1 = x8_1
            break

uint64_t x15_2

if ((x9_1.d & 1) == 0)
    x15_2 = x9_1 u>> 1
else
    x15_2 = *(arg2 + 8)

void* x9 = x12 + x15_2
void* x10_2

if (x15_2 != 0)
    void* x0 = x15_2
    x10_2 = x12
    
    while (true)
        uint64_t x1 = zx.q(*x10_2)
        
        if (x1.d u> 0x20)
            break
        
        if ((1 << x1 & 0x100002600) == 0)
            break
        
        void* temp2_1 = x0
        x0 -= 1
        x10_2 += 1
        
        if (temp2_1 == 1)
            x10_2 = x9
            break
    
    if (x11_1 != x8_1)
        goto label_e8f4a4
    
    goto label_e8f5c8

x10_2 = x12

if (x11_1 == x8_1)
label_e8f5c8:
    x11_1 = x8_1
    
    if (x10_2 == x9)
    label_e8f604:
        x10_2 = x9
    else
    label_e8f5e0:
        
        while (true)
            uint64_t x14_4 = zx.q(*x10_2)
            
            if (x14_4.d u> 0x20)
                break
            
            if ((1 << x14_4 & 0x100002600) == 0)
                break
            
            x10_2 += 1
            
            if (x9 == x10_2)
                goto label_e8f604
    
    if (x11_1 == x8_1)
        return zx.q(x10_2 == x9 ? 1 : 0)
    
    return 0

label_e8f4a4:

while (true)
    if (x10_2 == x9)
        if (x11_1 == x8_1)
        label_e8f65c:
            x10_2 = x9
            x11_1 = x8_1
            
            if (x10_2 != x9)
                break
            
            goto label_e8f604
        
        while (true)
            uint64_t x13_3 = zx.q(*x11_1)
            
            if (x13_3.d u> 0x20)
                break
            
            if ((1 << x13_3 & 0x100002600) == 0)
                break
            
            x11_1 += 1
            
            if (x8_1 == x11_1)
                goto label_e8f65c
        
        x10_2 = x9
        
        if (x10_2 != x9)
            break
        
        goto label_e8f604
    
    uint64_t x1_2 = zx.q(*x11_1)
    void* x16_5
    
    if (x1_2.d u> 0x20 || (1 << x1_2 & 0x100002600) == 0)
        x16_5 = x11_1
    else
        uint64_t x16_3 = zx.q(*x10_2)
        uint64_t result = 0
        
        if (x16_3.d u> 0x20)
            return result
        
        char x17_3 = x16_3.b
        
        if ((1 << x16_3 & 0x100002600) == 0)
            return result
        
        x16_5 = x8_1
        
        if (x11_1 != x8_1)
            x16_5 = x11_1
            
            if ((x1_2.d & 0xff) u<= 0x20)
                while ((1 << (x1_2 & 0xff) & 0x100002600) != 0)
                    if (x14_1 + x13 - 1 == x16_5)
                        x16_5 = x8_1
                        break
                    
                    x16_5 += 1
                    x1_2 = zx.q(*x16_5)
                    
                    if ((x1_2.d & 0xff) u> 0x20)
                        break
        
        while (zx.d(x17_3) u<= 0x20)
            if ((1 << zx.q(x17_3) & 0x100002600) == 0)
                break
            
            if (x15_2 + x12 - 1 == x10_2)
                x10_2 = x9
                break
            
            x10_2 += 1
            x17_3 = *x10_2
        
        if (x16_5 == x8_1 && x10_2 == x9)
            return 1
        
        if (x16_5 == x8_1 || x10_2 == x9)
            return 0
        
        x1_2 = zx.q(*x16_5)
    
    uint32_t x11_9 = zx.d(*x10_2)
    int32_t x17_5
    
    if (x1_2.d - 0x41 u< 0x1a)
        x17_5 = x1_2.d | 0x20
    else
        x17_5 = x1_2.d
    
    uint32_t x11_10
    
    if (x11_9 - 0x41 u< 0x1a)
        x11_10 = x11_9 | 0x20
    else
        x11_10 = x11_9
    
    if (x17_5 != x11_10)
        return 0
    
    x11_1 = x16_5 + 1
    x10_2 += 1
    
    if (x11_1 == x8_1)
        goto label_e8f5c8

goto label_e8f5e0
