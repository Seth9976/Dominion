// 函数: _ZN5Botan3TLS16Compat_Callbacks30tls_server_choose_app_protocolERKNSt6__ndk16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEE
// 地址: 0xf1b410
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x120) == 0)
    int16_t* entry_x8
    *entry_x8 = 0
    return 

void* var_38
std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
    &var_38)
int64_t* x0_1 = *(arg1 + 0x120)

if (x0_1 == 0)
    sub_a58ab4()
    noreturn

(*(*x0_1 + 0x30))(x0_1, &var_38)
void* x19_1 = var_38

if (x19_1 == 0)
    return 

char* var_30
char* x8_2 = var_30
void* x0_3

if (x8_2 == x19_1)
    x0_3 = x19_1
else
    char* x20_2 = x8_2
    
    do
        x20_2 = &x20_2[-0x18]
        
        if ((zx.d(*x20_2) & 1) != 0)
            operator delete(*(x8_2 - 8))
        
        x8_2 = x20_2
    while (x19_1 != x20_2)
    
    x0_3 = var_38

void* var_30_1 = x19_1
operator delete(x0_3)
