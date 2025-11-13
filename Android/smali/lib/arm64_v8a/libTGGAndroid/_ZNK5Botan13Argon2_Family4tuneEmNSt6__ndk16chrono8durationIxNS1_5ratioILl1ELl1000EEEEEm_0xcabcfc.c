// 函数: _ZNK5Botan13Argon2_Family4tuneEmNSt6__ndk16chrono8durationIxNS1_5ratioILl1ELl1000EEEEEm
// 地址: 0xcabcfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t entry_x3
int64_t x24

if (entry_x3 == 0)
    x24 = 0x40000
else
    x24 = entry_x3 << 0xa

int64_t x8_1 = *(x23 + 0x28)
uint8_t tp_1 = 0xc
int64_t x25

x25 = arg3 s> 0x1f3 ? 0x20000 : 0x9000

int32_t var_bf
__builtin_strncpy(&var_bf, "Argon2", 7)
char var_180
Botan::Timer::Timer(&var_180)
void* var_b0

if ((zx.d(tp_1) & 1) != 0)
    operator delete(var_b0)
int64_t var_118
int64_t x8_26 = var_118
int64_t var_108

while (not(float.d(x8_26) / float.d(0x412e848000000000) >= fconvert.d(10.0)))
    double var_140
    int64_t var_110
    int64_t var_100
    int64_t var_f8
    int64_t var_f0
    int64_t var_e8
    int64_t var_b8
    
    if (var_110 != 0)
        if (var_f0 != 0)
            var_e8 += vcvtd_u64_f64(var_140 * float.d(neg.q(var_f0)))
        
        int64_t x8_10
        int64_t x9_3
        
        if (clock_gettime(0, &tp_1) == 0)
            int64_t x8_12 = var_b8 + tp_1.q * 0x3b9aca00
            x9_3 = x8_12 - var_110
            
            if (x8_12 u> var_110)
            label_cabe58:
                x8_10 = var_108
                var_118 += x9_3
                
                if (x8_10 == 0)
                    var_100 = x9_3
                else
                    int64_t x10_4
                    
                    x10_4 = var_100 u< x9_3 ? x9_3 : var_100
                    
                    if (x9_3 u>= var_f8)
                        x9_3 = var_f8
                    
                    var_100 = x10_4
                
                var_f8 = x9_3
            else
                x8_10 = var_108
        else
            int64_t x8_9 = std::__ndk1::chrono::system_clock::now() * 0x3e8
            x9_3 = x8_9 - var_110
            
            if (x8_9 u> var_110)
                goto label_cabe58
            
            x8_10 = var_108
        int64_t var_110_1 = 0
        var_108 = x8_10 + 1
    
    int64_t x8_14
    
    if (clock_gettime(0, &tp_1) == 0)
        x8_14 = var_b8 + tp_1.q * 0x3b9aca00
    else
        x8_14 = std::__ndk1::chrono::system_clock::now() * 0x3e8
    
    var_110 = x8_14
    var_f0 = 0
    char x8_16 = *(arg1 + 8)
    __builtin_memset(&tp_1, 0, 0x40)
    int64_t var_1c0_1 = 0
    int64_t var_1b8_1 = 0
    int64_t var_1a0_1 = x25
    int64_t var_198_1 = 1
    int64_t var_1a8_1 = 1
    char var_1b0_1 = x8_16
    Botan::argon2(&tp_1, 0x40, "test", 4, nullptr, 0, nullptr, 0)
    
    if (var_110 != 0)
        if (var_f0 != 0)
            var_e8 += vcvtd_u64_f64(var_140 * float.d(neg.q(var_f0)))
        
        struct timespec tp
        int64_t x8_25
        int64_t x9_9
        
        if (clock_gettime(0, &tp) == 0)
            int64_t x8_24 = tp.tv_nsec + tp.tv_sec * 0x3b9aca00
            x9_9 = x8_24 - var_110
            
            if (x8_24 u<= var_110)
                x8_25 = var_108
            else
            label_cabf9c:
                x8_25 = var_108
                var_118 += x9_9
                
                if (x8_25 == 0)
                    var_100 = x9_9
                else
                    int64_t x10_8
                    
                    x10_8 = var_100 u< x9_9 ? x9_9 : var_100
                    
                    if (x9_9 u>= var_f8)
                        x9_9 = var_f8
                    
                    var_100 = x10_8
                
                var_f8 = x9_9
        else
            int64_t x8_22 = std::__ndk1::chrono::system_clock::now() * 0x3e8
            x9_9 = x8_22 - var_110
            
            if (x8_22 u> var_110)
                goto label_cabf9c
            
            x8_25 = var_108
        var_110 = 0
        var_108 = x8_25 + 1
    
    x8_26 = var_118

int64_t var_148
int64_t x9_13 = var_148 * var_108
int64_t* result
uint64_t x21_1
uint64_t x22

if (x9_13 == 0 || x8_26 == 0)
    result = operator new(0x28)
    x22 = 1
    x21_1 = 0x20000
else
    int64_t x9_14 = arg3 * 0xf4240
    uint64_t x8_27 = x8_26 u/ (x9_13 * (x25 u>> 0xc))
    x21_1 = 0x1000
    
    if (x24 u> 0x1000 && x8_27 u< x9_14)
        uint64_t x11_3 = x24 u>> 0xc
        uint64_t x10_14 = (x9_14 + x8_27 - 1) u/ x8_27
        uint64_t x10_15
        
        x10_15 = x11_3 u< x10_14 ? x11_3 : x10_14
        
        x21_1 = x10_15 << 0xc
        x8_27 *= x10_15
    
    if (x8_27 u>= x9_14)
        x22 = 1
    else
        x22 = (x9_14 + x8_27 - 1) u/ x8_27
    
    result = operator new(0x28)

char x8_28 = *(arg1 + 8)
result[2] = x21_1
result[3] = x22
result[4] = 1
*result = _vtable_for_Botan::Argon2 + 0x10
result[1].b = x8_28
void** entry_x8
*entry_x8 = result
char var_168
char var_130

if ((zx.d(var_130) & 1) == 0)
    if ((zx.d(var_168) & 1) != 0)
        goto label_cac100
    
    goto label_cac0b4

void* var_120
result = operator delete(var_120)

if ((zx.d(var_168) & 1) != 0)
label_cac100:
    void* var_158
    result = operator delete(var_158)
    
    if ((zx.d(var_180) & 1) == 0)
        goto label_cac0c0
    
    goto label_cac110

label_cac0b4:

if ((zx.d(var_180) & 1) != 0)
label_cac110:
    void* var_170
    result = operator delete(var_170)
    
    if (*(x23 + 0x28) != x8_1)
        __stack_chk_fail()
        noreturn
else
label_cac0c0:
    
    if (*(x23 + 0x28) != x8_1)
        __stack_chk_fail()
        noreturn

return result
