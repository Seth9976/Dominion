// 函数: _ZN5Botan10L_computerC2ERKNS_11BlockCipherE
// 地址: 0xddc404
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
*arg1 = (*(*entry_x1 + 0x30))(entry_x1)
int64_t x0_3 = (*(*entry_x1 + 0x38))(entry_x1)
int64_t x0_5 = (*(*entry_x1 + 0x30))(entry_x1)
int64_t x1 = *arg1
*(arg1 + 8) = ((x0_3 * x0_5) << 2) u/ x1
*(arg1 + 0x10) = zx.o(0)
*(arg1 + 0x70) = zx.o(0)
__builtin_memset(arg1 + 0x20, 0, 0x50)
*(arg1 + 0x80) = 0
int64_t x25
int64_t x26

if (x1 == 0)
    x26 = 0
    x25 = 0
else
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x28)
    x25 = *(arg1 + 0x28)
    x26 = *(arg1 + 0x30)

(*(*entry_x1 + 0x48))(entry_x1, x25, x25, (x26 - x25) u/ (*(*entry_x1 + 0x30))(entry_x1))
Botan::L_computer::poly_double(arg1)
void* x0_11 = *(arg1 + 0x10)

if (x0_11 != 0)
    int64_t x8_13 = *(arg1 + 0x20)
    *(arg1 + 0x18) = x0_11
    Botan::deallocate_memory(x0_11, x8_13 - x0_11, 1)
    __builtin_memset(arg1 + 0x10, 0, 0x18)

int128_t var_70
*(arg1 + 0x10) = var_70
int64_t var_60
*(arg1 + 0x20) = var_60
void* result = Botan::L_computer::poly_double(arg1)
int64_t* x8_15 = *(arg1 + 0x60)

if (x8_15 u>= *(arg1 + 0x68))
    std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::__push_back_slow_path<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >(
        arg1 + 0x58)
    result = var_70.q
    
    if (result != 0)
        var_70:8.q = result
        result = Botan::deallocate_memory(result, var_60 - result, 1)
else
    __builtin_memset(x8_15, 0, 0x18)
    *x8_15 = var_70.q
    x8_15[1] = var_70:8.q
    x8_15[2] = var_60
    *(arg1 + 0x60) = &x8_15[3]

if (((*(arg1 + 0x60) - *(arg1 + 0x58)) s>> 3) * -0x5555555555555555 u<= 7)
    do
        result = Botan::L_computer::poly_double(arg1)
        int64_t* x8_19 = *(arg1 + 0x60)
        
        if (x8_19 u< *(arg1 + 0x68))
            __builtin_memset(x8_19, 0, 0x18)
            *x8_19 = var_70.q
            x8_19[1] = var_70:8.q
            x8_19[2] = var_60
            *(arg1 + 0x60) = &x8_19[3]
        else
            std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::__push_back_slow_path<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >(
                arg1 + 0x58)
            result = var_70.q
            
            if (result != 0)
                var_70:8.q = result
                result = Botan::deallocate_memory(result, var_60 - result, 1)
    while (((*(arg1 + 0x60) - *(arg1 + 0x58)) s>> 3) * -0x5555555555555555 u< 8)

int64_t x8_17 = *(arg1 + 0x70)
int64_t x9_10 = *(arg1 + 8) * *arg1
int64_t x10_3 = *(arg1 + 0x78) - x8_17

if (x9_10 u> x10_3)
    return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x70)

if (x9_10 u< x10_3)
    *(arg1 + 0x78) = x8_17 + x9_10

return result
