// 函数: vorbis_lpc_to_lsp
// 地址: 0x1094bcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x28 = _ReadMSR(tpidr_el0)
uint64_t x9 = zx.q(arg3 + 1)
int64_t x10 = *(x28 + 0x28)
int32_t x11 = x9.d s>> 1
int64_t x10_1 = ((zx.q(x11 + 1) << 0x20 s>> 0x1e) + 0xf) & 0xfffffffffffffff0
void var_70
void* x25 = &var_70 - x10_1
void* x24 = x25 - x10_1
void* b_1 = x24 - x10_1
void* b = b_1 - x10_1
int32_t n_7 = arg3 s>> 1
int64_t n = (x9 & 0xfffffffe) << 0x20 s>> 0x21
*(x25 + (sx.q(x11) << 2)) = 0x3f800000
int32_t x9_4
int64_t n_1
float128 v0
float128 v1
uint128_t v2

if (arg3 s> 0)
    int64_t n_3
    
    n_3 = n s> 1 ? n : 1
    
    int64_t x9_1 = sx.q(arg3)
    uint128_t v3
    int64_t x10_2
    
    if (n_3 u>= 8)
        int64_t i_5 = n_3 & 0x7ffffffffffffff8
        int128_t* x13_1 = arg1 + 0x10
        x10_2 = i_5 | 1
        void* x14_2 = x25 + (n << 2) - 0x10
        int128_t* x15_2 = arg1 + (x9_1 << 2) - 0x10
        int64_t i = i_5
        
        do
            v3 = x15_2[-1]
            v0 = x13_1[-1]
            v1 = *x13_1
            i -= 8
            x13_1 = &x13_1[2]
            uint128_t v2_1 = vrev64q_s32(*x15_2)
            uint128_t v3_1 = vrev64q_s32(v3)
            v2 = vextq_s8(v2_1, v2_1, 8)
            v3 = vextq_s8(v3_1, v3_1, 8)
            float128 v0_1 = vaddq_f32(v2, v0)
            float128 v1_1 = vaddq_f32(v3, v1)
            uint128_t v0_2 = vrev64q_s32(v0_1)
            uint128_t v1_2 = vrev64q_s32(v1_1)
            v0 = vextq_s8(v0_2, v0_2, 8)
            *(x14_2 - 0x10) = vextq_s8(v1_2, v1_2, 8)
            *x14_2 = v0
            x14_2 -= 0x20
            x15_2 -= 0x20
        while (i != 0)
        
        if (n_3 != i_5)
            goto label_1094cf8
    else
        x10_2 = 1
    label_1094cf8:
        int64_t x11_1 = x10_2 - 1
        int32_t* x9_3 = arg1 + ((x9_1 - x10_2) << 2)
        void* x10_4 = x25 + ((n - x10_2) << 2)
        
        do
            v0.d = *(arg1 + (x11_1 << 2))
            v1.d = *x9_3
            x9_3 = &x9_3[-1]
            x11_1 += 1
            v0.d = v1.d f+ v0.d
            *x10_4 = v0.d
            x10_4 -= 4
        while (x11_1 s< n)
    n_1 = sx.q(n_7)
    *(x24 + (sx.q(n_7) << 2)) = 0x3f800000
    x9_4 = arg3 s< 2 ? 1 : 0
    
    if (arg3 s< 2)
        goto label_1094d40
    
    int64_t n_4
    
    n_4 = n_1 s> 1 ? n_1 : 1
    
    int64_t x10_8 = sx.q(arg3)
    int64_t x11_4
    
    if (n_4 u>= 8)
        int64_t i_6 = n_4 & 0x7ffffffffffffff8
        int128_t* x14_3 = arg1 + 0x10
        x11_4 = i_6 | 1
        void* x15_4 = x24 + (n_1 << 2) - 0x10
        int128_t* x16_2 = arg1 + (x10_8 << 2) - 0x10
        int64_t i_1 = i_6
        
        do
            v3 = x16_2[-1]
            v0 = x14_3[-1]
            v1 = *x14_3
            i_1 -= 8
            x14_3 = &x14_3[2]
            uint128_t v2_2 = vrev64q_s32(*x16_2)
            uint128_t v3_2 = vrev64q_s32(v3)
            v2 = vextq_s8(v2_2, v2_2, 8)
            v3 = vextq_s8(v3_2, v3_2, 8)
            float128 v0_3 = vsubq_f32(v0, v2)
            float128 v1_3 = vsubq_f32(v1, v3)
            uint128_t v0_4 = vrev64q_s32(v0_3)
            uint128_t v1_4 = vrev64q_s32(v1_3)
            v0 = vextq_s8(v0_4, v0_4, 8)
            *(x15_4 - 0x10) = vextq_s8(v1_4, v1_4, 8)
            *x15_4 = v0
            x15_4 -= 0x20
            x16_2 -= 0x20
        while (i_1 != 0)
        
        if (n_4 != i_6)
            goto label_1094e30
    else
        x11_4 = 1
    label_1094e30:
        int64_t x12_5 = x11_4 - 1
        int32_t* x10_10 = arg1 + ((x10_8 - x11_4) << 2)
        void* x11_6 = x24 + ((n_1 - x11_4) << 2)
        
        do
            v0.d = *(arg1 + (x12_5 << 2))
            v1.d = *x10_10
            x10_10 = &x10_10[-1]
            x12_5 += 1
            v0.d = v0.d f- v1.d
            *x11_6 = v0.d
            x11_6 -= 4
        while (x12_5 s< n_1)
    
    if (n.d s<= n_7)
        goto label_1094d50
    
    goto label_1094e68

n_1 = sx.q(n_7)
*(x24 + (sx.q(n_7) << 2)) = 0x3f800000
label_1094d40:
x9_4 = 1

if (n.d s> n_7)
label_1094e68:
    
    if (arg3 s> 3)
        int64_t x9_6 = 2
        int64_t n_2
        
        n_2 = n_1 s> 2 ? n_1 : 2
        
        int64_t i_8
        
        if (n_2 - 1 u>= 2)
            i_8 = (n_2 - 1) & 0xfffffffffffffffe
            x9_6 = i_8 + 2
            void* x12_7 = x24 + (n_1 << 2) - 0xc
            int64_t i_7 = i_8
            int64_t i_2
            
            do
                v0.q = *x12_7
                v1.q = *(x12_7 + 8)
                i_2 = i_7
                i_7 -= 2
                *x12_7 = vadd_f32(v0, v1).q
                x12_7 -= 8
            while (i_2 != 2)
        
        if (n_2 - 1 u< 2 || n_2 - 1 != i_8)
            int64_t x10_12 = x9_6 - 1
            void* x9_8 = x24 + ((n_1 - x9_6) << 2)
            
            do
                v0.d = *(x9_8 + 8)
                v1.d = *x9_8
                x10_12 += 1
                v0.d = v1.d f+ v0.d
                *x9_8 = v0.d
                x9_8 -= 4
            while (n_1 s> x10_12)
else
label_1094d50:
    
    if (arg3 s>= 1)
        int64_t x10_5 = 0
        void* x11_3 = x25 + (n << 2) - 4
        
        do
            v0.d = *x11_3
            v1.d = *(x11_3 + 4)
            x10_5 += 1
            v0.d = v0.d f- v1.d
            *x11_3 = v0.d
            x11_3 -= 4
        while (x10_5 s< n)
    
    if ((x9_4 & 1) == 0)
        int64_t x9_5 = 0
        void* x10_7 = x24 + (n_1 << 2) - 4
        
        do
            v0.d = *x10_7
            v1.d = *(x10_7 + 4)
            x9_5 += 1
            v0.d = v0.d f+ v1.d
            *x10_7 = v0.d
            x10_7 -= 4
        while (n_1 s> x9_5)

v1.d = *x25
v0.d = fconvert.s(0.5f)
v1.d = v1.d f* v0.d
*x25 = v1.d

if (arg3 s>= 3)
    int64_t x9_9 = 0
    int64_t x11_7 = not.q(n)
    int64_t i_3 = 2
    int64_t x15_5 = -3
    
    do
        int64_t x18_1
        
        x18_1 = x15_5 s> x11_7 ? x15_5 : x11_7
        
        int64_t x16_4
        
        if (-3 - x9_9 s> x11_7)
            x16_4 = -3 - x9_9
        else
            x16_4 = x11_7
        
        int64_t x17_1 = n + 2 + x16_4
        int64_t n_5 = n
        int64_t x18_2
        
        if (x17_1 u>= 2)
            x18_2 = x17_1 & 0xfffffffffffffffe
            int64_t j_2 = (n + 2 + x18_1) & 0xfffffffffffffffe
            n_5 = n - x18_2
            void* x2 = x25 + (n << 2) - 4
            void* x1 = x25 + (n << 2) - 4
            int64_t j
            
            do
                v1.q = *x1
                x1 -= 8
                j = j_2
                j_2 -= 2
                v2.q = *x1
                double v3_3 = vadd_f32(v1, v1)
                *x1 = vsub_f32(v2, v1).q
                *x2 = v3_3
                x2 = x1
            while (j != 2)
        
        if (x17_1 u< 2 || x17_1 != x18_2)
            bool cond:9_1
            
            do
                void* x17_2 = x25 + (n_5 << 2)
                v1.d = *x17_2
                v2.d = *(x17_2 - 8)
                cond:9_1 = n_5 s> i_3
                n_5 -= 1
                v2.d = v2.d f- v1.d
                v1.d = v1.d f+ v1.d
                *(x17_2 - 8) = v2.d
                *x17_2 = v1.d
            while (cond:9_1)
        
        i_3 += 1
        x9_9 += 1
        x15_5 -= 1
    while (i_3 != zx.q(x11 + 1))
    
    v1.d = *x24
    v0.d = v1.d f* v0.d
    *x24 = v0.d
    
    if (arg3 s>= 4)
        int64_t x8_2 = 0
        int64_t x11_8 = not.q(n_1)
        int64_t i_4 = 2
        int64_t x15_6 = -3
        
        do
            int64_t x18_3
            
            x18_3 = x15_6 s> x11_8 ? x15_6 : x11_8
            
            int64_t x16_7
            
            if (-3 - x8_2 s> x11_8)
                x16_7 = -3 - x8_2
            else
                x16_7 = x11_8
            
            int64_t x17_3 = n_1 + 2 + x16_7
            int64_t n_6 = n_1
            int64_t x18_4
            
            if (x17_3 u>= 2)
                x18_4 = x17_3 & 0xfffffffffffffffe
                int64_t j_3 = (n_1 + 2 + x18_3) & 0xfffffffffffffffe
                n_6 = n_1 - x18_4
                void* x2_1 = x24 + (n_1 << 2) - 4
                void* x1_1 = x24 + (n_1 << 2) - 4
                int64_t j_1
                
                do
                    v0.q = *x1_1
                    x1_1 -= 8
                    j_1 = j_3
                    j_3 -= 2
                    v1.q = *x1_1
                    double v2_3 = vadd_f32(v0, v0)
                    *x1_1 = vsub_f32(v1, v0).q
                    *x2_1 = v2_3
                    x2_1 = x1_1
                while (j_1 != 2)
            
            if (x17_3 u< 2 || x17_3 != x18_4)
                bool cond:19_1
                
                do
                    void* x17_4 = x24 + (n_6 << 2)
                    v0.d = *x17_4
                    v1.d = *(x17_4 - 8)
                    cond:19_1 = n_6 s> i_4
                    n_6 -= 1
                    v1.d = v1.d f- v0.d
                    v0.d = v0.d f+ v0.d
                    *(x17_4 - 8) = v1.d
                    *x17_4 = v0.d
                while (cond:19_1)
            
            i_4 += 1
            x8_2 += 1
            x15_6 -= 1
        while (i_4 != zx.q(n_7 + 1))
else
    v1.d = *x24
    v0.d = v1.d f* v0.d
    *x24 = v0.d

int32_t x0_1 = sub_10951b8(x25, n.d, b_1)
int32_t x0_3

if (x0_1 == 0)
    x0_3 = sub_10951b8(x24, n_7, b)

int64_t result

if (x0_1 == 0 && x0_3 == 0)
    sub_10953b0(x25, n.d, b_1)
    sub_10953b0(x24, n_7, b)
    qsort(b_1, n, 4, sub_109557c)
    qsort(b, n_1, 4, sub_109557c)
    
    if (arg3 s< 1)
        result = 0
    else
        int64_t x24_1 = 0
        float* x25_1 = arg2
        float v0_5
        
        do
            v0_5 = acosf(*(b_1 + (x24_1 << 2)))
            x24_1 += 1
            *x25_1 = v0_5
            x25_1 = &x25_1[2]
        while (x24_1 s< n)
        
        result = 0
        
        if (arg3 s>= 2)
            int64_t x20_1 = 0
            float* x19_1 = &arg2[1]
            
            do
                v0_5 = acosf(*(b + (x20_1 << 2)))
                x20_1 += 1
                *x19_1 = v0_5
                x19_1 = &x19_1[2]
            while (x20_1 s< n_1)
            
            result = 0
else
    result = 0xffffffff

if (*(x28 + 0x28) == x10)
    return result

__stack_chk_fail()
noreturn
