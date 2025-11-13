// 函数: _Z15DomAddCardParam9PlayerWho6CardID12DomCardParamiib
// 地址: 0xb4e4a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
void* i_1
int64_t x9_1
void* i

if (x9.d != 0)
    i_1 = *(gDomClient + 0x205e0)
    x9_1 = i_1 + x9 * 0x21d8
    i = i_1
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= x9_1)
            goto label_b4e55c

void* i_2

if (x9.d == 0 || i == 0xffffffff)
label_b4e55c:
    i_2 = nullptr
else
    do
        if (*(i + 0x2c) == 0 && *(i + 0x98) == arg2 && zx.d(*(i + 0x168)) == 0)
            i_2 = i
            
            if (arg3 == 0)
                goto label_b4e56c
            
            goto label_b4e58c
        
        if (i == 0)
            i = i_1
        else
            i += 0x21d8
        
        if (i u>= x9_1)
            goto label_b4e55c
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x9_1)
                goto label_b4e55c
        
        i_2 = nullptr
    while (i != 0xffffffff)

if (arg3 != 0)
label_b4e58c:
    pthread_kill(pthread_self(), 6)
    int64_t x0_1
    int64_t x1
    int64_t x2
    int32_t x3
    int32_t x4
    bool x5
    x0_1, x1, x2, x3, x4, x5 = XNoReturn()
    return DomSetCardParam(x0_1, x1, x2, x3, x4, x5) __tailcall

label_b4e56c:
int32_t x9_3 = *(i_2 + 0x100) + arg5
*(i_2 + 0xfc) += arg4
*(i_2 + 0x100) = x9_3
