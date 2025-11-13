// 函数: sub_bb2e98
// 地址: 0xbb2e98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x24 = arg4
int32_t* x23 = arg3
int32_t* x20 = arg2
int32_t* x21 = arg1
int32_t x19 = std::__ndk1::__sort4<bool (*&)(LeaderboardEntry const&, LeaderboardEntry const&), LeaderboardEntry*>(
    arg1, arg2, arg3, arg4, arg6)

if (((*arg6)(arg5, x24) & 1) != 0)
    int32_t x8_1 = *x24
    void var_70
    XString::XString(&var_70)
    int32_t x8_2 = x24[4]
    *x24 = *arg5
    XString::operator=(&x24[2])
    x24[4] = arg5[4]
    *arg5 = x8_1
    XString::operator=(&arg5[2])
    arg5[4] = x8_2
    XString::~XString()
    
    if (((*arg6)(x24, x23) & 1) == 0)
        x19 += 1
    else
        int32_t x8_8 = *x23
        XString::XString(&var_70)
        int32_t x8_9 = x23[4]
        *x23 = *x24
        XString::operator=(&x23[2])
        x23[4] = x24[4]
        *x24 = x8_8
        XString::operator=(&x24[2])
        x24[4] = x8_9
        XString::~XString()
        
        if (((*arg6)(x23, x20) & 1) == 0)
            x19 += 2
        else
            int32_t x8_15 = *x20
            XString::XString(&var_70)
            int32_t x8_16 = x20[4]
            *x20 = *x23
            XString::operator=(&x20[2])
            x20[4] = x23[4]
            *x23 = x8_15
            XString::operator=(&x23[2])
            x23[4] = x8_16
            XString::~XString()
            
            if (((*arg6)(x20, x21) & 1) == 0)
                x19 += 3
            else
                int32_t x8_22 = *x21
                XString::XString(&var_70)
                int32_t x8_23 = x21[4]
                *x21 = *x20
                XString::operator=(&x21[2])
                x21[4] = x20[4]
                *x20 = x8_22
                XString::operator=(&x20[2])
                x20[4] = x8_23
                XString::~XString()
                x19 += 4

return zx.q(x19)
