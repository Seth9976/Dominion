// 函数: _Z11SetPropertyRK3UI29UI2Attribb7Recurse
// 地址: 0x1035130
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 u> 3)
    pthread_kill(pthread_self(), 6)
    return CanExpand(XNoReturn()) __tailcall

uint32_t x19 = arg2
UI2 const& i_1 = arg1

switch (arg4)
    case 0
        if (*(i_1 + 0x1688) == *(gUI2Editor + 0x6008))
            AttribMap* x0_1 = GetEdittedMap(i_1, zx.q(x19))
            AttribMapSetBool(*gUI2AttribTable, x0_1, x19, arg3 & 1)
            UI2 const& i = i_1
            
            do
                *(i + 0x1378) = 2
                i = *(i + 0x17d0)
            while (i != 0)
            
            do
                *(i_1 + 0x1370) = 0
                *(i_1 + 0x1710) = 0x3f800000
                i_1 = *(i_1 + 0x17d0)
            while (i_1 != 0)
        
        return 
    case 1
        UI2* i_5 = *(i_1 + 0x17d0)
        UI2 const& i_3
        
        i_3 = i_5 == 0 ? i_1 : i_5
        
        return SetPropertyRec(i_3, zx.q(x19), arg3 & 1, 1) __tailcall
    case 2
        return SetPropertyRec(i_1, zx.q(x19), arg3 & 1, 2) __tailcall
    case 3
        UI2 const& i_4
        
        do
            i_4 = i_1
            i_1 = *(i_1 + 0x17d0)
        while (i_1 != 0)
        
        uint64_t x11_1 = zx.q(*(i_4 + 0x1970))
        int64_t x8_2
        uint64_t i_2
        
        if (x11_1.d s<= 0)
            i_2 = 0
            x8_2 = *gUI2
        else
            i_2 = zx.q(*(i_4 + 0x1870))
            x8_2 = *gUI2
            
            if (*(x8_2 + i_2 * 0x19a8 + 0x1658) != 0)
                i_2 = x11_1 - 1
                void* __offset(UI2, 0x1874) x9_2 = i_4 + 0x1874
                
                while (i_2 != 0)
                    uint64_t x12_3 = zx.q(*x9_2)
                    x9_2 += 4
                    i_2 -= 1
                    
                    if (*(x8_2 + x12_3 * 0x19a8 + 0x1658) == 0)
                        i_2 = zx.q(x12_3.d)
                        break
        
        return SetPropertyRec(x8_2 + mulu.dp.d(i_2.d, 0x19a8), zx.q(x19), arg3 & 1, 2) __tailcall
