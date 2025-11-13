// 函数: _ZN5Botan8SIV_Mode21set_associated_data_nEmPKhm
// 地址: 0xe259b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = (*(*arg1 + 0xa0))()
int64_t var_60

if (x0 u< arg2)
    void** x0_6 = __cxa_allocate_exception(0x20)
    (*(*arg1 + 0x20))(arg1)
    char var_b8[0x18]
    int128_t* x0_9
    int128_t v0
    x0_9, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_b8)
    int64_t var_90 = x0_9[1].q
    int128_t var_a0 = *x0_9
    __builtin_memset(x0_9, 0, 0x18)
    std::__ndk1::to_string(x0)
    char var_d0
    uint64_t x1_5
    uint64_t var_c0
    
    if ((zx.d(var_d0) & 1) == 0)
        x1_5 = &var_d0 | 1
    else
        x1_5 = var_c0
    int128_t* x0_12
    int128_t v0_1
    x0_12, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_a0, x1_5)
    int64_t var_70 = x0_12[1].q
    int128_t var_80 = *x0_12
    __builtin_memset(x0_12, 0, 0x18)
    int128_t* x0_14
    int128_t v0_2
    x0_14, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_80)
    int64_t var_50_1 = x0_14[1].q
    var_60.o = *x0_14
    __builtin_memset(x0_14, 0, 0x18)
    *x0_6 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_6[1])
    *x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t x8_2 = *(arg1 + 0x60)
int64_t x9 = *(arg1 + 0x68)
int64_t x11 = ((x9 - x8_2) s>> 3) * -0x5555555555555555

if (x11 u<= arg2)
    if (&arg2[1] u> x11)
        std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::__append(
            arg1 + 0x60)
    else if (&arg2[1] u< x11)
        int64_t x23_1 = x8_2 + &arg2[1] * 0x18
        
        if (x9 != x23_1)
            int64_t* i = x9 - 0x18
            
            do
                void* x0_3 = *i
                
                if (x0_3 != 0)
                    int64_t x8_3 = i[2]
                    i[1] = x0_3
                    Botan::deallocate_memory(x0_3, x8_3 - x0_3, 1)
                
                i -= 0x18
            while (x8_2 + arg2 * 0x18 != i)
        
        *(arg1 + 0x68) = x23_1

int64_t* x23_2 = *(arg1 + 0x28)
int64_t entry_x3
(*(*x23_2 + 0x18))(x23_2, arg3, entry_x3)
Botan::Buffered_Computation::final()
int64_t x20_1 = *(arg1 + 0x60)
int64_t* x21_1 = x20_1 + arg2 * 0x18
void* result = *x21_1

if (result != 0)
    void* x8_6 = x20_1 + arg2 * 0x18
    int64_t x9_1 = *(x8_6 + 0x10)
    *(x8_6 + 8) = result
    result = Botan::deallocate_memory(result, x9_1 - result, 1)
    __builtin_memset(x21_1, 0, 0x18)

void* x9_2 = x20_1 + arg2 * 0x18
*x21_1 = var_60
int64_t var_58
*(x9_2 + 8) = var_58
int64_t var_50
*(x9_2 + 0x10) = var_50
return result
