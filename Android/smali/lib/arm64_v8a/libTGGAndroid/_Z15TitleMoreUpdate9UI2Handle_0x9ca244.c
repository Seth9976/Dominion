// 函数: _Z15TitleMoreUpdate9UI2Handle
// 地址: 0x9ca244
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, TitleMoreButtons)
UI2SetState(zx.q(x19), GameAvatarGet(zx.q(*(GetActiveProfile() + 0x10))), 0xffffffff, 0)
UI2SetState(zx.q(x19), &data_11cff50, 0xffffffff, 0)
int32_t var_c0[0x28]
int64_t x0_6 = GetOwnedExpansions(&var_c0)

if (x0_6.d s< 1)
label_9ca2d0:
    
    if (x0_6.d == 0)
        UI2SetState(zx.q(x19), &data_11cea98, 0xffffffff, 0)
else
    uint64_t i_1 = zx.q(x0_6.d)
    int32_t (* x8_1)[0x28] = &var_c0
    uint64_t i
    
    do
        if (*x8_1 == 0x13)
            x0_6 = sx.q(x0_6.d) - 1
            *x8_1 = var_c0[x0_6]
            
            if (x0_6.d s< 1)
                goto label_9ca2d0
            
            goto label_9ca30c
        
        i = i_1
        i_1 -= 1
        x8_1 = &(*x8_1)[1]
    while (i != 1)
    
    if (x0_6.d s< 1)
        goto label_9ca2d0
    
label_9ca30c:
    uint64_t x9_3 = zx.q(x0_6.d)
    int32_t (* x8_2)[0x28] = &var_c0
    
    while (*x8_2 != 2)
        uint64_t temp1_1 = x9_3
        x9_3 -= 1
        x8_2 = &(*x8_2)[1]
        
        if (temp1_1 == 1)
            goto label_9ca350
    
    *x8_2 = var_c0[sx.q(x0_6.d) - 1]
    
    if (x0_6.d == 1)
        UI2SetState(zx.q(x19), &data_11cea98, 0xffffffff, 0)

label_9ca350:
int32_t x8_3 = *(GetActiveProfile() + 0x4324)
int64_t* x1_2

if (x8_3 == 0)
    if (*(GetClient() + 0x1c) != 6)
        if (*(GetClient() + 0x1c) == 8)
            x1_2 = &data_11ce948
        else
            x1_2 = &data_11ce930
    else
        x1_2 = &data_11ce948
else if (x8_3 == 1)
    UI2SetState(zx.q(x19), &data_11ce930, 0xffffffff, 0)
    UI2SetState(zx.q(x19), &data_11ce8e8, 0xffffffff, 0)
    x1_2 = &data_11ce918
else
    if (x8_3 != 2)
        pthread_kill(pthread_self(), 6)
        return GetLocalGameVersion(XNoReturn()) __tailcall
    
    UI2SetState(zx.q(x19), &data_11ce930, 0xffffffff, 0)
    UI2SetState(zx.q(x19), &data_11ce8e8, 0xffffffff, 0)
    x1_2 = &data_11ce900

return UI2SetState(zx.q(x19), x1_2, 0xffffffff, 0)
