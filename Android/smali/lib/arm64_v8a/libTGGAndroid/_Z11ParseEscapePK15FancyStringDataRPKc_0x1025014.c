// 函数: _Z11ParseEscapePK15FancyStringDataRPKc
// 地址: 0x1025014
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x20 = *arg2
void* x0_1 = stristr(x20, "}")

if (x0_1 != 0)
    int32_t x23_1 = x0_1.d - (&x20[1]).d
    *arg2 = x0_1 + 1
    int64_t i_1 = 0x3e8
    FancyStringData const* x25_1 = arg1
    int64_t i
    
    do
        char* s1 = *x25_1
        
        if (s1 == 0)
            return arg1
        
        if (strncasecmp(s1, &x20[1], sx.q(x23_1)) == 0 && strlen(s1) == x23_1)
            return x25_1
        
        i = i_1
        i_1 -= 1
        x25_1 += 0x98
    while (i != 1)

pthread_kill(pthread_self(), 6)
return TrimWhitespace(XNoReturn()) __tailcall
