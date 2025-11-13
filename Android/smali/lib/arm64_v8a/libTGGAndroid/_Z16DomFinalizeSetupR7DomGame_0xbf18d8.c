// 函数: _Z16DomFinalizeSetupR7DomGame
// 地址: 0xbf18d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x150c)

if (x8 != 3 && x8 != 5)
    DomSaveCheckpoint(arg1)

uint64_t x1 = zx.q(*(arg1 + 0xd7c))
int128_t var_80
void (* var_28)()

if (x1.d != 0)
    int32_t x0_2
    int64_t x4_1
    x0_2, x4_1 = HasSetupHandFn(arg1, x1, &var_28)
    
    if ((x0_2 & 1) != 0)
        __builtin_memset(&var_80, 0, 0x50)
        DomPushSetupContext(arg1, zx.q(*(arg1 + 0xd7c)), &var_80, 0xffffffff, x4_1)
        var_28()
        int32_t* x8_2 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
        *x8_2 -= 1
    
    uint64_t x1_2 = zx.q(*(arg1 + 0xdb8))
    
    if (x1_2.d != 0)
        int32_t x0_7
        int64_t x4_2
        x0_7, x4_2 = HasSetupHandFn(arg1, x1_2, &var_28)
        
        if ((x0_7 & 1) != 0)
            __builtin_memset(&var_80, 0, 0x50)
            DomPushSetupContext(arg1, zx.q(*(arg1 + 0xdb8)), &var_80, 0xffffffff, x4_2)
            var_28()
            int32_t* x8_4 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
            *x8_4 -= 1
        
        uint64_t x1_4 = zx.q(*(arg1 + 0xdf4))
        
        if (x1_4.d != 0)
            int32_t x0_12
            int64_t x4_3
            x0_12, x4_3 = HasSetupHandFn(arg1, x1_4, &var_28)
            
            if ((x0_12 & 1) != 0)
                __builtin_memset(&var_80, 0, 0x50)
                DomPushSetupContext(arg1, zx.q(*(arg1 + 0xdf4)), &var_80, 0xffffffff, x4_3)
                var_28()
                int32_t* x8_6 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
                *x8_6 -= 1
            
            uint64_t x1_6 = zx.q(*(arg1 + 0xe30))
            
            if (x1_6.d != 0)
                int32_t x0_17
                int64_t x4_4
                x0_17, x4_4 = HasSetupHandFn(arg1, x1_6, &var_28)
                
                if ((x0_17 & 1) != 0)
                    __builtin_memset(&var_80, 0, 0x50)
                    DomPushSetupContext(arg1, zx.q(*(arg1 + 0xe30)), &var_80, 0xffffffff, x4_4)
                    var_28()
                    int32_t* x8_8 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
                    *x8_8 -= 1

if (*(arg1 + 0xd40) s>= 1)
    int32_t i = 0
    
    do
        var_80.q = 0
        DomPushContext(arg1, zx.q(i), &var_80)
        ShuffleDeck(arg1, zx.q(i))
        DrawHand(arg1, zx.q(i), false)
        int32_t* x8_10 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
        i += 1
        *x8_10 -= 1
    while (i s< *(arg1 + 0xd40))

if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
    uint64_t x2_10
    
    if (*(arg1 + 0x19d4) == 0xffffffff)
        x2_10 = zx.q(*(arg1 + 0x19d8))
    else
        x2_10 = 0xffffffff
    
    int32_t var_90_1 = 0
    int32_t var_98_1 = 0
    int64_t var_a0
    var_a0.d = 0
    DomAddLogEvent(arg1, 0xffffffff, x2_10, 3, 0, nullptr, 0, 0)

__builtin_memset(&var_80, 0, 0x48)
var_28.d = 0x1d
int64_t var_a0_1 = 0
int64_t result = TriggerEvents(arg1, 0xffffffff, &var_28, 1, &var_80, 0, nullptr, 0)
*(arg1 + 0x19e4) = 1
return result
