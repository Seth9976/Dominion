// 函数: _ZNK5Botan3TLS6Policy16default_dh_groupEv
// 地址: 0xe73e60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
(*(*entry_x0 + 0x40))()
int16_t* var_28
int64_t var_20
uint32_t x19_1
int16_t* var_20_1

if (var_28 == var_20)
    x19_1 = 0x100
    
    if (var_28 != 0)
        var_20_1 = var_28
        operator delete(var_28)
else
    int16_t* x9_1 = var_28
    
    while (true)
        x19_1 = zx.d(*x9_1)
        x9_1 = &x9_1[1]
        
        if ((x19_1 & 0xff00) == 0x100)
            break
        
        if (var_20 == x9_1)
            x19_1 = 0x100
            break
    
    if (var_28 != 0)
        var_20_1 = var_28
        operator delete(var_28)
return zx.q(x19_1)
