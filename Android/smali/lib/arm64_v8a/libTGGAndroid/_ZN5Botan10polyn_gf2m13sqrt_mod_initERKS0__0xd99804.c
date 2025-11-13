// 函数: _ZN5Botan10polyn_gf2m13sqrt_mod_initERKS0_
// 地址: 0xd99804
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x28 = *(arg1 + 0x20)
int64_t* x11 = *(arg1 + 0x28)

if (x11 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x11[1]) + 1, &x11[1])
    while (i != 0)

int32_t** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t x9_3 = *(arg1 + 8)
int64_t x8_2 = *(arg1 + 0x10) - x9_3
uint32_t x10_2 = (x8_2 u>> 1).d
int64_t x8_3 = (x8_2 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x22 = (x10_2 & x10_2 s>> 0x1f) - 1

while (true)
    int64_t x10_4 = x8_3 - 1
    
    if (x8_3 s< 1)
        break
    
    uint32_t x11_1 = zx.d(*(x9_3 - 2 + (x8_3 << 1)))
    x8_3 = x10_4
    
    if (x11_1 != 0)
        x22 = x10_4.d
        break

*arg1 = x22
Botan::polyn_gf2m::sqmod_init(arg1)
int64_t* x24 = *(arg1 + 0x28)
int64_t var_b8 = *(arg1 + 0x20)
int64_t* var_b0 = x24

if (x24 != 0)
    int32_t i_1
    
    do
        i_1 = __stxr(__ldxr(&x24[1]) + 1, &x24[1])
    while (i_1 != 0)

int32_t var_a8
Botan::polyn_gf2m::polyn_gf2m(&var_a8, zx.q(x22 - 1))

if (x24 != 0)
    int64_t x9_7
    int32_t i_2
    
    do
        x9_7 = __ldaxr(&x24[1])
        i_2 = __stlxr(x9_7 - 1, &x24[1])
    while (i_2 != 0)
    
    if (x9_7 == 0)
        (*(*x24 + 0x10))(x24)
        std::__ndk1::__shared_weak_count::__release_weak()

void* result_1
void* result_4 = result_1
var_a8 = 1
uint64_t fp = zx.q(x22)
*(result_4 + 2) = 1
int32_t var_e8
void* var_e0
void* var_d8
int64_t var_d0
int64_t var_c8
int64_t* var_c0
int64_t var_88
int64_t* var_80
void* var_78

if (*x28 * fp != 1)
    uint64_t i_3 = 0
    
    do
        Botan::polyn_gf2m::sqmod(&var_a8, &var_78)
        int32_t x8_48 = var_e8
        uint16_t* var_110
        std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::vector(&var_110)
        int64_t var_f8_1 = var_c8
        int64_t* var_f0_1 = var_c0
        
        if (var_c0 != 0)
            int32_t j
            
            do
                j = __stxr(__ldxr(&var_c0[1]) + 1, &var_c0[1])
            while (j != 0)
        
        void* result_3 = result_1
        var_e8 = var_a8
        std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::assign<uint16_t*>(
            &var_e0, result_3)
        
        if (var_80 != 0)
            int32_t j_1
            
            do
                j_1 = __stxr(__ldxr(&var_80[1]) + 1, &var_80[1])
            while (j_1 != 0)
        
        int64_t* x27_1 = var_c0
        var_c8 = var_88
        var_c0 = var_80
        
        if (x27_1 != 0)
            int64_t x9_40
            int32_t j_2
            
            do
                x9_40 = __ldaxr(&x27_1[1])
                j_2 = __stlxr(x9_40 - 1, &x27_1[1])
            while (j_2 != 0)
            
            if (x9_40 == 0)
                (*(*x27_1 + 0x10))(x27_1)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        uint16_t* x1_9 = var_110
        var_a8 = x8_48
        std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::assign<uint16_t*>(
            &result_1, x1_9)
        
        if (var_f0_1 != 0)
            int32_t j_3
            
            do
                j_3 = __stxr(__ldxr(&var_f0_1[1]) + 1, &var_f0_1[1])
            while (j_3 != 0)
        
        int64_t* x27_2 = var_80
        var_88 = var_f8_1
        var_80 = var_f0_1
        int64_t x9_42
        
        if (x27_2 != 0)
            int32_t j_4
            
            do
                x9_42 = __ldaxr(&x27_2[1])
                j_4 = __stlxr(x9_42 - 1, &x27_2[1])
            while (j_4 != 0)
        
        int64_t* x27_3
        
        if (x27_2 != 0 && x9_42 == 0)
            (*(*x27_2 + 0x10))(x27_2)
            std::__ndk1::__shared_weak_count::__release_weak()
            x27_3 = var_f0_1
            
            if (x27_3 != 0)
                goto label_d99e80
        else
            x27_3 = var_f0_1
            
            if (x27_3 != 0)
            label_d99e80:
                int64_t x9_43
                int32_t j_5
                
                do
                    x9_43 = __ldaxr(&x27_3[1])
                    j_5 = __stlxr(x9_43 - 1, &x27_3[1])
                while (j_5 != 0)
                
                if (x9_43 == 0)
                    (*(*x27_3 + 0x10))(x27_3)
                    std::__ndk1::__shared_weak_count::__release_weak()
        uint16_t* x0_32 = var_110
        
        if (x0_32 != 0)
            uint16_t* var_108 = x0_32
            int64_t var_100
            Botan::deallocate_memory(x0_32, (var_100 - x0_32) s>> 1, 2)
        
        void* x0_33
        
        if (var_c0 == 0)
        label_d99f04:
            x0_33 = var_e0
            
            if (x0_33 != 0)
                var_d8 = x0_33
                Botan::deallocate_memory(x0_33, (var_d0 - x0_33) s>> 1, 2)
        else
            int64_t x9_44
            int32_t j_6
            
            do
                x9_44 = __ldaxr(&var_c0[1])
                j_6 = __stlxr(x9_44 - 1, &var_c0[1])
            while (j_6 != 0)
            
            if (x9_44 != 0)
                goto label_d99f04
            
            (*(*var_c0 + 0x10))(var_c0)
            std::__ndk1::__shared_weak_count::__release_weak()
            x0_33 = var_e0
            
            if (x0_33 != 0)
                var_d8 = x0_33
                Botan::deallocate_memory(x0_33, (var_d0 - x0_33) s>> 1, 2)
        i_3 = zx.q(i_3.d + 1)
    while (*x28 * fp - 1 u> i_3)

uint32_t x19_1 = x22 u>> 1

if (x19_1 != 0)
    int32_t x25_1 = 0
    
    do
        int64_t* x8_11 = *(arg1 + 0x28)
        int64_t var_128_1 = *(arg1 + 0x20)
        
        if (x8_11 != 0)
            int32_t i_4
            
            do
                i_4 = __stxr(__ldxr(&x8_11[1]) + 1, &x8_11[1])
            while (i_4 != 0)
        
        Botan::polyn_gf2m::polyn_gf2m(&var_e8, zx.q(x22 - 1))
        int32_t* x8_13 = entry_x8[1]
        
        if (x8_13 u>= entry_x8[2])
            std::__ndk1::vector<Botan::polyn_gf2m, std::__ndk1::allocator<Botan::polyn_gf2m> >::__push_back_slow_path<Botan::polyn_gf2m>(
                entry_x8)
        else
            int128_t v0_1
            v0_1.q = 0
            v0_1:8.q = 0
            __builtin_memset(&x8_13[2], 0, 0x28)
            int32_t x10_8 = *x8_13
            *x8_13 = var_e8
            var_e8 = x10_8
            *(x8_13 + 0x20) = var_c8
            *(x8_13 + 0x28) = var_c0
            var_c8 = 0
            var_c0 = nullptr
            v0_1 = *(x8_13 + 8)
            *(x8_13 + 8) = var_e0
            *(x8_13 + 0x10) = var_d8
            var_e0.o = v0_1
            int64_t x10_9 = *(x8_13 + 0x18)
            *(x8_13 + 0x18) = var_d0
            var_d0 = x10_9
            entry_x8[1] = &x8_13[0xc]
        
        void* x0_6
        
        if (var_c0 == 0)
        label_d99a0c:
            x0_6 = var_e0
            
            if (x0_6 != 0)
                var_d8 = x0_6
                Botan::deallocate_memory(x0_6, (var_d0 - x0_6) s>> 1, 2)
        else
            int64_t x9_18
            int32_t i_5
            
            do
                x9_18 = __ldaxr(&var_c0[1])
                i_5 = __stlxr(x9_18 - 1, &var_c0[1])
            while (i_5 != 0)
            
            if (x9_18 != 0)
                goto label_d99a0c
            
            (*(*var_c0 + 0x10))(var_c0)
            std::__ndk1::__shared_weak_count::__release_weak()
            x0_6 = var_e0
            
            if (x0_6 != 0)
                var_d8 = x0_6
                Botan::deallocate_memory(x0_6, (var_d0 - x0_6) s>> 1, 2)
        
        if (x8_11 != 0)
            int64_t x9_19
            int32_t i_6
            
            do
                x9_19 = __ldaxr(&x8_11[1])
                i_6 = __stlxr(x9_19 - 1, &x8_11[1])
            while (i_6 != 0)
            
            if (x9_19 == 0)
                (*(*x8_11 + 0x10))(x8_11)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        x25_1 += 1
    while (x25_1 != x19_1)

int32_t* x24_3 = *entry_x8
*x24_3 = var_a8

if (x24_3 != &var_a8)
    std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::assign<uint16_t*>(&x24_3[2], 
        result_1)

if (var_80 != 0)
    int32_t i_7
    
    do
        i_7 = __stxr(__ldxr(&var_80[1]) + 1, &var_80[1])
    while (i_7 != 0)

int64_t* x23_1 = *(x24_3 + 0x28)
*(x24_3 + 0x20) = var_88
*(x24_3 + 0x28) = var_80

if (x23_1 != 0)
    int64_t x9_21
    int32_t i_8
    
    do
        x9_21 = __ldaxr(&x23_1[1])
        i_8 = __stlxr(x9_21 - 1, &x23_1[1])
    while (i_8 != 0)
    
    if (x9_21 == 0)
        (*(*x23_1 + 0x10))(x23_1)
        std::__ndk1::__shared_weak_count::__release_weak()

int32_t* x8_28 = *entry_x8
int64_t x11_8 = *(x8_28 + 8)
int64_t x9_23 = *(x8_28 + 0x10) - x11_8
uint32_t x12_2 = (x9_23 u>> 1).d
int64_t x10_14 = (x9_23 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x9_25 = (x12_2 & x12_2 s>> 0x1f) - 1

while (true)
    int64_t x12_3 = x10_14 - 1
    
    if (x10_14 s< 1)
        break
    
    uint32_t x13_1 = zx.d(*(x11_8 - 2 + (x10_14 << 1)))
    x10_14 = x12_3
    
    if (x13_1 != 0)
        x9_25 = x12_3.d
        break

*x8_28 = x9_25

if (x22 u>= 4)
    int64_t x23_2 = 1
    uint64_t x19_2
    
    if (x19_1 u> 2)
        x19_2 = zx.q(x19_1)
    else
        x19_2 = 2
    
    do
        int32_t* x22_1 = *entry_x8
        int32_t* x8_29 = x22_1 + x23_2 * 0x30
        uint16_t* x1_4 = *(x8_29 - 0x28)
        *(x8_29 - 0x20)
        *x8_29 = x8_29[-0xc]
        std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::assign<uint16_t*>(
            &x8_29[2], x1_4)
        void* x9_28 = x22_1 + (x23_2 - 1) * 0x30
        int64_t x9_29 = *(x9_28 + 0x20)
        int64_t x8_31 = *(x9_28 + 0x28)
        
        if (x8_31 != 0)
            int32_t i_9
            
            do
                i_9 = __stxr(__ldxr(x8_31 + 8) + 1, x8_31 + 8)
            while (i_9 != 0)
        
        void* x10_17 = x22_1 + x23_2 * 0x30
        int64_t* x22_2 = *(x10_17 + 0x28)
        *(x10_17 + 0x20) = x9_29
        *(x10_17 + 0x28) = x8_31
        
        if (x22_2 != 0)
            int64_t x9_30
            int32_t i_10
            
            do
                x9_30 = __ldaxr(&x22_2[1])
                i_10 = __stlxr(x9_30 - 1, &x22_2[1])
            while (i_10 != 0)
            
            if (x9_30 == 0)
                (*(*x22_2 + 0x10))(x22_2)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        Botan::polyn_gf2m::poly_shiftmod(*entry_x8 + x23_2 * 0x30)
        int32_t* x8_36 = *entry_x8
        void* x9_31 = x8_36 + x23_2 * 0x30
        int64_t x11_13 = *(x9_31 + 8)
        int64_t x9_32 = *(x9_31 + 0x10) - x11_13
        uint32_t x12_5 = (x9_32 u>> 1).d
        int64_t x10_20 = (x9_32 & 0x1fffffffe) << 0x1f s>> 0x20
        int32_t x9_26 = (x12_5 & x12_5 s>> 0x1f) - 1
        
        while (true)
            int64_t x12_6 = x10_20 - 1
            
            if (x10_20 s< 1)
                break
            
            uint32_t x13_2 = zx.d(*(x11_13 - 2 + (x10_20 << 1)))
            x10_20 = x12_6
            
            if (x13_2 != 0)
                x9_26 = x12_6.d
                break
        
        x23_2 += 1
        x8_36[x23_2 * 0xc] = x9_26
    while (x23_2 != x19_2)

void* result
void* result_2
int64_t var_90

if (var_80 == 0)
label_d99c78:
    result = result_1
    
    if (result != 0)
        result_2 = result
        result = Botan::deallocate_memory(result, (var_90 - result) s>> 1, 2)
else
    int64_t x9_34
    int32_t i_11
    
    do
        x9_34 = __ldaxr(&var_80[1])
        i_11 = __stlxr(x9_34 - 1, &var_80[1])
    while (i_11 != 0)
    
    if (x9_34 != 0)
        goto label_d99c78
    
    (*(*var_80 + 0x10))(var_80)
    std::__ndk1::__shared_weak_count::__release_weak()
    result = result_1
    
    if (result != 0)
        result_2 = result
        result = Botan::deallocate_memory(result, (var_90 - result) s>> 1, 2)
void* x19_3 = var_78

if (x19_3 != 0)
    void* var_70
    void* x21_1 = var_70
    void* x0_18
    
    if (x21_1 != x19_3)
        do
            int64_t* x20_2 = *(x21_1 - 8)
            int64_t x9_35
            
            if (x20_2 != 0)
                int32_t i_12
                
                do
                    x9_35 = __ldaxr(&x20_2[1])
                    i_12 = __stlxr(x9_35 - 1, &x20_2[1])
                while (i_12 != 0)
            
            void* x0_19
            
            if (x20_2 != 0 && x9_35 == 0)
                (*(*x20_2 + 0x10))(x20_2)
                std::__ndk1::__shared_weak_count::__release_weak()
                x0_19 = *(x21_1 - 0x28)
                
                if (x0_19 != 0)
                    goto label_d99ce8
            else
                x0_19 = *(x21_1 - 0x28)
                
                if (x0_19 != 0)
                label_d99ce8:
                    int64_t x8_41 = *(x21_1 - 0x18)
                    *(x21_1 - 0x20) = x0_19
                    Botan::deallocate_memory(x0_19, (x8_41 - x0_19) s>> 1, 2)
            x21_1 -= 0x30
        while (x21_1 != x19_3)
        
        x0_18 = var_78
    else
        x0_18 = x19_3
    
    void* var_70_1 = x19_3
    result = operator delete(x0_18)

if (x11 != 0)
    int64_t x9_45
    int32_t i_13
    
    do
        x9_45 = __ldaxr(&x11[1])
        i_13 = __stlxr(x9_45 - 1, &x11[1])
    while (i_13 != 0)
    
    if (x9_45 == 0)
        (*(*x11 + 0x10))(x11)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
