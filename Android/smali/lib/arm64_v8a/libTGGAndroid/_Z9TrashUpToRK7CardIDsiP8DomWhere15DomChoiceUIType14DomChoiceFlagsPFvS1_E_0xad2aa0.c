// 函数: _Z9TrashUpToRK7CardIDsiP8DomWhere15DomChoiceUIType14DomChoiceFlagsPFvS1_E
// 地址: 0xad2aa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0xc80)
int32_t x23

x23 = x9 s> arg2 ? arg2 : x9

int64_t entry_x8

if (x23 == 0)
    return memset(entry_x8, 0, 0xc84) __tailcall

int64_t var_19b8 = 0
int32_t var_19a8
int32_t var_d28
int32_t var_d20[0xcc]

if (x9 == 0)
    memset(&var_19a8, 0, 0xc84)
else
    int32_t* x0
    int128_t v0_1
    x0, v0_1 = DomGetContext()
    int32_t var_98 = arg4
    int128_t var_94_1 = 0.o
    int64_t var_84
    __builtin_memset(&var_84, 0, 0x24)
    int64_t var_74 = *(x0 + 0x40)
    memcpy(&var_d20, arg1, 0xc84)
    uint64_t x2 = zx.q(x0[6])
    int32_t x8_1 = x0[7]
    DomGame* x0_2 = *(x0 + 8)
    var_19a8 = *x0
    int32_t var_19a4_1 = x8_1
    int32_t var_19d0_1 = 0
    int32_t var_19d8_1 = arg5
    int32_t var_19e0_1 = 7
    int32_t* var_19e8_1 = &var_98
    int32_t var_19f0_1 = 9
    int32_t var_a0
    int32_t var_a0_1 =
        QueueChoiceCards(x0_2, &var_19a8, x2, 1, &var_d20, zx.q(var_a0), zx.q(x23), 0)
    memcpy(&var_19a8, &var_d20, 0xc84)
    
    if (var_d28 s>= 1)
        uint64_t i_2 = zx.q(*(arg1 + 0xc80))
        
        if (i_2.d s>= 1)
            int64_t x9_2 = 0
            uint64_t x11_2
            
            if (var_d28 s> 1)
                x11_2 = zx.q(var_d28)
            else
                x11_2 = 1
            
            do
                uint64_t i_1 = i_2
                CardIDs const& x16_1 = arg1
                DomWhere* x15_1 = arg3
                uint64_t i
                
                do
                    if ((&var_19a8)[x9_2] == *x16_1)
                        var_d20[x9_2] = *x15_1
                        break
                    
                    x15_1 += 4
                    i = i_1
                    i_1 -= 1
                    x16_1 += 4
                while (i != 1)
                x9_2 += 1
            while (x9_2 != x11_2)

if (arg6 != 0)
    arg6(&var_19a8)

void* x0_9 = DomGetContext()
TrashCards(*(x0_9 + 8), zx.q(*(x0_9 + 0x18)), &var_19a8, var_d28, &var_d20, 0x12, 0)
return memcpy(entry_x8, &var_19a8, 0xc84)
