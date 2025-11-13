// 函数: _Z13PrevStoreItemRK7GameDlc
// 地址: 0x9c5dd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = zx.q(*arg1)
int32_t x8_1
int32_t x19_1

if (x0.d != 3)
    DlcDef* var_18
    int32_t x0_1 = GameSpecific_GetDlcs(x0, &var_18)
    int64_t x8_2
    int64_t x9_1
    int64_t x10_1
    
    if (x0_1 s>= 1)
        x9_1 = 0
        x8_2 = -0x100000000
        x10_1 = -0x7c
        
        while (*(var_18 + x10_1 + 0x7c) != *(arg1 + 4))
            x9_1 += 1
            x8_2 += 0x100000000
            x10_1 += 0x80
            
            if (zx.q(x0_1) == x9_1)
                goto label_9c5e90
    
    if (x0_1 s< 1 || x9_1.d s< 1)
    label_9c5e90:
        x19_1 = 3
        int32_t* var_20
        GameSpecific_GetDlcs(3, &var_20)
        x8_1 = *var_20
    else
        DlcDef* x11_2 = var_18
        int64_t x9_2 = x9_1 + 1
        void* x10_2 = x11_2 + x10_1
        
        while ((*x10_2 | 4) == 7)
            x9_2 -= 1
            x8_2 += -0x100000000
            x10_2 -= 0x80
            
            if (x9_2 s<= 1)
                goto label_9c5e90
        
        x19_1 = *arg1
        x8_1 = *(x11_2 + (x8_2 s>> 0x19))
else
    x8_1 = *(arg1 + 4)
    x19_1 = 3

return zx.q(x19_1) | zx.q(x8_1) << 0x20
