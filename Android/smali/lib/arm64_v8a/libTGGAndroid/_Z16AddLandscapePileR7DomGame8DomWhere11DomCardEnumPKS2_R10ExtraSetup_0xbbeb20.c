// 函数: _Z16AddLandscapePileR7DomGame8DomWhere11DomCardEnumPKS2_R10ExtraSetup
// 地址: 0xbbeb20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = *(arg1 + 0xd50)
int32_t x8_4 = (arg3 + (x23 << 0x10)) s% 0x3e5
int32_t* x9_1 = *(&data_1838a20 + (sx.q(x8_4) << 3))
int32_t x20 = arg3
int32_t x22 = arg2

if (x9_1 != 0)
    while (*x9_1 != x20 || x9_1[1] != x23)
        x9_1 = *(x9_1 + 0x10)
        
        if (x9_1 == 0)
            goto label_bbeb8c
else
label_bbeb8c:
    DomDefGetSlow(zx.q(x20), zx.q(x23))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_5 = sx.q(x8_4) << 3
    int64_t x9_2 = *(&data_1838a20 + x8_5)
    *x0_1 = x20
    x0_1[1] = x23
    *(&data_1838a20 + x8_5) = x0_1
    *(x0_1 + 0x10) = x9_2
    *(x0_1 + 8) = DomDefGetSlow(zx.q(x20), zx.q(x23))

AllocBoardPile(arg1, zx.q(x22), zx.q(x20), 0)
int64_t x4 = CardCreate(arg1, zx.q(x20), zx.q(x22), 0xffffffff, 0)
int64_t i_1 = -0x280
int64_t i

do
    void* x9_3 = arg1 + i_1
    int32_t x8_6 = *(x9_3 + 0x1508)
    
    if (x8_6 != 0x14b6)
        if (x8_6 == 0)
            break
    else if (*(x9_3 + 0x150c) == x20)
        x4 = CardCreate(arg1, zx.q(x20), zx.q(x22), 0xffffffff, 0)
    
    i = i_1
    i_1 += 0x14
while (i != -0x14)

if (x20 != 0)
    int32_t x22_1 = *(arg1 + 0xd50)
    int32_t x8_12 = (x20 + (x22_1 << 0x10)) s% 0x3e5
    int32_t* x9_5 = *(&data_1838a20 + (sx.q(x8_12) << 3))
    
    if (x9_5 != 0)
        while (*x9_5 != x20 || x9_5[1] != x22_1)
            x9_5 = *(x9_5 + 0x10)
            
            if (x9_5 == 0)
                goto label_bbeca4
        
        if ((zx.d(*(*(x9_5 + 8) + 0xcd)) & 8) != 0)
            goto label_bbecf0
    else
    label_bbeca4:
        DomDefGetSlow(zx.q(x20), zx.q(x22_1))
        int32_t* x0_8 = malloc(0x18)
        int64_t x8_13 = sx.q(x8_12) << 3
        int64_t x9_6 = *(&data_1838a20 + x8_13)
        *x0_8 = x20
        x0_8[1] = x22_1
        *(&data_1838a20 + x8_13) = x0_8
        *(x0_8 + 0x10) = x9_6
        void* x0_10
        x0_10, x4 = DomDefGetSlow(zx.q(x20), zx.q(x22_1))
        *(x0_8 + 8) = x0_10
        
        if ((zx.d(*(x0_10 + 0xcd)) & 8) != 0)
        label_bbecf0:
            DomPushSetupContext(arg1, zx.q(x20), arg5, 0xffffffff, x4)
            Prophecy_Setup()
            int32_t* x8_15 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
            *x8_15 -= 1

return RunPileSetup(arg1, zx.q(x20), arg5, 0) __tailcall
