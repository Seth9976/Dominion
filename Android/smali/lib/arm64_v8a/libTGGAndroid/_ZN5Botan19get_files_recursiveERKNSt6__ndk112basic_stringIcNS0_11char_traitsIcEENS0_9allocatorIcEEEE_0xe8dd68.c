// 函数: _ZN5Botan19get_files_recursiveERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xe8dd68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    var_1c8
__builtin_memset(&var_1c8, 0, 0x18)
int128_t var_c0 = zx.o(0)
int128_t var_e0
__builtin_memset(&var_e0, 0, 0x18)
std::__ndk1::deque<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__add_back_capacity()
int64_t x8_1 = var_e0:8.q
int64_t var_d0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* x0

if (var_d0 == x8_1)
    x0 = nullptr
else
    int64_t x9_2 = var_c0.q + var_c0:8.q
    x0 = *(x8_1 + ((x9_2 u/ 0xaa) << 3)) + x9_2 u% 0xaa * 0x18

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    x0)
int64_t x8_3 = var_c0:8.q
var_c0:8.q = x8_3 + 1
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) var_1c0_1
DIR* dirp_2
int128_t v0

if (x8_3 u< -1)
    char var_f8
    void* name_2 = &var_f8 | 1
    int64_t var_110
    uint64_t x28_1 = &var_110 | 1
    void* __offset(
        vtable_for_std::__ndk1::__function::__func<int32_t (*)(DIR*), std::__ndk1::allocator<int32_t (*)(DIR*)>, int32_t (DIR*)>, 
        0x10) var_a0
    int64_t* var_1d0_1 = &var_a0
    
    while (true)
        *(var_e0:8.q + ((var_c0.q u/ 0xaa) << 3))
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_f8)
        int64_t x8_13 = var_c0.q
        void* x9_7 = *(var_e0:8.q + ((x8_13 u/ 0xaa) << 3))
        int64_t x10_8 = x8_13 u% 0xaa
        
        if ((zx.d(*(x9_7 + x10_8 * 0x18)) & 1) != 0)
            operator delete(*(x9_7 + x10_8 * 0x18 + 0x10))
            x8_13 = var_c0.q
        
        int64_t x9_9 = var_c0:8.q - 1
        var_c0.q = x8_13 + 1
        var_c0:8.q = x9_9
        
        if (x8_13 + 1 u>= 0x154)
            operator delete(*var_e0:8.q)
            var_e0:8.q += 8
            var_c0.q -= 0xaa
        
        void* name_1
        char* name
        
        if ((zx.d(var_f8) & 1) == 0)
            name = name_2
        else
            name = name_1
        
        DIR* dirp
        dirp, v0 = opendir(name)
        DIR* dirp_1 = dirp
        var_a0 = _vtable_for_std::__ndk1::__function::__func<int32_t (*)(DIR*), std::__ndk1::allocator<int32_t (*)(DIR*)>, int32_t (DIR*)>
            + 0x10
        int32_t (* const var_98_1)(DIR* dirp) = closedir
        
        if (dirp != 0)
            while (true)
                struct dirent64* x0_5
                x0_5, v0 = readdir(dirp)
                
                if (x0_5 == 0)
                    int64_t var_b0_2 = 0
                    
                    if (dirp_1 == 0)
                        break
                    
                    dirp_2 = dirp_1
                    
                    if (var_1d0_1 != 0)
                        (*(*var_1d0_1 + 0x30))(var_1d0_1, &dirp_2)
                        break
                else
                    size_t x0_7 = strlen(&x0_5->d_name)
                    
                    if (x0_7 u>= -0x10)
                        std::__ndk1::__basic_string_common<true>::__throw_length_error()
                    else
                        size_t var_108
                        uint64_t var_100
                        uint64_t x25_1
                        
                        if (x0_7 u>= 0x17)
                            uint64_t x26_1 = (x0_7 + 0x10) & 0xfffffffffffffff0
                            uint64_t x0_9 = operator new(x26_1)
                            x25_1 = x0_9
                            var_108 = x0_7
                            var_100 = x0_9
                            var_110 = x26_1 | 1
                            memcpy(x25_1, &x0_5->d_name, x0_7)
                        else
                            x25_1 = x28_1
                            var_110.b = (x0_7.d << 1).b
                            
                            if (x0_7 != 0)
                                memcpy(x25_1, &x0_5->d_name, x0_7)
                        
                        *(x25_1 + x0_7) = 0
                        uint64_t x10_9 = zx.q(var_110.b)
                        int32_t x9_13 = x10_9.d & 1
                        size_t x10_10 = x10_9 u>> 1
                        size_t x11_3
                        
                        x11_3 = x9_13 == 0 ? x10_10 : var_108
                        
                        if (x11_3 != 1)
                            size_t x8_28
                            
                            if ((x9_13 & 0xff) == 0)
                                x8_28 = x10_10
                            else
                                x8_28 = var_108
                            
                            if (x8_28 == 2)
                            label_e8e0cc:
                                
                                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        &var_110, 0, -ffffffffffffffff, 0x7971fb) == 0)
                                    goto label_e8e2b0
                        else if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_110, 0, -ffffffffffffffff, &data_725cf2) == 0)
                        label_e8e2b0:
                            
                            if ((zx.d(var_110.b) & 1) != 0)
                                operator delete(var_100)
                            
                            dirp = dirp_1
                            continue
                            continue
                        else
                            uint64_t x10_11 = zx.q(var_110.b)
                            size_t x8_27
                            
                            if ((zx.d(x10_11.b) & 1) == 0)
                                x8_27 = x10_11 u>> 1
                            else
                                x8_27 = var_108
                            
                            if (x8_27 == 2)
                                goto label_e8e0cc
                        
                        uint64_t x8_29 = zx.q(var_f8)
                        __builtin_memset(&dirp_2, 0, 0x18)
                        int32_t temp2_1 = x8_29.d & 1
                        size_t x23_2
                        size_t var_f0
                        
                        if (temp2_1 == 0)
                            x23_2 = x8_29 u>> 1
                        else
                            x23_2 = var_f0
                        void* name_3
                        
                        name_3 = temp2_1 == 0 ? name_2 : name_1
                        
                        if (x23_2 + 1 u< -0x10)
                            void* var_1a0_1
                            void* x25_2
                            
                            if (x23_2 + 1 u>= 0x17)
                                uint64_t x26_2 = (x23_2 + 0x11) & 0xfffffffffffffff0
                                void* x0_16 = operator new(x26_2)
                                x25_2 = x0_16
                                size_t var_1a8_1 = x23_2
                                var_1a0_1 = x0_16
                                dirp_2 = x26_2 | 1
                                memcpy(x25_2, name_3, x23_2)
                            else
                                x25_2 = &dirp_2 | 1
                                dirp_2.b = (x23_2.d << 1).b
                                
                                if (x23_2 != 0)
                                    memcpy(x25_2, name_3, x23_2)
                            
                            *(x25_2 + x23_2) = 0
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                &dirp_2, &data_72942e)
                            uint64_t x1_4
                            
                            if ((zx.d(var_110.b) & 1) == 0)
                                x1_4 = x28_1
                            else
                                x1_4 = var_100
                            
                            int128_t* x0_20
                            int128_t v0_1
                            x0_20, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                &dirp_2, x1_4)
                            void* x8_35 = x0_20[1].q
                            int128_t var_130 = *x0_20
                            __builtin_memset(x0_20, 0, 0x18)
                            
                            if ((zx.d(dirp_2.b) & 1) != 0)
                                operator delete(var_1a0_1)
                            
                            void* x0_22
                            
                            if ((zx.d(var_130.b) & 1) == 0)
                                x0_22 = &var_130 | 1
                            else
                                x0_22 = x8_35
                            
                            if (stat(x0_22, &dirp_2) != 0xffffffff)
                                int32_t x8_39 = var_1a0_1.d & 0xf000
                                
                                if (x8_39 == 0x8000)
                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                        * x23_3 = var_1c0_1
                                    int64_t var_1b8
                                    
                                    if (x23_3 == var_1b8)
                                        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
                                            &var_1c8)
                                    else
                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                            x23_3)
                                        var_1c0_1 = x23_3 + 0x18
                                else if (x8_39 == 0x4000)
                                    int64_t x8_40 = var_e0:8.q
                                    int64_t x9_18 = var_d0
                                    int64_t x12_5
                                    
                                    if (x9_18 == x8_40)
                                        x12_5 = 0
                                    else
                                        x12_5 = ((x9_18 - x8_40) s>> 3) * 0xaa - 1
                                    
                                    int64_t x10_16 = var_c0:8.q + var_c0.q
                                    
                                    if (x12_5 == x10_16)
                                        std::__ndk1::deque<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__add_back_capacity()
                                        x8_40 = var_e0:8.q
                                        x9_18 = var_d0
                                        x10_16 = var_c0.q + var_c0:8.q
                                    
                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                        * x0_24
                                    
                                    if (x9_18 == x8_40)
                                        x0_24 = nullptr
                                    else
                                        x0_24 = *(x8_40 + ((x10_16 u/ 0xaa) << 3))
                                            + x10_16 u% 0xaa * 0x18
                                    
                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                        x0_24)
                                    var_c0:8.q += 1
                            
                            if ((zx.d(var_130.b) & 1) != 0)
                                operator delete(x8_35)
                            
                            goto label_e8e2b0
                    
                    std::__ndk1::__basic_string_common<true>::__throw_length_error()
                
                sub_a58ab4()
                noreturn
        else
            int64_t var_b0_1 = 0
        
        if (var_1d0_1 == var_1d0_1)
            (*(*var_1d0_1 + 0x20))()
        else if (var_1d0_1 != 0)
            (*(*var_1d0_1 + 0x28))()
        
        if ((zx.d(var_f8) & 1) != 0)
            operator delete(name_1)
        
        if (var_c0:8.q == 0)
            break

int64_t* x19_1 = var_e0:8.q
int64_t x20_1 = var_d0
var_c0:8.q = 0
int64_t i = (x20_1 - x19_1) s>> 3

if (i u>= 3)
    do
        operator delete(*x19_1)
        x20_1 = var_d0
        x19_1 = var_e0:8.q + 8
        i = (x20_1 - x19_1) s>> 3
        var_e0:8.q = x19_1
    while (i u> 2)

if (i == 1)
    var_c0.q = 0x55
else if (i == 2)
    var_c0.q = 0xaa

if (x19_1 != x20_1)
    do
        void* x0_32 = *x19_1
        x19_1 = &x19_1[1]
        operator delete(x0_32)
    while (x20_1 != x19_1)
    
    int64_t x9_22 = var_e0:8.q
    
    if (var_d0 != x9_22)
        var_d0 += (-1 ^ (var_d0 - x9_22 - 8) u>> 3) << 3

void* x0_33 = var_e0.q

if (x0_33 != 0)
    operator delete(x0_33)

void* x20_2 = *entry_x8

if (x20_2 != 0)
    char* x8_58 = entry_x8[1]
    
    if (x8_58 != x20_2)
        char* x19_3 = x8_58
        
        do
            x19_3 = &x19_3[-0x18]
            
            if ((zx.d(*x19_3) & 1) != 0)
                operator delete(*(x8_58 - 8))
            
            x8_58 = x19_3
        while (x20_2 != x19_3)
    
    operator delete(x20_2)
    __builtin_memset(entry_x8, 0, 0x18)

v0 = var_1c0_1.o
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x21_2 = var_1c8
*entry_x8 = x21_2
*(entry_x8 + 8) = v0
int64_t result = std::__ndk1::__sort<std::__ndk1::__less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>(
    x21_2, v0.q, &dirp_2)

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
