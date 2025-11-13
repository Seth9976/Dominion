// 函数: _Z10MovePileTo8DomWhereS_11RevealStyleb
// 地址: 0xadd55c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg2
int32_t x19 = arg1.d
int64_t result = CardsWhereType(arg1, 0, 0)
int32_t var_19e0
int32_t var_19b0[0x258]
int32_t var_d30

if (x19 == 0x3eb)
    void* x0 = DomGetContext()
    int32_t var_19d8_1 = 0
    var_19e0 = 0
    result =
        NotifyLog(*(x0 + 8), 0x2b, zx.q(*(x0 + 0x18)), 0, &var_19b0, zx.q(var_d30), 0x3eb, 0x3ec)

if (var_d30 s>= 1)
    int64_t i = 0
    
    do
        DomGame* x0_5
        uint64_t x1_1
        uint64_t x2_1
        uint64_t x3
        int64_t x5_2
        int64_t x6_1
        DomGame* x8_3
        int64_t x9_1
        int32_t x22_1
        
        if (x21 s> 0x3ea)
            if (x21 != 0x3eb)
                if (x21 != 0x3ec)
                label_add808:
                    pthread_kill(pthread_self(), 6)
                    XNoReturn()
                    return RevealBottomDeckOne() __tailcall
                
                x22_1 = var_19b0[i]
                void* x0_9 = DomGetContext()
                int32_t x0_11 = CardOwner(*(x0_9 + 8), zx.q(x22_1))
                x9_1 = *(x0_9 + 0x40)
                x8_3 = *(x0_9 + 8)
                x1_1 = zx.q(x0_11)
                int32_t var_19b8_3 = 0
                int64_t var_19c0_3 = 0
                int32_t var_19c8_3 = 0
                int32_t var_19d0_3 = 0
                int32_t var_19d8_4 = *(x0_9 + 0x48)
                x5_2 = 0x3ec
                x6_1 = 8
                goto label_add630
            
            x22_1 = var_19b0[i]
            void* x0_2 = DomGetContext()
            int32_t x0_4 = CardOwner(*(x0_2 + 8), zx.q(x22_1))
            x9_1 = *(x0_2 + 0x40)
            x8_3 = *(x0_2 + 8)
            x1_1 = zx.q(x0_4)
            int32_t var_19b8_1 = 0
            int64_t var_19c0_1 = 0
            int32_t var_19c8_1 = 0
            int32_t var_19d0_1 = 0
            int32_t var_19d8_2 = *(x0_2 + 0x48)
            x5_2 = 0x3eb
            x6_1 = 1
        label_add630:
            x0_5 = x8_3
            x2_1 = zx.q(x22_1)
            x3 = zx.q(x19)
            var_19e0.q = x9_1
        else
            if (x21 != 1)
                if (x21 != 0x3ea)
                    goto label_add808
                
                x22_1 = var_19b0[i]
                void* x0_6 = DomGetContext()
                int32_t x0_8 = CardOwner(*(x0_6 + 8), zx.q(x22_1))
                x9_1 = *(x0_6 + 0x40)
                x8_3 = *(x0_6 + 8)
                x1_1 = zx.q(x0_8)
                x5_2 = 0x3ea
                x6_1 = 3
                int32_t var_19b8_2 = 0
                int64_t var_19c0_2 = 0
                int32_t var_19c8_2 = 0
                int32_t var_19d0_2 = 0
                int32_t var_19d8_3 = *(x0_6 + 0x48)
                goto label_add630
            
            int32_t x22_2 = var_19b0[i]
            void* x0_12 = DomGetContext()
            x1_1 = zx.q(CardOwner(*(x0_12 + 8), zx.q(x22_2)))
            int32_t var_19b8_4 = 0
            int64_t var_19c0_4 = 0
            int32_t var_19c8_4 = 0
            int32_t var_19d0_4 = 0
            int32_t var_19d8_5 = *(x0_12 + 0x48)
            x5_2 = 1
            var_19e0.q = *(x0_12 + 0x40)
            x0_5 = *(x0_12 + 8)
            x2_1 = zx.q(x22_2)
            x3 = zx.q(x19)
            x6_1 = 0
        result = MoveCardTo(x0_5, x1_1, x2_1, x3, 0xb, x5_2, x6_1, 0)
        i += 1
    while (i s< sx.q(var_d30))

if ((arg4.d & 1) == 0)
    result = IsBoardPile(zx.q(x19))
    
    if ((result.d & 1) != 0)
        int32_t var_a8_1 = 0
        int32_t var_44 = 0x13
        void* x0_16 = DomGetContext()
        int128_t var_a0
        __builtin_memset(&var_a0, 0, 0x48)
        var_19e0.q = 0
        CardID var_d28
        return TriggerEvents(*(x0_16 + 8), zx.q(*(x0_16 + 0x18)), &var_44, 1, &var_a0, 0, &var_d28, 
            0)

return result
