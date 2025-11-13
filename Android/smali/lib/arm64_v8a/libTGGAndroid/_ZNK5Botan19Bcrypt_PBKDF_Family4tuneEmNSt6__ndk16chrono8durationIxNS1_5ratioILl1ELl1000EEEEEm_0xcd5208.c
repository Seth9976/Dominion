// 函数: _ZNK5Botan19Bcrypt_PBKDF_Family4tuneEmNSt6__ndk16chrono8durationIxNS1_5ratioILl1ELl1000EEEEEm
// 地址: 0xcd5208
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v8
double var_60 = v8
uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x10 = *(x22 + 0x28)
uint8_t tp_1 = 0x18
int64_t var_8f
__builtin_strncpy(&var_8f, "Bcrypt_PBKDF", 0xd)
char var_150
Botan::Timer::Timer(&var_150)
void* var_80

if ((zx.d(tp_1) & 1) != 0)
    operator delete(var_80)
uint64_t x24 = (arg2 + 0x1f) u>> 5
int64_t* result
uint64_t x8_25

if (x24 == 0)
    result = operator new(0x10)
    x8_25 = 0x20
else
    int64_t var_e8
    int64_t x8_2 = var_e8
    int64_t var_d8
    
    while (not(float.d(x8_2) / float.d(0x412e848000000000) >= fconvert.d(10.0)))
        double var_110
        int64_t var_e0
        int64_t var_d0
        int64_t var_c8
        int64_t var_c0
        int64_t var_b8
        
        if (var_e0 != 0)
            if (var_c0 != 0)
                var_b8 += vcvtd_u64_f64(var_110 * float.d(neg.q(var_c0)))
            
            int64_t x8_10
            int64_t x9_3
            
            if (clock_gettime(0, &tp_1) == 0)
                int64_t x8_12 = var_8f + tp_1.q * 0x3b9aca00
                x9_3 = x8_12 - var_e0
                
                if (x8_12 u> var_e0)
                label_cd5350:
                    x8_10 = var_d8
                    var_e8 += x9_3
                    
                    if (x8_10 == 0)
                        var_d0 = x9_3
                    else
                        int64_t x10_4
                        
                        x10_4 = var_d0 u< x9_3 ? x9_3 : var_d0
                        
                        if (x9_3 u>= var_c8)
                            x9_3 = var_c8
                        
                        var_d0 = x10_4
                    
                    var_c8 = x9_3
                else
                    x8_10 = var_d8
            else
                int64_t x8_9 = std::__ndk1::chrono::system_clock::now() * 0x3e8
                x9_3 = x8_9 - var_e0
                
                if (x8_9 u> var_e0)
                    goto label_cd5350
                
                x8_10 = var_d8
            int64_t var_e0_1 = 0
            var_d8 = x8_10 + 1
        
        int64_t x8_14
        
        if (clock_gettime(0, &tp_1) == 0)
            x8_14 = var_8f + tp_1.q * 0x3b9aca00
        else
            x8_14 = std::__ndk1::chrono::system_clock::now() * 0x3e8
        
        var_e0 = x8_14
        var_c0 = 0
        __builtin_memset(&tp_1, 0, 0x20)
        Botan::bcrypt_pbkdf(&tp_1, 0x20, "test", 4, nullptr, 0, 2)
        
        if (var_e0 != 0)
            if (var_c0 != 0)
                var_b8 += vcvtd_u64_f64(var_110 * float.d(neg.q(var_c0)))
            
            struct timespec tp
            int64_t x8_24
            int64_t x9_9
            
            if (clock_gettime(0, &tp) == 0)
                int64_t x8_23 = tp.tv_nsec + tp.tv_sec * 0x3b9aca00
                x9_9 = x8_23 - var_e0
                
                if (x8_23 u<= var_e0)
                    x8_24 = var_d8
                else
                label_cd5478:
                    x8_24 = var_d8
                    var_e8 += x9_9
                    
                    if (x8_24 == 0)
                        var_d0 = x9_9
                    else
                        int64_t x10_8
                        
                        x10_8 = var_d0 u< x9_9 ? x9_9 : var_d0
                        
                        if (x9_9 u>= var_c8)
                            x9_9 = var_c8
                        
                        var_d0 = x10_8
                    
                    var_c8 = x9_9
            else
                int64_t x8_21 = std::__ndk1::chrono::system_clock::now() * 0x3e8
                x9_9 = x8_21 - var_e0
                
                if (x8_21 u> var_e0)
                    goto label_cd5478
                
                x8_24 = var_d8
            var_e0 = 0
            var_d8 = x8_24 + 1
        
        x8_2 = var_e8
    
    int64_t var_118
    int64_t x9_13 = var_118 * var_d8
    
    if (x9_13 u< x24 || x8_2 == 0)
        result = operator new(0x10)
        x8_25 = 0x20
    else
        uint64_t x21_1 = x8_2 u/ (x9_13 u/ x24)
        int64_t x20_1 = arg3 * 0xf4240
        
        if (x21_1 u<= x20_1)
            result = operator new(0x10)
            x8_25 = (x20_1 u/ x21_1) << 1
        else
            result = operator new(0x10)
            x8_25 = 2

int64_t** entry_x8
*entry_x8 = result
*result = _vtable_for_Botan::Bcrypt_PBKDF + 0x10
result[1] = x8_25
char var_138
char var_100

if ((zx.d(var_100) & 1) == 0)
    if ((zx.d(var_138) & 1) != 0)
        goto label_cd5588
    
    goto label_cd5540

void* var_f0
result = operator delete(var_f0)

if ((zx.d(var_138) & 1) != 0)
label_cd5588:
    void* var_128
    result = operator delete(var_128)
    
    if ((zx.d(var_150) & 1) == 0)
        goto label_cd554c
    
    goto label_cd5598

label_cd5540:

if ((zx.d(var_150) & 1) != 0)
label_cd5598:
    void* var_140
    result = operator delete(var_140)
    
    if (*(x22 + 0x28) != x10)
        __stack_chk_fail()
        noreturn
else
label_cd554c:
    
    if (*(x22 + 0x28) != x10)
        __stack_chk_fail()
        noreturn

return result
