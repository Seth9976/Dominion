// 函数: _ZNK5Botan13Scrypt_Family4tuneEmNSt6__ndk16chrono8durationIxNS1_5ratioILl1ELl1000EEEEEm
// 地址: 0xe0f9bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x23 + 0x28)
uint8_t tp_1 = 0xc
int32_t var_8f
__builtin_strncpy(&var_8f, "Scrypt", 7)
char var_150
Botan::Timer::Timer(&var_150)
void* var_80

if ((zx.d(tp_1) & 1) != 0)
    operator delete(var_80)
int64_t var_e8
int64_t x8_23 = var_e8
int64_t var_d8

while (not(float.d(x8_23) / float.d(0x412e848000000000) >= fconvert.d(10.0)))
    double var_110
    int64_t var_e0
    int64_t var_d0
    int64_t var_c8
    int64_t var_c0
    int64_t var_b8
    int64_t var_88
    
    if (var_e0 != 0)
        if (var_c0 != 0)
            var_b8 += vcvtd_u64_f64(var_110 * float.d(neg.q(var_c0)))
        
        int64_t x8_8
        int64_t x9_3
        
        if (clock_gettime(0, &tp_1) == 0)
            int64_t x8_10 = var_88 + tp_1.q * 0x3b9aca00
            x9_3 = x8_10 - var_e0
            
            if (x8_10 u> var_e0)
            label_e0faf8:
                x8_8 = var_d8
                var_e8 += x9_3
                
                if (x8_8 == 0)
                    var_d0 = x9_3
                else
                    int64_t x10_4
                    
                    x10_4 = var_d0 u< x9_3 ? x9_3 : var_d0
                    
                    if (x9_3 u>= var_c8)
                        x9_3 = var_c8
                    
                    var_d0 = x10_4
                
                var_c8 = x9_3
            else
                x8_8 = var_d8
        else
            int64_t x8_7 = std::__ndk1::chrono::system_clock::now() * 0x3e8
            x9_3 = x8_7 - var_e0
            
            if (x8_7 u> var_e0)
                goto label_e0faf8
            
            x8_8 = var_d8
        int64_t var_e0_1 = 0
        var_d8 = x8_8 + 1
    
    int64_t x8_12
    
    if (clock_gettime(0, &tp_1) == 0)
        x8_12 = var_88 + tp_1.q * 0x3b9aca00
    else
        x8_12 = std::__ndk1::chrono::system_clock::now() * 0x3e8
    
    var_e0 = x8_12
    var_c0 = 0
    __builtin_memset(&tp_1, 0, 0x20)
    int64_t var_160_1 = 1
    Botan::scrypt(&tp_1, 0x20, "test", 4, nullptr, 0, 0x2000, 1)
    
    if (var_e0 != 0)
        if (var_c0 != 0)
            var_b8 += vcvtd_u64_f64(var_110 * float.d(neg.q(var_c0)))
        
        struct timespec tp
        int64_t x8_22
        int64_t x9_9
        
        if (clock_gettime(0, &tp) == 0)
            int64_t x8_21 = tp.tv_nsec + tp.tv_sec * 0x3b9aca00
            x9_9 = x8_21 - var_e0
            
            if (x8_21 u<= var_e0)
                x8_22 = var_d8
            else
            label_e0fc28:
                x8_22 = var_d8
                var_e8 += x9_9
                
                if (x8_22 == 0)
                    var_d0 = x9_9
                else
                    int64_t x10_8
                    
                    x10_8 = var_d0 u< x9_9 ? x9_9 : var_d0
                    
                    if (x9_9 u>= var_c8)
                        x9_9 = var_c8
                    
                    var_d0 = x10_8
                
                var_c8 = x9_9
        else
            int64_t x8_19 = std::__ndk1::chrono::system_clock::now() * 0x3e8
            x9_9 = x8_19 - var_e0
            
            if (x8_19 u> var_e0)
                goto label_e0fc28
            
            x8_22 = var_d8
        var_e0 = 0
        var_d8 = x8_22 + 1
    
    x8_23 = var_e8

int64_t var_118
int64_t x9_13 = var_118 * var_d8
uint64_t result
uint64_t result_1

if (x9_13 == 0)
    result = operator new(0x20)
    result_1 = result
    *result = _vtable_for_Botan::Scrypt + 0x10
    __builtin_memcpy(result + 8, 
        "\x00\x80\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00", 
        0x18)
else
    int64_t entry_x3
    int64_t x10_10 = entry_x3 << 0x14
    uint64_t x8_24 = x8_23 u/ x9_13
    int64_t x9_14 = arg3 * 0xf4240
    uint64_t x20_1
    
    if (x10_10 - 1 u>= 0x800400)
        uint64_t x11_4 = x9_14 u/ x8_24
        
        x20_1 = x11_4 u> 4 ? 8 : 1
        
        if (x11_4 u> 4)
            x8_24 *= 5
        
        if (x10_10 == 0)
            goto label_e0fd48
        
        goto label_e0fccc
    
    x20_1 = 1
    int64_t x21_1
    
    if (x10_10 != 0)
    label_e0fccc:
        int64_t x12_2
        
        if (((-0x1e001 & x20_1) | (0xf & x20_1) << 0xd) << 8 u>= x10_10)
            x12_2 = 0x2000
        label_e0fd74:
            x21_1 = x12_2
        else
            x21_1 = 0x2000
            
            while (x9_14 u/ x8_24 u>= 2)
                x12_2 = x21_1 << 1
                bool cond:4_1 = (x20_1 << 8) * (1 | (0x7fffffffffffffff & x21_1) << 1) u< x10_10
                x8_24 <<= 1
                x21_1 = x12_2
                
                if (not(cond:4_1))
                    goto label_e0fd74
    else
    label_e0fd48:
        x21_1 = 0x2000
        
        if (x9_14 u/ x8_24 u>= 2)
            do
                x8_24 <<= 1
                x21_1 <<= 1
            while (x9_14 u/ x8_24 u> 1)
    
    uint64_t result_2 = operator new(0x20)
    result_1 = result_2
    result = Botan::Scrypt::Scrypt(result_2, x21_1, x20_1)

uint64_t* entry_x8
*entry_x8 = result_1
char var_138
char var_100

if ((zx.d(var_100) & 1) == 0)
    if ((zx.d(var_138) & 1) != 0)
        goto label_e0fe0c
    
    goto label_e0fdc0

void* var_f0
result = operator delete(var_f0)

if ((zx.d(var_138) & 1) != 0)
label_e0fe0c:
    void* var_128
    result = operator delete(var_128)
    
    if ((zx.d(var_150) & 1) == 0)
        goto label_e0fdcc
    
    goto label_e0fe1c

label_e0fdc0:

if ((zx.d(var_150) & 1) != 0)
label_e0fe1c:
    void* var_140
    result = operator delete(var_140)
    
    if (*(x23 + 0x28) != x9)
        __stack_chk_fail()
        noreturn
else
label_e0fdcc:
    
    if (*(x23 + 0x28) != x9)
        __stack_chk_fail()
        noreturn

return result
