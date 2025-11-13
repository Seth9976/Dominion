// 函数: _Z9TrashCardR7DomGame9PlayerWho6CardID8DomWhere13CardMoveStyle7LogFlag
// 地址: 0xbfc884
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_44 = arg3
int32_t x23_2

if (arg3 == 0)
    x23_2 = 0
else
    int32_t x25_1 = arg3 & 0xffff
    int32_t x23_1 = arg4
    
    if (x25_1 u>= 0x320)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    int32_t x8_6 = *(arg1 + mulu.dp.d(x25_1, 0x68) + 0x1a74)
    
    if (x8_6 == 0x3eb
            && *(arg1 + sx.q(*(arg1 + zx.q(x25_1) * 0x68 + 0x1a94)) * 0x5a30 + 0x17f74) != arg3)
        x23_2 = 0
    else if (x23_1 != 7)
        if (x23_1 != 0x451)
            if (x8_6 == x23_1 || ((x23_1 == 0x3e9 ? 1 : 0) & (x8_6 == 0x451 ? 1 : 0)) != 0)
                goto label_bfc9c4
            
            x23_2 = 0
        else
            if (x8_6 == 0x3e9 || x8_6 == x23_1
                    || ((x23_1 == 0x3e9 ? 1 : 0) & (x8_6 == 0x451 ? 1 : 0)) != 0)
                goto label_bfc9c4
            
            x23_2 = 0
    else if (x8_6 - 7 u< 0x41)
    label_bfc9c4:
        int32_t var_cd0 = x23_1
        x23_2 = 1
        TrashCards(arg1, zx.q(arg2), &var_44, 1, &var_cd0, zx.q(arg5), zx.q(arg6))
    else
        x23_2 = 0

return zx.q(x23_2)
