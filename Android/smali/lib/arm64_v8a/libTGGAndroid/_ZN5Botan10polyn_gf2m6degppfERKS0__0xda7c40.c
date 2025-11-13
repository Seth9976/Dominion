// 函数: _ZN5Botan10polyn_gf2m6degppfERKS0_
// 地址: 0xda7c40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::polyn_gf2m* entry_x1
int64_t x21 = *(entry_x1 + 0x20)
int64_t* x20 = *(entry_x1 + 0x28)

if (x20 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x20[1]) + 1, &x20[1])
    while (i != 0)

int32_t var_90 = 0xffffffff
int16_t* var_88
__builtin_memset(&var_88, 0, 0x18)
int16_t* x0 = Botan::allocate_memory(1, 2)
*x0 = 0
var_88 = x0
void* var_78 = &x0[1]
int64_t var_70 = x21
int64_t* var_68 = x20

if (x20 != 0)
    int32_t i_1
    
    do
        i_1 = __stxr(__ldxr(&x20[1]) + 1, &x20[1])
    while (i_1 != 0)
    int64_t x9_5
    int32_t i_2
    
    do
        x9_5 = __ldaxr(&x20[1])
        i_2 = __stlxr(x9_5 - 1, &x20[1])
    while (i_2 != 0)
    
    if (x9_5 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t x10_4 = *(entry_x1 + 8)
int64_t x28 = **(entry_x1 + 0x20)
int64_t x8_7 = *(entry_x1 + 0x10) - x10_4
uint32_t x9_7 = (x8_7 u>> 1).d
int64_t x8_8 = (x8_7 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t result_1 = (x9_7 & x9_7 s>> 0x1f) - 1

while (true)
    int64_t x10_5 = x8_8 - 1
    
    if (x8_8 s< 1)
        break
    
    uint32_t x11_2 = zx.d(*(x10_4 - 2 + (x8_8 << 1)))
    x8_8 = x10_5
    
    if (x11_2 != 0)
        result_1 = x10_5.d
        break

*entry_x1 = result_1
Botan::polyn_gf2m::sqmod_init(entry_x1)
int64_t* x20_1 = *(entry_x1 + 0x28)
int64_t var_e8 = *(entry_x1 + 0x20)
int64_t* var_e0 = x20_1

if (x20_1 != 0)
    int32_t i_3
    
    do
        i_3 = __stxr(__ldxr(&x20_1[1]) + 1, &x20_1[1])
    while (i_3 != 0)

int32_t var_d8
Botan::polyn_gf2m::polyn_gf2m(&var_d8, zx.q(result_1 - 1))

if (x20_1 != 0)
    int64_t x9_12
    int32_t i_4
    
    do
        x9_12 = __ldaxr(&x20_1[1])
        i_4 = __stlxr(x9_12 - 1, &x20_1[1])
    while (i_4 != 0)
    
    if (x9_12 == 0)
        (*(*x20_1 + 0x10))(x20_1)
        std::__ndk1::__shared_weak_count::__release_weak()

uint16_t* var_d0
uint16_t* x9_13 = var_d0
uint64_t result_2

if (result_1 s< 0)
    result_2 = zx.q(result_1 + 1)
else
    result_2 = zx.q(result_1)

int64_t fp = x28 * ((result_2 & 0xfffffffe) << 0x20 s>> 0x21)
int64_t result = sx.q(result_1)
var_d8 = 1
x9_13[1] = 1
int64_t* var_b0
void* var_a8

if (fp != 0)
    int64_t x27_1 = 1
    int32_t x21_1
    
    do
        Botan::polyn_gf2m::sqmod(&var_d8, &var_a8)
        int32_t var_118
        uint16_t* var_110
        int64_t* var_f0
        int64_t* x25_3
        
        if (x27_1 u% x28 != 0)
        label_da7e10:
            var_90 = var_d8
            std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::assign<uint16_t*>(
                &var_88, var_d0)
            
            if (var_b0 != 0)
                int32_t i_5
                
                do
                    i_5 = __stxr(__ldxr(&var_b0[1]) + 1, &var_b0[1])
                while (i_5 != 0)
            
            int64_t* x25_1 = var_68
            int64_t var_b8
            var_70 = var_b8
            var_68 = var_b0
            
            if (x25_1 != 0)
                int64_t x9_15
                int32_t i_6
                
                do
                    x9_15 = __ldaxr(&x25_1[1])
                    i_6 = __stlxr(x9_15 - 1, &x25_1[1])
                while (i_6 != 0)
                
                if (x9_15 == 0)
                    (*(*x25_1 + 0x10))(x25_1)
                    std::__ndk1::__shared_weak_count::__release_weak()
            
            uint16_t* x1_3 = var_110
            var_d8 = var_118
            std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::assign<uint16_t*>(
                &var_d0, x1_3)
            
            if (var_f0 != 0)
                int32_t i_7
                
                do
                    i_7 = __stxr(__ldxr(&var_f0[1]) + 1, &var_f0[1])
                while (i_7 != 0)
            
            int64_t* x25_2 = var_b0
            int64_t var_f8
            var_b8 = var_f8
            var_b0 = var_f0
            
            if (x25_2 != 0)
                int64_t x9_17
                int32_t i_8
                
                do
                    x9_17 = __ldaxr(&x25_2[1])
                    i_8 = __stlxr(x9_17 - 1, &x25_2[1])
                while (i_8 != 0)
                
                if (x9_17 == 0)
                    (*(*x25_2 + 0x10))(x25_2)
                    std::__ndk1::__shared_weak_count::__release_weak()
            
            int16_t* x1_4 = var_88
            var_118 = var_90
            std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::assign<uint16_t*>(
                &var_110, x1_4)
            x25_3 = var_68
            
            if (x25_3 != 0)
                int32_t i_9
                
                do
                    i_9 = __stxr(__ldxr(&x25_3[1]) + 1, &x25_3[1])
                while (i_9 != 0)
            
            int64_t* x26_2 = var_f0
            var_f8 = var_70
            var_f0 = x25_3
            
            if (x26_2 == 0)
                x21_1 = 1
                
                if (x25_3 == 0)
                    goto label_da80ac
                
                goto label_da80a4
            
            int64_t x9_19
            int32_t i_10
            
            do
                x9_19 = __ldaxr(&x26_2[1])
                i_10 = __stlxr(x9_19 - 1, &x26_2[1])
            while (i_10 != 0)
            
            if (x9_19 == 0)
                (*(*x26_2 + 0x10))(x26_2)
                std::__ndk1::__shared_weak_count::__release_weak()
            
            x21_1 = 1
            x25_3 = var_f0
            
            if (x25_3 != 0)
                goto label_da80a4
            
            goto label_da80ac
        
        uint16_t* x8_30 = var_110
        x8_30[1] ^= 1
        uint16_t* x10_16 = var_110
        uint16_t* var_108
        void* x8_32 = var_108 - x10_16
        uint32_t x11_12 = (x8_32 u>> 1).d
        int64_t x9_22 = (x8_32 & 0x1fffffffe) << 0x1f s>> 0x20
        int32_t x8_34 = (x11_12 & x11_12 s>> 0x1f) - 1
        
        while (true)
            int64_t x11_13 = x9_22 - 1
            
            if (x9_22 s< 1)
                break
            
            uint32_t x12_3 = zx.d(*(x10_16 - 2 + (x9_22 << 1)))
            x9_22 = x11_13
            
            if (x12_3 != 0)
                x8_34 = x11_13.d
                break
        
        var_118 = x8_34
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        v0_1, v1_1, v2_1 = Botan::polyn_gf2m::gcd(entry_x1, &var_118)
        int128_t var_130
        v0_1 = var_130
        int32_t var_148
        int32_t var_90_1 = var_148
        int64_t* x25_4 = var_68
        int64_t* var_120
        var_68 = var_120
        int128_t var_140
        var_88.o = var_140
        var_148 = var_90
        void* x9_24 = var_78
        var_130:8.q = var_70
        var_120 = x25_4
        var_78.o = v0_1
        var_140 = var_88.o
        var_130.q = x9_24
        int64_t x9_25
        
        if (x25_4 != 0)
            int32_t i_11
            
            do
                x9_25 = __ldaxr(&x25_4[1])
                i_11 = __stlxr(x9_25 - 1, &x25_4[1])
            while (i_11 != 0)
        
        void* x0_18
        
        if (x25_4 != 0 && x9_25 == 0)
            (*(*x25_4 + 0x10))(x25_4)
            std::__ndk1::__shared_weak_count::__release_weak()
            x0_18 = var_140.q
            
            if (x0_18 != 0)
                var_140:8.q = x0_18
                Botan::deallocate_memory(x0_18, (var_130.q - x0_18) s>> 1, 2)
        else
            x0_18 = var_140.q
            
            if (x0_18 != 0)
                var_140:8.q = x0_18
                Botan::deallocate_memory(x0_18, (var_130.q - x0_18) s>> 1, 2)
        int16_t* x10_20 = var_88
        void* x8_41 = &x0[1] - x10_20
        uint32_t x11_15 = (x8_41 u>> 1).d
        int64_t x9_26 = (x8_41 & 0x1fffffffe) << 0x1f s>> 0x20
        int32_t x8_43 = (x11_15 & x11_15 s>> 0x1f) - 1
        
        while (true)
            int64_t x11_16 = x9_26 - 1
            
            if (x9_26 s< 1)
                break
            
            uint32_t x12_4 = zx.d(*(x10_20 - 2 + (x9_26 << 1)))
            x9_26 = x11_16
            
            if (x12_4 != 0)
                x8_43 = x11_16.d
                break
        
        var_90 = x8_43
        
        if (x8_43 s<= 0)
            uint16_t* x8_50 = var_110
            x8_50[1] ^= 1
            uint16_t* x10_23 = var_110
            void* x8_52 = var_108 - x10_23
            uint32_t x11_18 = (x8_52 u>> 1).d
            int64_t x9_30 = (x8_52 & 0x1fffffffe) << 0x1f s>> 0x20
            int32_t x8_54 = (x11_18 & x11_18 s>> 0x1f) - 1
            
            while (true)
                int64_t x11_19 = x9_30 - 1
                
                if (x9_30 s< 1)
                    break
                
                uint32_t x12_5 = zx.d(*(x10_23 - 2 + (x9_30 << 1)))
                x9_30 = x11_19
                
                if (x12_5 != 0)
                    x8_54 = x11_19.d
                    break
            
            var_118 = x8_54
            goto label_da7e10
        
        x21_1 = 0
        x25_3 = var_f0
        result = x27_1 u/ x28
        int64_t var_100
        uint16_t* x0_19
        
        if (x25_3 != 0)
        label_da80a4:
            int64_t x9_27
            int32_t i_12
            
            do
                x9_27 = __ldaxr(&x25_3[1])
                i_12 = __stlxr(x9_27 - 1, &x25_3[1])
            while (i_12 != 0)
            
            if (x9_27 != 0)
                goto label_da80ac
            
            (*(*x25_3 + 0x10))(x25_3)
            std::__ndk1::__shared_weak_count::__release_weak()
            x0_19 = var_110
            
            if (x0_19 != 0)
                var_108 = x0_19
                Botan::deallocate_memory(x0_19, (var_100 - x0_19) s>> 1, 2)
        else
        label_da80ac:
            x0_19 = var_110
            
            if (x0_19 != 0)
                var_108 = x0_19
                Botan::deallocate_memory(x0_19, (var_100 - x0_19) s>> 1, 2)
        x27_1 += 1
        
        if (x27_1 u> fp)
            break
    while (((x21_1 ^ 1) & 1) == 0)

uint16_t* var_c8_1
int64_t var_c0
uint16_t* x0_24

if (var_b0 == 0)
label_da8198:
    x0_24 = var_d0
    
    if (x0_24 != 0)
        var_c8_1 = x0_24
        Botan::deallocate_memory(x0_24, (var_c0 - x0_24) s>> 1, 2)
else
    int64_t x9_31
    int32_t i_13
    
    do
        x9_31 = __ldaxr(&var_b0[1])
        i_13 = __stlxr(x9_31 - 1, &var_b0[1])
    while (i_13 != 0)
    
    if (x9_31 != 0)
        goto label_da8198
    
    (*(*var_b0 + 0x10))(var_b0)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_24 = var_d0
    
    if (x0_24 != 0)
        var_c8_1 = x0_24
        Botan::deallocate_memory(x0_24, (var_c0 - x0_24) s>> 1, 2)
void* x21_2 = var_a8

if (x21_2 != 0)
    void* var_a0
    void* x22 = var_a0
    void* x0_25
    
    if (x22 != x21_2)
        do
            int64_t* x19_2 = *(x22 - 8)
            int64_t x9_32
            
            if (x19_2 != 0)
                int32_t i_14
                
                do
                    x9_32 = __ldaxr(&x19_2[1])
                    i_14 = __stlxr(x9_32 - 1, &x19_2[1])
                while (i_14 != 0)
            
            void* x0_26
            
            if (x19_2 != 0 && x9_32 == 0)
                (*(*x19_2 + 0x10))(x19_2)
                std::__ndk1::__shared_weak_count::__release_weak()
                x0_26 = *(x22 - 0x28)
                
                if (x0_26 != 0)
                    goto label_da8208
            else
                x0_26 = *(x22 - 0x28)
                
                if (x0_26 != 0)
                label_da8208:
                    int64_t x8_61 = *(x22 - 0x18)
                    *(x22 - 0x20) = x0_26
                    Botan::deallocate_memory(x0_26, (x8_61 - x0_26) s>> 1, 2)
            x22 -= 0x30
        while (x22 != x21_2)
        
        x0_25 = var_a8
    else
        x0_25 = x21_2
    
    void* var_a0_1 = x21_2
    operator delete(x0_25)

int16_t* var_80_1
int16_t* x0_29

if (var_68 == 0)
label_da8274:
    x0_29 = var_88
    
    if (x0_29 != 0)
        var_80_1 = x0_29
        Botan::deallocate_memory(x0_29, (var_78 - x0_29) s>> 1, 2)
else
    int64_t x9_33
    int32_t i_15
    
    do
        x9_33 = __ldaxr(&var_68[1])
        i_15 = __stlxr(x9_33 - 1, &var_68[1])
    while (i_15 != 0)
    
    if (x9_33 != 0)
        goto label_da8274
    
    (*(*var_68 + 0x10))(var_68)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_29 = var_88
    
    if (x0_29 != 0)
        var_80_1 = x0_29
        Botan::deallocate_memory(x0_29, (var_78 - x0_29) s>> 1, 2)
return result
