// 函数: _ZNK5Botan3TLS14Handshake_Hash5finalENS0_16Protocol_VersionERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
// 地址: 0xe6eff4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = arg1
char var_48[0x10]
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_48)
uint32_t x8 = zx.d(arg2.w)

if (x8 - 0x301 u< 2 || x8 == 0xfeff)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
        &var_48)
else
    char* entry_x2
    uint64_t x10_1 = zx.q(*entry_x2)
    uint64_t x8_7 = *(entry_x2 + 8)
    int32_t x9_2 = x10_1.d & 1
    uint64_t x10_2 = x10_1 u>> 1
    uint64_t x11_1
    
    x11_1 = x9_2 == 0 ? x10_2 : x8_7
    
    if (x11_1 != 3)
        goto label_e6f120
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            entry_x2, 0, -ffffffffffffffff, &data_765085) == 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            &var_48)
    else
        uint64_t x10_3 = zx.q(*entry_x2)
        x8_7 = *(entry_x2 + 8)
        x9_2 = x10_3.d & 1
        x10_2 = x10_3 u>> 1
    label_e6f120:
        uint64_t x8_8
        
        if ((x9_2 & 0xff) == 0)
            x8_8 = x10_2
        else
            x8_8 = x8_7
        
        if (x8_8 == 5 && std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                entry_x2, 0, -ffffffffffffffff, "SHA-1") == 0)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                &var_48)

int16_t var_60 = 0
Botan::HashFunction::create_or_throw(&var_48, &var_60)
void* var_50

if ((zx.d(var_60.b) & 1) != 0)
    operator delete(var_50)
int64_t x1_3 = *x20
int64_t* result_1
(*(*result_1 + 0x18))(result_1, x1_3, x20[1] - x1_3)
Botan::Buffered_Computation::final()
int64_t* result = result_1
int64_t var_28 = 0

if (result != 0)
    result = (*(*result + 0x10))()

if ((zx.d(var_48[0]) & 1) == 0)
    return result

void* var_38
return operator delete(var_38)
