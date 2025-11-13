// 函数: _Z16CheckAchievementR7DomGame9PlayerWho11DomCardEnumR24DomAchievementPlayerData18TriggerAchievementPK6CardIDi
// 地址: 0xbd9c0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 == 0)
    return 

DomGame& x25_1 = arg1

if (*(arg1 + 0xd48) != 0)
    return 

int32_t x26_1 = *(x25_1 + 0xd50)
int32_t x8_6 = (arg3 + (x26_1 << 0x10)) s% 0x3e5
int32_t* x9_1 = *(&data_1838a20 + (sx.q(x8_6) << 3))
int32_t x23_1 = arg3
int32_t x24_1 = arg2
DomGame& x26_2

if (x9_1 != 0)
    while (*x9_1 != x23_1 || x9_1[1] != x26_1)
        x9_1 = *(x9_1 + 0x10)
        
        if (x9_1 == 0)
            goto label_bd9cb8
    
    x26_2 = *(x9_1 + 8)
else
label_bd9cb8:
    DomDefGetSlow(zx.q(x23_1), zx.q(x26_1))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_7 = sx.q(x8_6) << 3
    int64_t x9_2 = *(&data_1838a20 + x8_7)
    *x0_1 = x23_1
    x0_1[1] = x26_1
    *(&data_1838a20 + x8_7) = x0_1
    *(x0_1 + 0x10) = x9_2
    arg1 = DomDefGetSlow(zx.q(x23_1), zx.q(x26_1))
    x26_2 = arg1
    *(x0_1 + 8) = arg1

int64_t i = 0
int32_t var_7c_1 = x23_1

do
    void* x20_2 = x26_2 + i
    int32_t x8_8 = *(x20_2 + 0xe0)
    
    if (x8_8 - 0x12 u>= 2)
        if (x8_8 == 0)
            break
    else if (*(x20_2 + 0xec) == arg5)
        int32_t x28_1 = *(__emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000)
        int64_t x19_1
        
        if (x28_1 s< 1)
            x19_1 = 0
        else
            x19_1 = *(__emutls_get_address(__emutls_v.gContextStack_tl) + muls.dp.d(x28_1 - 1, 0x98)
                + 0x68)
            
            if (x28_1 s>= 0x200)
                void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_12 = x0_8 + sx.q(x28_1 - 1) * 0x98
                *(*(x8_12 + 8) + 0x1a28) = 0xffffffff
                void* x8_13 = *(x8_12 + 8)
                *(x8_13 + 0x1a2c) = *(x8_13 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
                x28_1 = *(x0_8 + 0x13000)
            
            x23_1 = var_7c_1
        
        void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
        int32_t* x8_15 = x0_10 + muls.dp.d(x28_1, 0x98)
        *(x0_10 + 0x13000) = x28_1 + 1
        *x8_15 = 5
        x8_15[6] = x24_1
        x8_15[7] = x23_1
        *(x8_15 + 0x28) = arg4
        void* x9_8
        
        if (x28_1 == 0)
            x9_8 = nullptr
        else
            x9_8 = x8_15 - 0x98
        
        *(x8_15 + 8) = x25_1
        *(x8_15 + 0x10) = x9_8
        *(x8_15 + 0x68) = x19_1
        int32_t x0_11
        
        if (*(x20_2 + 0xe0) != 0x13)
            x0_11 = (*(x26_2 + i + 0xf8))(arg6, zx.q(arg7))
        else
            x0_11 = (*(x26_2 + i + 0xf8))()
        
        void* __offset(DomGame, 0x13000) x8_21 =
            __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
        *x8_21 -= 1
        
        if ((x0_11 & 1) != 0)
            DomAchievementGrant(x25_1, zx.q(x24_1), zx.q(x23_1))
    
    i += 0xc0
while (i != 0x600)
