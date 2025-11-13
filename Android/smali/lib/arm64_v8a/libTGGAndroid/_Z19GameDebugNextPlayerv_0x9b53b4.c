// 函数: _Z19GameDebugNextPlayerv
// 地址: 0x9b53b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
int32_t x9 = *(x0 + 0x5068)
void* x8_2
int64_t x9_1
int64_t x10_1

if (x9 - 3 u< 2 || x9 == 1)
    x8_2 = x0 + 0x50a8
    x9_1 = sx.q(*(x8_2 + 0x11b4))
    
    if (x9_1.d s>= 1)
    label_9b5428:
        x10_1 = 0
        void* x11_1 = x8_2 + 0x68
        
        do
            if (*x11_1 == 0x3e8)
                goto label_9b545c
            
            x10_1 += 1
            x11_1 += 0x22c
        while (x10_1 s< x9_1)
else
    if (x9 != 2)
        pthread_kill(pthread_self(), 6)
        return GameRematch(XNoReturn()) __tailcall
    
    x8_2 = *(GetClient() + 0x5080) + zx.q(*(x0 + 0x506c)) * 0x1338
    x9_1 = sx.q(*(x8_2 + 0x11b4))
    
    if (x9_1.d s>= 1)
        goto label_9b5428

x10_1 = 0xffffffff
label_9b545c:
void* x19_2 = x8_2 + 0x54 + muls.dp.d(x10_1.d, 0x22c)
void var_260
memcpy(&var_260, x19_2, 0x22c)
void* x20_1 = x8_2 + 0x54 + muls.dp.d((x10_1.d + 1) s% x9_1.d, 0x22c)
memcpy(x19_2, x20_1, 0x22c)
memcpy(x20_1, &var_260, 0x22c)
return GameRestartForNextPlayer() __tailcall
