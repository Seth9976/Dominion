// 函数: _ZN5Botan6BigInt17const_time_lookupERNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEERKNS2_IS0_NS1_9allocatorIS0_EEEEm
// 地址: 0xce1274
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x23 = *arg1
int64_t x25 = *(arg1 + 8)
size_t x22 = x25 - x23
int64_t i = x22 s>> 2
Botan::BigInt* x0_1
Botan::BigInt* x1
Botan::BigInt* x2_1
Botan::BigInt* x3

if (x25 == x23)
    void* x9_1 = *arg2
    int64_t x8_2 = *(arg2 + 8)
    
    if (x8_2 != x9_1)
        int64_t x8_5 = ((x8_2 - x9_1) s>> 3) * -0x3333333333333333
        void* x9_2 = x9_1 + 8
        
        while (i u<= (*x9_2 - *(x9_2 - 8)) s>> 2)
            int64_t temp2_1 = x8_5
            x8_5 -= 1
            x9_2 += 0x28
            
            if (temp2_1 == 1)
                return 
        
        x0_1, x1, x2_1, x3 = Botan::assertion_failure("vec[i].size() >= words", 
            "Word size as expected in const_time_lookup", "const_time_lookup", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x41c9)
        return Botan::ct_divide(x0_1, x1, x2_1, x3) __tailcall
    
    return 

memset(x23, 0, x22)
int64_t x12_1 = *arg2

if (*(arg2 + 8) == x12_1)
    return 

size_t x11_1

x11_1 = x22 s>= 0 ? x22 : -1

size_t x10_1 = x23 - x25
size_t x11_2

x11_2 = x11_1 s< 1 ? x11_1 : 1

size_t x10_2

x10_2 = x10_1 s> x22 ? x10_1 : x22

int64_t x8_1 = 0

while (true)
    int64_t* x12_2 = x12_1 + x8_1 * 0x28
    int64_t x14_1 = *x12_2
    int64_t x15_1 = x12_2[1]
    
    if (i u> (x15_1 - x14_1) s>> 2)
        break
    
    int32_t x13_5 = x8_1.d ^ arg3.d
    int64_t x12_4 = 0
    int32_t x14_2
    
    if (0 u>= (x15_1 - x14_1) s>> 2)
    label_ce1350:
        x14_2 = 0
        goto label_ce1360
    
    while (true)
        x14_2 = *(x14_1 + (x12_4 << 2))
    label_ce1360:
        *(*arg1 + (x12_4 << 2)) = x14_2 & ((x13_5 - 1) & not.d(x13_5)) s>> 0x1f
        
        if (x11_2 * (x10_2 u>> 2) - 1 == x12_4)
            break
        
        x12_4 += 1
        int64_t* x14_5 = *arg2 + x8_1 * 0x28
        x14_1 = *x14_5
        
        if (x12_4 u>= (x14_5[1] - x14_1) s>> 2)
            goto label_ce1350
    
    x12_1 = *arg2
    x8_1 += 1
    
    if (x8_1 == ((*(arg2 + 8) - x12_1) s>> 3) * -0x3333333333333333)
        return 

x0_1, x1, x2_1, x3 = Botan::assertion_failure("vec[i].size() >= words", 
    "Word size as expected in const_time_lookup", "const_time_lookup", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x41c9)
return Botan::ct_divide(x0_1, x1, x2_1, x3) __tailcall
