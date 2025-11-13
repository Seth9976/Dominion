// 函数: _ZN5Botan8EAX_Mode19set_associated_dataEPKhm
// 地址: 0xd20260
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_50

if (*(arg1 + 0x40) != *(arg1 + 0x48))
    void** x0_6 = __cxa_allocate_exception(0x20)
    int64_t x0_7
    int128_t v0_1
    x0_7, v0_1 = operator new(0x40)
    (*"essing a message")[0].o
    int64_t var_40_1 = x0_7
    v0_1 = data_71b3f0
    __builtin_strncpy(x0_7, "Cannot set AD for EAX while processing a message", 0x31)
    var_50 = v0_1
    *x0_6 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_6[1])
    *x0_6 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

int64_t x0_1 = (*(**(arg1 + 0x10) + 0x30))()
int64_t* x22 = *(arg1 + 0x20)
int64_t i_1 = x0_1 - 1

if (x0_1 != 1)
    int64_t i
    
    do
        var_50.b = 0
        (*(*x22 + 0x18))(x22, &var_50, 1)
        i = i_1
        i_1 -= 1
    while (i != 1)

var_50.b = 1
(*(*x22 + 0x18))(x22, &var_50, 1)
int64_t entry_x2
(*(*x22 + 0x18))(x22, arg2, entry_x2)
Botan::Buffered_Computation::final()
void* result = *(arg1 + 0x28)

if (result != 0)
    int64_t x8_9 = *(arg1 + 0x38)
    *(arg1 + 0x30) = result
    int128_t v0
    result, v0 = Botan::deallocate_memory(result, x8_9 - result, 1)
    __builtin_memset(&arg1[0x28], 0, 0x18)

*(arg1 + 0x28) = var_50
int64_t var_40
*(arg1 + 0x38) = var_40
return result
