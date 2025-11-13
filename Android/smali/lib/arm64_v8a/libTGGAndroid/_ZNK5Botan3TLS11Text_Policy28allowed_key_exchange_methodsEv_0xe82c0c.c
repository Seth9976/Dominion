// 函数: _ZNK5Botan3TLS11Text_Policy28allowed_key_exchange_methodsEv
// 地址: 0xe82c0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_38
__builtin_strncpy(&var_38, "(key_exchange_methods", 0x16)
Botan::TLS::Policy::allowed_key_exchange_methods()
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x0
int64_t result = Botan::TLS::Text_Policy::get_list(entry_x0, &var_38)
void* var_50

if (var_50 != 0)
    char* __saved_x8_3
    char* __saved_x8_2 = __saved_x8_3
    void* x0_2
    
    if (__saved_x8_2 == var_50)
        x0_2 = var_50
    else
        char* __saved_x8_1 = __saved_x8_2
        
        do
            __saved_x8_1 = &__saved_x8_1[-0x18]
            
            if ((zx.d(*__saved_x8_1) & 1) != 0)
                operator delete(*(__saved_x8_2 - 8))
            
            __saved_x8_2 = __saved_x8_1
        while (var_50 != __saved_x8_1)
        
        x0_2 = var_50
    
    void* var_48 = var_50
    result = operator delete(x0_2)

if ((zx.d(var_38) & 1) == 0)
    return result

int128_t var_37
return operator delete(var_37:0xf.q)
