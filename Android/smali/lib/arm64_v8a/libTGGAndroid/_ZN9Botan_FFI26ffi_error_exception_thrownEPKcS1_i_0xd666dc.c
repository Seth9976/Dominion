// 函数: _ZN9Botan_FFI26ffi_error_exception_thrownEPKcS1_i
// 地址: 0xd666dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_48
__builtin_memset(&var_48, 0, 0x18)
void* name = operator new(0x20)
__builtin_strncpy(name, "BOTAN_FFI_PRINT_EXCEPTIONS", 0x1b)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
    &var_48)
uint64_t x0_1 = getauxval(0x17)
char* x0_4

if (x0_1 == 0)
    x0_4 = getenv(name)

void* var_38

if (x0_1 != 0 || x0_4 == 0)
    operator delete(name)
    
    if ((zx.d(var_48.b) & 1) != 0)
        operator delete(var_38)
else
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        &var_48)
    uint64_t x8_1 = zx.q(var_48.b)
    uint64_t x8_2
    uint64_t var_40
    
    if ((x8_1.d & 1) == 0)
        x8_2 = x8_1 u>> 1
    else
        x8_2 = var_40
    
    if (x8_2 != 0)
        operator delete(name)
    label_d66804:
        fprintf(*stderr, "in %s exception '%s' returning %d\n", arg1, arg2, zx.q(arg3))
        
        if ((zx.d(var_48.b) & 1) != 0)
            operator delete(var_38)
    else
        int32_t x0_7 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_48, 0, -ffffffffffffffff, &data_793a18)
        operator delete(name)
        
        if (x0_7 != 0)
            goto label_d66804
        
        if ((zx.d(var_48.b) & 1) != 0)
            operator delete(var_38)
return zx.q(arg3)
