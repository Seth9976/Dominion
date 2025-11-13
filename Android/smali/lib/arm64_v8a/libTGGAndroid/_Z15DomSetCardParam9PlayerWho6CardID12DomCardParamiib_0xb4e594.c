// 函数: _Z15DomSetCardParam9PlayerWho6CardID12DomCardParamiib
// 地址: 0xb4e594
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*(gDomClient + 0x205e8))
void* i_1
int64_t x10_1
void* i

if (x10.d != 0)
    i_1 = *(gDomClient + 0x205e0)
    x10_1 = i_1 + x10 * 0x21d8
    i = i_1
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= x10_1)
            goto label_b4e650

void* i_2

if (x10.d == 0 || i == 0xffffffff)
label_b4e650:
    i_2 = nullptr
else
    do
        if (*(i + 0x2c) == 0 && *(i + 0x98) == arg2 && zx.d(*(i + 0x168)) == 0)
            i_2 = i
            
            if (arg3 u<= 7)
                goto label_b4e660
            
            goto label_b4e790
        
        if (i == 0)
            i = i_1
        else
            i += 0x21d8
        
        if (i u>= x10_1)
            goto label_b4e650
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x10_1)
                goto label_b4e650
        
        i_2 = nullptr
    while (i != 0xffffffff)

if (arg3 u> 7)
label_b4e790:
    pthread_kill(pthread_self(), 6)
    return AchievementPopupUpdate(XNoReturn()) __tailcall

label_b4e660:
int32_t x9_3

switch (arg3)
    case 0
        if (arg5 == 1)
            *(i_2 + 0x100) = 0
            return 
        
        *(i_2 + 0xfc) = arg4
        *(i_2 + 0x100) = arg5
    case 1
        *(i_2 + 0x104) = (arg4 != 0 ? 1 : 0).b
    case 2
        *(i_2 + 0x105) = (arg4 != 0 ? 1 : 0).b
        *(i_2 + 0x108) = arg5
        
        if (arg4 == 0)
            x9_3 = *(i_2 + 0x9c)
            
            if (x9_3 != 0)
                goto label_b4e6d8
    case 3
        *(i_2 + 0x10c) = arg4
    case 4
        x9_3 = *(i_2 + 0x9c)
        *(i_2 + 0x114) = (arg4 != 0 ? 1 : 0).b
        
        if (x9_3 != 0)
        label_b4e6d8:
            uint64_t x10_3 = zx.q(x9_3.w)
            
            if (x10_3.d u< *(gDomClient + 0x205e8))
                int64_t x8_1 = *(gDomClient + 0x205e0)
                arg1 = x8_1 + x10_3 * 0x21d8
                
                if (*(arg1 + 0x21d0) == x9_3)
                    *(x8_1 + x10_3 * 0x21d8 + 0x84) = 0
                    return PileAdjustCards(arg1, arg1, arg6 & 1) __tailcall
    case 5
        *(i_2 + 0x115) = (arg4 != 0 ? 1 : 0).b
    case 6
        *(i_2 + 0x116) = (arg4 != 0 ? 1 : 0).b
    case 7
        *(i_2 + 0x110) = arg5
