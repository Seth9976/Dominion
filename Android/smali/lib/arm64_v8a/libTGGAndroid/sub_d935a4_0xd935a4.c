// 函数: sub_d935a4
// 地址: 0xd935a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t var_40 = 0
Botan::MessageAuthenticationCode::create(arg2, &var_40)
void* var_30

if ((zx.d(var_40.b) & 1) != 0)
    operator delete(var_30)
int64_t var_60
int64_t x21 = var_60

if (x21 != 0)
    void** x0_2 = operator new(0x10)
    *arg1 = x0_2
    *x0_2 = _vtable_for_Botan::SP800_108_Feedback + 0x10
    x0_2[1] = x21
    return x0_2

std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "HMAC(", arg2)
int128_t* x0_4
int128_t v0
x0_4, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60)
void* x8_2 = x0_4[1].q
var_40.o = *x0_4
__builtin_memset(x0_4, 0, 0x18)
int16_t var_78 = 0
int64_t x0_6 = Botan::MessageAuthenticationCode::create(&var_40, &var_78)

if ((zx.d(var_78.b) & 1) != 0)
    void* var_68
    x0_6 = operator delete(var_68)
    
    if ((zx.d(var_40.b) & 1) != 0)
    label_d936c0:
        x0_6 = operator delete(x8_2)
        
        if ((zx.d(var_60.b) & 1) == 0)
            goto label_d93678
        
        goto label_d936d0
else if ((zx.d(var_40.b) & 1) != 0)
    goto label_d936c0

int64_t x20_1
int64_t var_48

if ((zx.d(var_60.b) & 1) != 0)
label_d936d0:
    void* var_50
    x0_6 = operator delete(var_50)
    x20_1 = var_48
    
    if (x20_1 == 0)
        *arg1 = 0
        return x0_6
else
label_d93678:
    x20_1 = var_48
    
    if (x20_1 == 0)
        *arg1 = 0
        return x0_6
void** x0_7 = operator new(0x10)
*arg1 = x0_7
*x0_7 = _vtable_for_Botan::SP800_108_Feedback + 0x10
x0_7[1] = x20_1
return x0_7
