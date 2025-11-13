// 函数: _Z21TriggerMovementUpdateR15DomMoveCallback
// 地址: 0xbaa2e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_20 = v8
void* x20 = *arg1

if (*(x20 + 0x520) != 6)
    return 

int32_t v0

if (*(x20 + 0x1f78) != 0)
    v8.d = fconvert.s(1f) f- *(x20 + 0x1f84)
    v0 = *(arg1 + 0x14)
    
    if (not(v8.d f== 0f) || not(v0 f== 0f))
        goto label_baa368
    
    return 

v8.d = 0f
v0 = *(arg1 + 0x14)

if (not(v8.d f!= 0f) && v0 f== 0f)
    return 

label_baa368:

if (not(v8.d f>= float.s(0x3e4ccccd)) && not(v0 f< float.s(0x3e4ccccd)))
    if (*(arg1 + 8) == 1)
        uint64_t x8_4
        int64_t x9_1
        
        if (*(x20 + 0x2c) == 0)
            int32_t x0_2 = CardWhat(gDomClient + 0x20728, zx.q(*(x20 + 0x98)))
            int32_t x9_2 = *(x20 + 0x10c)
            int32_t x9_3
            
            x9_3 = x9_2 == 0 ? x0_2 : x9_2
            
            x8_4 = zx.q(*(x20 + 0xa0)) | zx.q(x9_3) << 0x20
            x9_1 = 1
        else
            x8_4 = 0
            x9_1 = 0
        
        int64_t var_30 = x9_1
        uint64_t var_28_1 = x8_4
        DomSoundHandleAnimEvent(1, &var_30, zx.q(*(arg1 + 0xc)), zx.q(*(arg1 + 0x18)), 1)
    else if (*(x20 + 0x2c) == 0)
        CardWhat(gDomClient + 0x20728, zx.q(*(x20 + 0x98)))
    
    *(arg1 + 0x10) = 1

*(arg1 + 0x14) = v8.d
