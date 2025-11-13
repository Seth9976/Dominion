// 函数: _Z21MayPlayActionFromHandi15DomChoiceUIType13PlayCardFlagsb
// 地址: 0xad9af8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3
GetPlayableFromHand(4, 0)
int64_t var_19b8
__builtin_memset(&var_19b8, 0, 0x18)
int32_t var_d20
int32_t x22_1

if (var_d20 == 0)
    x22_1 = 0
else
    int32_t x25_1
    
    x25_1 = arg1 s> 1 ? 0x35 : 0xb
    
    int32_t* x0
    int128_t v0_1
    x0, v0_1 = DomGetContext()
    v0_1 = var_19b8.o
    int32_t var_88 = arg2
    int128_t var_84_1 = v0_1
    int64_t var_74
    __builtin_memset(&var_74, 0, 0x24)
    int64_t var_64 = *(x0 + 0x40)
    void var_19a0
    int32_t var_d10
    memcpy(&var_d10, &var_19a0, 0xc84)
    DomGame* x0_2 = *(x0 + 8)
    int32_t var_d18 = *x0
    int32_t var_d14_1 = x0[7]
    int32_t var_19c0_1 = 0
    int32_t var_19c8_1 = 0
    int32_t var_19d0_1 = x25_1
    int32_t* var_19d8_1 = &var_88
    int32_t var_19e0_1 = 1
    int32_t var_90
    int32_t x0_3
    CardID* x1_2
    x0_3, x1_2 = QueueChoiceCards(x0_2, &var_d18, zx.q(x0[6]), 1, &var_d10, zx.q(var_90), 1, 0)
    
    if (x0_3 == 0)
        x22_1 = 0
    else
        x22_1 = var_d10
        
        if (x22_1 != 0)
            if (arg1 != 1)
                uint64_t x0_9
                int32_t x1_5
                uint64_t x2_2
                
                if ((arg4.d & 1) == 0)
                    x2_2 = zx.q(ThisCard(false, x1_2))
                    x0_9 = zx.q(x22_1)
                    x1_5 = arg1
                else
                    x0_9 = zx.q(x22_1)
                    x1_5 = arg1
                    x2_2 = 0
                
                PlayCard(x0_9, x1_5, x2_2, zx.q(x19))
            else
                void* x0_4 = DomGetContext()
                DomGame* x20_1 = *(x0_4 + 8)
                int32_t x21_1 = *(x0_4 + 0x18)
                var_d10.q = ToCardRef(x20_1, zx.q(x22_1))
                var_88.q = 0
                var_19b8 = 0
                PlayCard(x20_1, zx.q(x21_1), &var_d10, &var_88, &var_19b8, zx.q(x19))

return zx.q(x22_1)
