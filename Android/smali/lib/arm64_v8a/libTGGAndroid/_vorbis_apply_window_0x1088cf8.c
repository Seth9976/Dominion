// 函数: _vorbis_apply_window
// 地址: 0x1088cf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = *(arg3 + (sx.q(arg5) << 3))
int64_t x8_1

if (arg5 != 0)
    x8_1 = sx.q(arg4)
else
    x8_1 = 0

int64_t x9_1

if (arg5 != 0)
    x9_1 = sx.q(arg6)
else
    x9_1 = 0

int64_t x23 = sx.q(*(arg2 + (x8_1 << 2)))
int64_t x8_2 = *(arg3 + (x8_1 << 3))
int64_t result = sx.q(*(arg2 + (x9_1 << 2)))
int64_t x9_2 = *(arg3 + (x9_1 << 3))
int64_t x10_1

if (x22 s< 0)
    x10_1 = x22 + 3
else
    x10_1 = x22

int64_t x11

if (x22 s< 0)
    x11 = x22 + 1
else
    x11 = x22

int64_t x1 = x10_1 s>> 2
int64_t x28 = x11 s>> 1
int64_t x10_3

if (x8_2 s< 0)
    x10_3 = x8_2 + 3
else
    x10_3 = x8_2

int64_t x8_3

if (x8_2 s< 0)
    x8_3 = x8_2 + 1
else
    x8_3 = x8_2

int64_t x24 = x10_3 s>> 2
int64_t x20 = x8_3 s>> 1
int64_t x8_4

if (x9_2 s< 0)
    x8_4 = x9_2 + 3
else
    x8_4 = x9_2

int64_t x9_3

if (x9_2 s< 0)
    x9_3 = x9_2 + 1
else
    x9_3 = x9_2

int64_t x21 = x1 - x24
int64_t x25 = x8_4 s>> 2
int64_t x27 = x21 + x20
int64_t x2 = x28 + x1 - x25
int64_t x26 = x9_3 s>> 1
int64_t x9_4
float128 v0
float128 v1
uint128_t v2
uint128_t v3

if (x21 s< 1)
    x9_4 = 0
else
    v0, v1, v2, v3 = memset(arg1, 0, x21 << 2)
    x9_4 = x21 & 0xffffffff

int64_t x8_5 = x2 + x26

if (x27 s> x9_4)
    void* x11_2 = (&data_1181808)[x23]
    int64_t x14_1 = x1 + x20
    int64_t x13_1 = x14_1 - x24
    int64_t x12_1 = x13_1 - x9_4
    void* x15_1
    
    if (x12_1 u>= 8)
        x15_1 = &arg1[x9_4]
    
    int64_t i_4
    
    if (x12_1 u>= 8 && (x15_1 u>= x11_2 + ((x14_1 - (x9_4 + x24)) << 2) || x11_2 u>= &arg1[x13_1]))
        i_4 = x12_1 & 0xfffffffffffffff8
        int128_t* x14_12 = x11_2 + 0x10
        x9_4 += i_4
        void* x15_6 = x15_1 + 0x10
        int64_t i_3 = i_4
        int64_t i
        
        do
            v0 = x14_12[-1]
            v1 = *x14_12
            v3 = *x15_6
            x14_12 = &x14_12[2]
            i = i_3
            i_3 -= 8
            v0 = vmulq_f32(*(x15_6 - 0x10), v0, 0)
            v1 = vmulq_f32(v3, v1, 0)
            *(x15_6 - 0x10) = v0
            *x15_6 = v1
            x15_6 += 0x20
        while (i != 8)
        
        if (x12_1 != i_4)
            goto label_1088e24
    else
        i_4 = 0
    label_1088e24:
        int32_t* x11_3 = x11_2 + (i_4 << 2)
        
        do
            v0.d = *x11_3
            x11_3 = &x11_3[1]
            v1.d = arg1[x9_4]
            x9_4 += 1
            v0.d = v1.d f* v0.d
            arg1[x9_4] = v0.d
        while (x27 s> x9_4)

int64_t x9_5

if (x8_5 s<= sx.q(x2.d))
    x9_5 = x2
else
    int64_t x13_3 = neg.q(x25)
    int64_t x10_4 = (&data_1181808)[result]
    x9_5 = sx.q(x2.d)
    int64_t x12_3 = x28 + x1 + x13_3 + x26
    int64_t x11_6 = x12_3 - x9_5
    
    if (x11_6 u<= 7)
    label_1088f40:
        int32_t x11_7 = x26.d - 1
        
        do
            v0.d = *(x10_4 + (sx.q(x11_7) << 2))
            v1.d = arg1[x9_5]
            x9_5 += 1
            x11_7 -= 1
            v0.d = v1.d f* v0.d
            arg1[x9_5] = v0.d
        while (x8_5 s> x9_5)
    else
        int64_t x12_5 = x12_3 - 1 - sx.q(x2.d)
        
        if (x26.d - 1 - x12_5.d s> x26.d - 1 || x12_5 u>> 0x20 != 0)
            goto label_1088f40
        
        int64_t x12_8 = -0x100000000 + (x26 << 0x20)
        int64_t x13_5
        
        if (arg1 + (x2 << 0x20 s>> 0x1e) u< x10_4 + (x12_8 s>> 0x1e) + 4)
            x13_5 = x28 + x1 + x13_3 + x26
        
        if (arg1 + (x2 << 0x20 s>> 0x1e) u< x10_4 + (x12_8 s>> 0x1e) + 4
                && x10_4 + (((x12_8 s>> 0x20) + sx.q(x2.d) + 1 - x13_5) << 2) u< &arg1[x13_5])
            goto label_1088f40
        
        int64_t i_5 = x11_6 & 0xfffffffffffffff8
        x9_5 += i_5
        x26 = zx.q(x26.d - i_5.d)
        void* x14_11 = &arg1[sx.q(x2.d) + 4]
        int64_t i_2 = i_5
        int64_t i_1
        
        do
            void* x17_1 = x10_4 + (x12_8 s>> 0x1e)
            v3 = *(x17_1 - 0x1c)
            v0 = *(x14_11 - 0x10)
            v1 = *x14_11
            x12_8 += -0x800000000
            uint128_t v2_1 = vrev64q_s32(*(x17_1 - 0xc))
            uint128_t v3_1 = vrev64q_s32(v3)
            v2 = vextq_s8(v2_1, v2_1, 8)
            v3 = vextq_s8(v3_1, v3_1, 8)
            v0 = vmulq_f32(v0, v2, 0)
            v1 = vmulq_f32(v1, v3, 0)
            i_1 = i_2
            i_2 -= 8
            *(x14_11 - 0x10) = v0
            *x14_11 = v1
            x14_11 += 0x20
        while (i_1 != 8)
        
        if (x11_6 != i_5)
            goto label_1088f40

int64_t x8_6 = sx.q(x9_5.d)

if (x22 s<= x8_6)
    return result

int64_t x8_8 = (0x100000000 + (x9_5 << 0x20)) s>> 0x20
int64_t x9_6

x9_6 = x22 s> x8_8 ? x22 : x8_8

return memset(&arg1[x8_6], 0, (x9_6 + 1 - x8_8) << 2)
