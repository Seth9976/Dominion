// 函数: _Z19StoreItemIndexToDlc11GameDlcAreaii
// 地址: 0x9c42d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = arg2 + (arg3 << 3)
int32_t x8_1

if (arg3 s> 0)
    x8_1 = x8 - 4
else
    x8_1 = x8

int32_t x9_1

if (arg3 == 0)
    x9_1 = arg2
else
    x9_1 = x8 - 1

int32_t x20

x20 = arg1.d == 2 ? x9_1 : x8_1

void* var_18
int32_t i_2 = GameSpecific_GetDlcs(arg1, &var_18)

if (i_2 s>= 1)
    int32_t x8_2 = 0
    uint64_t i_1 = zx.q(i_2)
    int32_t* x10_2 = var_18 + 4
    uint64_t i
    
    do
        if ((*x10_2 | 4) != 7)
            if (x8_2 == x20)
                return zx.q(arg1.d) | zx.q(x10_2[-1]) << 0x20
            
            x8_2 += 1
        
        i = i_1
        i_1 -= 1
        x10_2 = &x10_2[0x20]
    while (i != 1)

pthread_kill(pthread_self(), 6)
return StoreItemDraw(XNoReturn()) __tailcall
