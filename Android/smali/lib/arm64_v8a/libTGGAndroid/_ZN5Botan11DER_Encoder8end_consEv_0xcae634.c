// 函数: _ZN5Botan11DER_Encoder8end_consEv
// 地址: 0xcae634
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_result
void* x8 = *(entry_result + 0x50)
int128_t var_60

if (*(entry_result + 0x48) == x8)
    void** x0_6 = __cxa_allocate_exception(0x20)
    int64_t x0_7
    int128_t v0
    x0_7, v0 = operator new(0x30)
    v0 = data_71c500
    int64_t var_50_3 = x0_7
    __builtin_strncpy(x0_7, "DER_Encoder::end_cons: No such sequence", 0x28)
    var_60 = v0
    *x0_6 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_6[1])
    *x0_6 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

__builtin_memset(&var_60:8, 0, 0x30)
var_60.d = *(x8 - 0x38)
var_60:4.d = *(x8 - 0x34)
*(x8 - 0x34) = var_60:4.d
var_60:8.q = *(x8 - 0x30)
*(x8 - 0x30) = var_60:8.q
int64_t var_50_1 = *(x8 - 0x28)
int64_t var_50
*(x8 - 0x28) = var_50
int128_t var_48
int64_t x10_3 = var_48.q
var_48.q = *(x8 - 0x20)
*(x8 - 0x20) = x10_3
int64_t x10_4 = var_48:8.q
var_48:8.q = *(x8 - 0x18)
*(x8 - 0x18) = x10_4
int128_t var_38
int64_t x10_5 = var_38.q
var_38.q = *(x8 - 0x10)
*(x8 - 0x10) = x10_5
int64_t x10_6 = var_38:8.q
var_38:8.q = *(x8 - 8)
*(x8 - 8) = x10_6
void* x20 = *(entry_result + 0x50) - 0x38
sub_f230d4(entry_result + 0x58, x20)
*(entry_result + 0x50) = x20
Botan::DER_Encoder::DER_Sequence::push_contents(&var_60)
void* x20_1 = var_48:8.q

if (x20_1 != 0)
    int64_t* x8_2 = var_38.q
    void* x0_3
    
    if (x8_2 == x20_1)
        x0_3 = x20_1
    else
        int64_t* x21_1 = x8_2
        
        do
            x21_1 = &x21_1[-3]
            void* x0_2 = *x21_1
            
            if (x0_2 != 0)
                int64_t x9_9 = x8_2[-1]
                x8_2[-2] = x0_2
                Botan::deallocate_memory(x0_2, x9_9 - x0_2, 1)
            
            x8_2 = x21_1
        while (x20_1 != x21_1)
        
        x0_3 = var_48:8.q
    
    var_38.q = x20_1
    operator delete(x0_3)

void* x0_4 = var_60:8.q

if (x0_4 != 0)
    void* var_50_2 = x0_4
    Botan::deallocate_memory(x0_4, var_48.q - x0_4, 1)

return entry_result
