// 函数: _Z17ToAssociatedCardsR7DomGameR6CardIDS2_RiRK10AssocCards
// 地址: 0xadea28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = 0
*arg3 = 0
*arg4 = 0
uint64_t x8 = zx.q(*arg5)

if (x8.d u> 4)
    pthread_kill(pthread_self(), 6)
    return GetMoveIdx(XNoReturn()) __tailcall

switch (x8)
    case 0
        return 
    case 1
        *arg2 = 0
        *arg3 = *(arg5 + 4)
        return 
    case 2
        *arg2 = 0
        *arg4 = *(arg5 + 4)
        return 
    case 3
        *arg2 = 0
        *arg3 = *(arg5 + 4)
        *arg4 = *(arg5 + 8)
        return 
    case 4
        *arg3 = 0
        
        if (*(arg5 + 0xc84) s>= 1)
            int64_t i = 0
            
            do
                int32_t x8_5 = *(arg5 + 4 + (i << 2))
                *arg2 = x8_5
                i += 1
                arg2 = CardGet(arg1, zx.q(x8_5)) + 0x64
            while (i s< sx.q(*(arg5 + 0xc84)))
        
        *arg2 = 0
        return 
