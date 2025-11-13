// 函数: _ZN5Botan14XMSS_SignatureC1ENS_15XMSS_Parameters16xmss_algorithm_tERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xed1e68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = arg1
*(arg1 + 0x20) = zx.o(0)
__builtin_memset(arg1 + 0x30, 0, 0x20)
__builtin_memset(arg1, 0, 0x20)
void var_c0
int128_t* result = Botan::XMSS_Parameters::XMSS_Parameters(&var_c0)
int64_t var_70
int64_t x8_2 = var_70
int64_t* entry_x2
char* x10 = *entry_x2
int128_t var_e0
void* i_6
int64_t var_80

if (entry_x2[1] - x10 != 4 + (x8_2 + var_80 + 1) * i_6)
    void** x0_11 = __cxa_allocate_exception(0x20)
    int64_t x0_12
    int128_t v0
    x0_12, v0 = operator new(0x20)
    int64_t var_d0_2 = x0_12
    var_e0 = data_71d400
    __builtin_strncpy(x0_12, "XMSS signature size invalid.", 0x1d)
    *x0_11 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_11[1])
    *x0_11 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_11, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t x10_2 = zx.q(*x10) | (0xffffffffffffff & *x19) << 8
*x19 = x10_2
int64_t x11_5 = zx.q(*(*entry_x2 + 1)) | (0xffffffffffffff & x10_2) << 8
*x19 = x11_5
int64_t x10_5 = zx.q(*(*entry_x2 + 2)) | (0xffffffffffffff & x11_5) << 8
*x19 = x10_5
int64_t x11_8 = zx.q(*(*entry_x2 + 3)) | (0xffffffffffffff & x10_5) << 8
*x19 = x11_8

if (x11_8 u>> var_80 != 0)
    void** x0_15 = __cxa_allocate_exception(0x20)
    int64_t x0_16
    int128_t v0_1
    x0_16, v0_1 = operator new(0x30)
    v0_1 = data_71aa70
    int64_t var_d0_3 = x0_16
    __builtin_strncpy(x0_16, "XMSS signature leaf index out of bounds.", 0x29)
    var_e0 = v0_1
    *x0_15 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_15[1])
    *x0_15 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_15, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

void* x23 = *entry_x2
var_e0.q = arg1 + 8

if (i_6 != 0)
    char* x21_1 = x23 + 4
    void* i_5 = i_6
    void* i
    
    do
        result = &var_e0
        sub_f4a08c(result, x21_1)
        i = i_5
        i_5 -= 1
        x21_1 = &x21_1[1]
    while (i != 1)
    x8_2 = var_70

void* x27 = i_6 + x23 + 4

if (x8_2 != 0)
    int64_t x25_1 = 0
    
    do
        __builtin_memset(&var_e0, 0, 0x18)
        int64_t* x8_4 = x19[5]
        int64_t var_d0
        
        if (x8_4 u>= x19[6])
            std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::__push_back_slow_path<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >(
                arg1 + 0x20)
            result = var_e0.q
            
            if (result != 0)
                var_e0:8.q = result
                result = Botan::deallocate_memory(result, var_d0 - result, 1)
        else
            __builtin_memset(x8_4, 0, 0x18)
            *x8_4 = var_e0.q
            x8_4[1] = var_e0:8.q
            x8_4[2] = var_d0
            x19[5] = &x8_4[3]
        void* fp_1 = x19[5]
        int64_t x24_1 = *(fp_1 - 0x18)
        
        if (*(fp_1 - 8) - x24_1 u< i_6)
            int64_t x20_1 = *(fp_1 - 0x10)
            result = Botan::allocate_memory(i_6, 1)
            void* x22_1 = *(fp_1 - 0x18)
            void* x26_1 = result + x20_1 - x24_1
            int128_t* result_1 = result
            size_t x2 = *(fp_1 - 0x10) - x22_1
            void* x24_2 = x26_1 - x2
            
            if (x2 s>= 1)
                result = memcpy(x24_2, x22_1, x2)
            
            int64_t x8_9 = *(fp_1 - 8)
            *(fp_1 - 0x18) = x24_2
            *(fp_1 - 0x10) = x26_1
            *(fp_1 - 8) = result_1 + i_6
            
            if (x22_1 != 0)
                result = Botan::deallocate_memory(x22_1, x8_9 - x22_1, 1)
        
        var_e0.q = x19[5] - 0x18
        
        if (i_6 != 0)
            void* i_3 = i_6
            void* x21_3 = x27
            void* i_1
            
            do
                result = &var_e0
                sub_f4a08c(result, x21_3)
                i_1 = i_3
                i_3 -= 1
                x21_3 += 1
            while (i_1 != 1)
        
        x25_1 += 1
        x27 += i_6
    while (x25_1 u< var_70)

if (var_80 != 0)
    int64_t x28_2 = 0
    
    do
        __builtin_memset(&var_e0, 0, 0x18)
        int64_t* x8_14 = x19[8]
        int64_t var_d0_1
        
        if (x8_14 u>= x19[9])
            std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::__push_back_slow_path<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >(
                &x19[7])
            result = var_e0.q
            
            if (result != 0)
                var_e0:8.q = result
                result = Botan::deallocate_memory(result, var_d0_1 - result, 1)
        else
            __builtin_memset(x8_14, 0, 0x18)
            *x8_14 = var_e0.q
            x8_14[1] = var_e0:8.q
            x8_14[2] = var_d0_1
            x19[8] = &x8_14[3]
        void* x26_2 = x19[8]
        int64_t x25_2 = *(x26_2 - 0x18)
        
        if (*(x26_2 - 8) - x25_2 u< i_6)
            int64_t x20_2 = *(x26_2 - 0x10)
            result = Botan::allocate_memory(i_6, 1)
            void* x23_1 = *(x26_2 - 0x18)
            void* x20_3 = result + x20_2 - x25_2
            int128_t* result_2 = result
            size_t x2_1 = *(x26_2 - 0x10) - x23_1
            void* x25_3 = x20_3 - x2_1
            
            if (x2_1 s>= 1)
                result = memcpy(x25_3, x23_1, x2_1)
            
            int64_t x8_19 = *(x26_2 - 8)
            *(x26_2 - 0x18) = x25_3
            *(x26_2 - 0x10) = x20_3
            *(x26_2 - 8) = result_2 + i_6
            
            if (x23_1 != 0)
                result = Botan::deallocate_memory(x23_1, x8_19 - x23_1, 1)
        
        var_e0.q = x19[8] - 0x18
        
        if (i_6 != 0)
            void* i_4 = i_6
            void* x22_3 = x27
            void* i_2
            
            do
                result = &var_e0
                sub_f4a08c(result, x22_3)
                i_2 = i_4
                i_4 -= 1
                x22_3 += 1
            while (i_2 != 1)
        
        x28_2 += 1
        x27 += i_6
    while (x28_2 u< var_80)

char var_a0
void* var_90

if ((zx.d(var_a0) & 1) != 0)
    result = operator delete(var_90)
char var_b8

if ((zx.d(var_b8) & 1) == 0)
    return result

void* var_a8
return operator delete(var_a8)
