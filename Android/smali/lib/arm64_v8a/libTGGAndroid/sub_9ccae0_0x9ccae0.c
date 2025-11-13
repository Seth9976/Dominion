// 函数: sub_9ccae0
// 地址: 0x9ccae0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x24 = arg4
int64_t* x23 = arg3
int64_t* x20 = arg2
int64_t* x21 = arg1
int32_t x19 = std::__ndk1::__sort4<bool (*&)(GameFriend const&, GameFriend const&), GameFriend*>(
    arg1, arg2, arg3, arg4, arg6)

if (((*arg6)(arg5, x24) & 1) != 0)
    int64_t x8_1 = *x24
    void var_78
    XString::XString(&var_78)
    int128_t v0_1 = *(x24 + 0x10)
    *x24 = *arg5
    XString::operator=(&x24[1])
    *(x24 + 0x10) = *(arg5 + 0x10)
    *arg5 = x8_1
    XString::operator=(&arg5[1])
    *(arg5 + 0x10) = v0_1
    XString::~XString()
    
    if (((*arg6)(x24, x23) & 1) == 0)
        x19 += 1
    else
        int64_t x8_5 = *x23
        XString::XString(&var_78)
        int128_t v0_4 = *(x23 + 0x10)
        *x23 = *x24
        XString::operator=(&x23[1])
        *(x23 + 0x10) = *(x24 + 0x10)
        *x24 = x8_5
        XString::operator=(&x24[1])
        *(x24 + 0x10) = v0_4
        XString::~XString()
        
        if (((*arg6)(x23, x20) & 1) == 0)
            x19 += 2
        else
            int64_t x8_9 = *x20
            XString::XString(&var_78)
            int128_t v0_7 = *(x20 + 0x10)
            *x20 = *x23
            XString::operator=(&x20[1])
            *(x20 + 0x10) = *(x23 + 0x10)
            *x23 = x8_9
            XString::operator=(&x23[1])
            *(x23 + 0x10) = v0_7
            XString::~XString()
            
            if (((*arg6)(x20, x21) & 1) == 0)
                x19 += 3
            else
                int64_t x8_13 = *x21
                XString::XString(&var_78)
                int128_t v0_10 = *(x21 + 0x10)
                *x21 = *x20
                XString::operator=(&x21[1])
                *(x21 + 0x10) = *(x20 + 0x10)
                *x20 = x8_13
                XString::operator=(&x20[1])
                *(x20 + 0x10) = v0_10
                XString::~XString()
                x19 += 4

return zx.q(x19)
