// 函数: _ZN5Botan16mceliece_decryptERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEES5_PKhmRKNS_19McEliece_PrivateKeyE
// 地址: 0xd9c094
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t* var_48
__builtin_memset(&var_48, 0, 0x18)
Botan::mceliece_decrypt(&var_48, arg3, arg4, arg5)
void* x0_1 = *arg1

if (x0_1 != 0)
    int64_t x8_1 = *(arg1 + 0x10)
    *(arg1 + 8) = x0_1
    Botan::deallocate_memory(x0_1, x8_1 - x0_1, 1)
    __builtin_memset(arg1, 0, 0x18)

int128_t var_60
*arg1 = var_60
int64_t var_50
*(arg1 + 0x10) = var_50
int64_t x21_1 = *(arg5 + 0xa0)
__builtin_memset(&var_60, 0, 0x18)
uint64_t x20_1 = (x21_1 + 7) u>> 3
int64_t var_50_1

if (x20_1 != 0)
    int64_t x0_3 = Botan::allocate_memory(x20_1, 1)
    int64_t x22_1 = x0_3 + x20_1
    var_60.q = x0_3
    var_50_1 = x22_1
    memset(x0_3, 0, x20_1)
    var_60:8.q = x22_1

int16_t* x20_2 = var_48
int64_t var_40

if (x20_2 != var_40)
    int16_t* x10_1 = x20_2
    
    do
        uint64_t x11_1 = zx.q(*x10_1)
        
        if (x21_1 u< x11_1)
            void** x0_6 = __cxa_allocate_exception(0x20)
            int64_t x0_7
            int128_t v0_1
            x0_7, v0_1 = operator new(0x30)
            v0_1 = data_71b7f0
            int64_t var_70 = x0_7
            __builtin_strncpy(x0_7, "error position larger than code size", 0x25)
            int128_t var_80 = v0_1
            *x0_6 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_6[1])
            *x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
        
        int64_t x12_1 = var_60.q
        uint64_t x13_1 = x11_1 u>> 3
        x10_1 = &x10_1[1]
        *(x12_1 + x13_1) |= (1 << (x11_1.d & 7)).b
    while (var_40 != x10_1)

if (&var_60 != arg2)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(arg2, 
        var_60.q)

void* result = var_60.q

if (result != 0)
    var_60:8.q = result
    result = Botan::deallocate_memory(result, var_50_1 - result, 1)

if (x20_2 == 0)
    return result

int64_t var_38
return Botan::deallocate_memory(x20_2, (var_38 - x20_2) s>> 1, 2)
