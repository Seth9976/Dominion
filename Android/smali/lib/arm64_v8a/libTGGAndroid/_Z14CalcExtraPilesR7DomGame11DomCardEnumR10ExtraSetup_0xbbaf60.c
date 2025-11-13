// 函数: _Z14CalcExtraPilesR7DomGame11DomCardEnumR10ExtraSetup
// 地址: 0xbbaf60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2.d
int32_t var_34

if ((HasHeirloom(zx.q(*(arg1 + 0xd50)), arg2, &var_34) & 1) != 0)
    int32_t x8_1 = *(arg3 + 0x48)
    
    if (x8_1 s>= 0x10)
        void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_4 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
        *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_5 = *(x8_4 - 0x90)
        *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
        x8_1 = *(arg3 + 0x48)
    
    uint64_t x1 = zx.q(var_34)
    *(arg3 + 0x48) = x8_1 + 1
    *(arg3 + (sx.q(x8_1) << 2) + 8) = x1.d
    RunPileSetup(arg1, x1, arg3, 0)

int32_t x21_1 = *(arg1 + 0xd50)
int32_t x8_11 = (x20 + (x21_1 << 0x10)) s% 0x3e5
int32_t* x9_4 = *(&data_1838a20 + (sx.q(x8_11) << 3))
void* result
int32_t x8_13

if (x9_4 != 0)
    while (*x9_4 != x20 || x9_4[1] != x21_1)
        x9_4 = *(x9_4 + 0x10)
        
        if (x9_4 == 0)
            goto label_bbb058
    
    result = *(x9_4 + 8)
    x8_13 = *(result + 0xc4)
    
    if (x8_13 != 0xffffffff)
        goto label_bbb0cc
else
label_bbb058:
    DomDefGetSlow(zx.q(x20), zx.q(x21_1))
    int32_t* x0_6 = malloc(0x18)
    int64_t x8_12 = sx.q(x8_11) << 3
    int64_t x9_5 = *(&data_1838a20 + x8_12)
    *x0_6 = x20
    x0_6[1] = x21_1
    *(&data_1838a20 + x8_12) = x0_6
    *(x0_6 + 0x10) = x9_5
    result = DomDefGetSlow(zx.q(x20), zx.q(x21_1))
    *(x0_6 + 8) = result
    x8_13 = *(result + 0xc4)
    
    if (x8_13 != 0xffffffff)
    label_bbb0cc:
        
        if ((x8_13 & 0x10000) != 0)
            *arg3 = 1
int32_t x8_14 = (*(result + 0xc8)).d

if ((x8_14 & 0x80000000) == 0)
    if ((x8_14 & 0x1000) != 0)
        goto label_bbb124
    
    goto label_bbb0e4

*(arg3 + 4) = 1
x8_14 = (*(result + 0xc8)).d

if ((x8_14 & 0x1000) != 0)
label_bbb124:
    *(arg3 + 1) = 1
    x8_14 = (*(result + 0xc8)).d
    
    if ((x8_14 & 0x80000) == 0)
        goto label_bbb0e8
    
    goto label_bbb134

label_bbb0e4:

if ((x8_14 & 0x80000) == 0)
label_bbb0e8:
    
    if ((x8_14 & 0x100000) != 0)
        goto label_bbb144
    
    goto label_bbb0ec

label_bbb134:
*(arg3 + 2) = 1
x8_14 = (*(result + 0xc8)).d

if ((x8_14 & 0x100000) == 0)
label_bbb0ec:
    
    if ((x8_14 & 0x8000000) != 0)
        *(arg3 + 0x4c) += 1
else
label_bbb144:
    *(arg3 + 3) = 1
    
    if (((*(result + 0xc8)).d & 0x8000000) != 0)
        *(arg3 + 0x4c) += 1

return result
