// 函数: _Z18TriggerMovementEndR15DomMoveCallback15MoveTriggerFlag
// 地址: 0xbaa424
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg2 & 1) != 0)
    return 

void* x21_1 = *arg1

if (*(x21_1 + 0x21d0) == *(gDomClient + 0x1f8c0))
    return 

if (zx.d(*(arg1 + 0x10)) == 0)
    if (*(arg1 + 8) == 1)
        uint64_t x8_5
        int64_t x9_2
        
        if (*(x21_1 + 0x2c) == 0)
            int32_t x0_2 = CardWhat(gDomClient + 0x20728, zx.q(*(x21_1 + 0x98)))
            int32_t x9_3 = *(x21_1 + 0x10c)
            int32_t x9_4
            
            x9_4 = x9_3 == 0 ? x0_2 : x9_3
            
            x8_5 = zx.q(*(x21_1 + 0xa0)) | zx.q(x9_4) << 0x20
            x9_2 = 1
        else
            x8_5 = 0
            x9_2 = 0
        
        int64_t var_30 = x9_2
        uint64_t var_28_1 = x8_5
        DomSoundHandleAnimEvent(1, &var_30, zx.q(*(arg1 + 0xc)), zx.q(*(arg1 + 0x18)), 1)
    else if (*(x21_1 + 0x2c) == 0)
        CardWhat(gDomClient + 0x20728, zx.q(*(x21_1 + 0x98)))
    
    *(arg1 + 0x10) = 1

void* x8_8 = *arg1

if (*(x8_8 + 0x2c) == 0)
    return CardWhat(gDomClient + 0x20728, zx.q(*(x8_8 + 0x98))) __tailcall
