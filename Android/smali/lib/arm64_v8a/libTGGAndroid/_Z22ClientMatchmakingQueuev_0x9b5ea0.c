// 函数: _Z22ClientMatchmakingQueuev
// 地址: 0x9b5ea0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveProfile()
void var_540
int32_t x0_2 = GetOwnedExpansionSetups(&var_540)
int32_t var_34 = 0
int32_t x20 = *(x0 + 0x7568)
int32_t x0_4 = DomExpansionsBitsetFromExpansions(&var_540, x0_2, &var_34)
int128_t var_580
int128_t var_570
DomExpSetup var_2c0

if (x20 == 0)
    *(x0 + 0x7568) = x0_4
    *(x0 + 0x756c) = 2
    var_580 = zx.o(0)
    __builtin_memset(&var_570, 0, 0x30)
label_9b5f8c:
    var_580:4.d = 0
    memset(&var_2c0, 0, 0x280)
    var_570:8.d = GetOwnedExpansionSetups(&var_2c0)
    var_570.q = &var_2c0
label_9b6000:
    int128_t var_560
    var_560.q = x0 + 0x5964
    int64_t x8_3 = sx.q(*(x0 + 0x6454))
    var_560:8.d = x8_3.d
    var_560:0xc.d = memcrc32(x0 + 0x5964, x8_3 << 2, 0)
    int128_t var_550
    var_550.q = x0 + 0x5760
    int64_t x8_4 = sx.q(*(x0 + 0x5960))
    var_550:8.d = x8_4.d
    var_550:0xc.d = memcrc32(x0 + 0x5760, x8_4 << 3, 0)
    int64_t x8_5 = sx.q(*(x0 + 0x7560))
    
    if (x8_5.d u< 3)
        int32_t x19_1 = *(&data_7a77e4 + (x8_5 << 2))
        memset(&var_2c0, 0, 0x280)
        int32_t x0_20 = GetOwnedExpansionSetups(&var_2c0)
        int64_t x8_7 = sx.q(x0_20) + 1
        void* x9_3 = &var_2c0 + (sx.q(x0_20) << 4) - 0x10
        int32_t i
        
        do
            x8_7 -= 1
            
            if (x8_7 s< 1)
                break
            
            i = *x9_3
            x9_3 -= 0x10
        while (i != 0x13)
        int32_t x8_10
        
        if (x0_20 - (x8_7 s> 0 ? 1 : 0) s< 4)
            x8_10 = 0x16
        else
            x8_10 = x19_1
        
        var_580.d = x8_10
        NetworkSendDef(zx.q(*(GetClient() + 0x14)), 0xf42bc, *defMapMatchmakingQueue, &var_580)
        *(GetClient() + 0x7778) = 1
        return GameDlgManagerShow(0x26, 9)
else
    int32_t x8_1 = *(x0 + 0x756c)
    int32_t x21_1 = *(x0 + 0x7568) & x0_4
    *(x0 + 0x7568) = x21_1
    __builtin_memset(&var_580, 0, 0x40)
    
    if (x8_1 == 2)
        goto label_9b5f8c
    
    if (x8_1 == 1)
        memset(&var_2c0, 0, 0x280)
        int32_t x0_13 = GetOwnedExpansionSetups(&var_2c0)
        var_570:8.d = x0_13
        var_570.q = &var_2c0
        int32_t x8_2 = *(x0 + 0x7570)
        
        if (x8_2 == 0)
            var_580:4.d = 0x11
        else if (x8_2 != 0xffffffff)
            var_580:4.d = x8_2
        else
            var_580:4.d = x0_13
            var_580:8.d = 2
        
        goto label_9b6000
    
    if (x8_1 == 0)
        memset(&var_2c0, 0, 0x280)
        var_580:4.d = 0
        var_570:8.d = DomExpSetupFromBitset(zx.q(x21_1), zx.q(var_34), &var_2c0)
        var_570.q = &var_2c0
        var_580:8.d = 1
        goto label_9b6000
pthread_kill(pthread_self(), 6)
XNoReturn()
return ClientMatchmakingCancel() __tailcall
