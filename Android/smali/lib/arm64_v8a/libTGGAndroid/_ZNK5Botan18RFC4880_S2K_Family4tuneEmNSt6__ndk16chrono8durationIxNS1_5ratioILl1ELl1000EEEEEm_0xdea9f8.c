// 函数: _ZNK5Botan18RFC4880_S2K_Family4tuneEmNSt6__ndk16chrono8durationIxNS1_5ratioILl1ELl1000EEEEEm
// 地址: 0xdea9f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = arg2
void* x0 = operator new(0x400)
memset(x0, 0, 0x400)
struct timespec tp
tp.tv_sec.b = 0x16
tp.tv_nsec.d = 0x4b32535f
tp.tv_sec:1.d = 0x34434652
tp.tv_sec:5.w = 0x3838
tp.tv_sec:7.b = 0x30
tp.tv_nsec.b = 0x5f
tp.tv_nsec:4.b = 0
char var_110
Botan::Timer::Timer(&var_110, &tp)
void* var_118

if ((zx.d(tp.tv_sec.b) & 1) != 0)
    operator delete(var_118)
double var_a8
double i = float.d(var_a8) / float.d(0x412e848000000000)
int64_t var_98

while (not(i >= fconvert.d(10.0)))
    double var_d0
    int64_t var_a0
    int64_t var_90
    int64_t var_88
    int64_t var_80
    int64_t var_78
    
    if (var_a0 != 0)
        if (var_80 != 0)
            var_78 += vcvtd_u64_f64(var_d0 * float.d(neg.q(var_80)))
        
        int64_t x8_8
        int64_t x9_3
        
        if (clock_gettime(0, &tp) == 0)
            int64_t x8_10 = tp.tv_nsec + tp.tv_sec * 0x3b9aca00
            x9_3 = x8_10 - var_a0
            
            if (x8_10 u> var_a0)
            label_deab3c:
                x8_8 = var_98
                var_a8 += x9_3
                
                if (x8_8 == 0)
                    var_90 = x9_3
                else
                    int64_t x10_4
                    
                    x10_4 = var_90 u< x9_3 ? x9_3 : var_90
                    
                    if (x9_3 u>= var_88)
                        x9_3 = var_88
                    
                    var_90 = x10_4
                
                var_88 = x9_3
            else
                x8_8 = var_98
        else
            int64_t x8_7 = std::__ndk1::chrono::system_clock::now() * 0x3e8
            x9_3 = x8_7 - var_a0
            
            if (x8_7 u> var_a0)
                goto label_deab3c
            
            x8_8 = var_98
        int64_t var_a0_1 = 0
        var_98 = x8_8 + 1
    
    int64_t x8_12
    
    if (clock_gettime(0, &tp) == 0)
        x8_12 = tp.tv_nsec + tp.tv_sec * 0x3b9aca00
    else
        x8_12 = std::__ndk1::chrono::system_clock::now() * 0x3e8
    
    var_a0 = x8_12
    var_80 = 0
    int64_t* x0_7 = *(arg1 + 8)
    (*(*x0_7 + 0x18))(x0_7, x0, 0x400)
    
    if (var_a0 != 0)
        if (var_80 != 0)
            var_78 += vcvtd_u64_f64(var_d0 * float.d(neg.q(var_80)))
        
        struct timespec tp_1
        int64_t x8_24
        int64_t x9_9
        
        if (clock_gettime(0, &tp_1) == 0)
            int64_t x8_23 = tp_1.tv_nsec + tp_1.tv_sec * 0x3b9aca00
            x9_9 = x8_23 - var_a0
            
            if (x8_23 u<= var_a0)
                x8_24 = var_98
            else
            label_deac54:
                x8_24 = var_98
                var_a8 += x9_9
                
                if (x8_24 == 0)
                    var_90 = x9_9
                else
                    int64_t x10_8
                    
                    x10_8 = var_90 u< x9_9 ? x9_9 : var_90
                    
                    if (x9_9 u>= var_88)
                        x9_9 = var_88
                    
                    var_90 = x10_8
                
                var_88 = x9_9
        else
            int64_t x8_21 = std::__ndk1::chrono::system_clock::now() * 0x3e8
            x9_9 = x8_21 - var_a0
            
            if (x8_21 u> var_a0)
                goto label_deac54
            
            x8_24 = var_98
        var_a0 = 0
        var_98 = x8_24 + 1
    
    i = float.d(var_a8) / float.d(0x412e848000000000)

double v1 = float.d(0x408f400000000000)
i = i / v1
double v8 = 0.0

if (not(i <= 0.0))
    int64_t var_d8
    v1 = float.d(var_d8 * var_98)
    v8 = v1 / i

int64_t x0_11 = (***(arg1 + 8))(i, v1)
double v0 = fconvert.d(1.0)

if (x0_11 u< x22)
    v0 = float.d((x22 + x0_11 - 1) u/ x0_11)

uint64_t x8_30 = vcvtd_u64_f64(float.d(arg3 * 0xf4240) / float.d(0x41cdcd6500000000) * v8 / v0)
uint64_t x23_1

if (x8_30 u< 0x401)
    x23_1 = 0
else if (x8_30 u>> 0x15 u<= 0x1e)
    void* const x9_17 = &data_83a5b4
    
    for (uint64_t i_1 = 0x100; i_1 != 0; )
        uint64_t i_2 = i_1 u>> 1
        void* x12_1 = x9_17 + (i_2 << 2)
        uint64_t x13_1 = zx.q(*x12_1)
        
        if (x13_1 u< x8_30)
            i_1 += not.q(i_2)
        else
            i_1 = i_2
        
        if (x13_1 u< x8_30)
            x9_17 = x12_1 + 4
    
    x23_1 = zx.q(x9_17.d - &data_83a5b4) u>> 2 & 0xff
else
    x23_1 = 0xff

void** x0_12 = operator new(0x18)
int64_t x0_14 = (*(**(arg1 + 8) + 0x28))()
uint64_t x8_34 = zx.q(*(&data_83a5b4 + (x23_1 << 2)))
void** entry_x8
*entry_x8 = x0_12
*x0_12 = _vtable_for_Botan::RFC4880_S2K + 0x10
x0_12[1] = x0_14
x0_12[2] = x8_34
char var_f8
char var_c0

if ((zx.d(var_c0) & 1) == 0)
    if ((zx.d(var_f8) & 1) != 0)
        goto label_deae20
    
    goto label_deadd8

void* var_b0
operator delete(var_b0)
void* var_100

if ((zx.d(var_f8) & 1) == 0)
label_deadd8:
    
    if ((zx.d(var_110) & 1) != 0)
        operator delete(var_100)
else
label_deae20:
    void* var_e8
    operator delete(var_e8)
    
    if ((zx.d(var_110) & 1) != 0)
        operator delete(var_100)
return operator delete(x0)
