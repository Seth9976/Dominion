// 函数: _Z7CardDefR7DomGameRK6DomGfx
// 地址: 0xb0a4b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg2 + 0x2c))

if (x8.d u<= 5)
    switch (x8)
        case 0
            return CardDef(arg1, zx.q(*(arg2 + 0x98))) __tailcall
        case 1
            return DomDefGet(zx.q(*(arg2 + 0x170)), zx.q(*(arg1 + 0xd50))) __tailcall
        case 3
            int32_t x8_3 = *(arg2 + 0x70)
            
            if (x8_3 == 0 || *(arg2 + 0x5c) s>= 0x27)
                return DomDefGet(zx.q(*(arg2 + 0x30)), zx.q(*(arg1 + 0xd50))) __tailcall
            
            uint64_t x0_2 = zx.q(*(arg2 + 0x30))
            
            if (x0_2.d != 0xd3d && x0_2.d != 0xd30)
                return CardDef(arg1, 
                    zx.q(*(*(gDomClient + 0x205e0) + zx.q(x8_3.w) * 0x21d8 + 0x98))) __tailcall
            
            return DomDefGet(x0_2, zx.q(*(arg1 + 0xd50))) __tailcall
        case 5
            int32_t x8_5 = *(arg2 + 0x1f8)
            
            if (x8_5 == 3)
                return DomDefGet(AbilitySource(arg1, zx.q(*(arg2 + 0x1fc))), zx.q(*(arg1 + 0xd50)))
                    __tailcall
            
            if (x8_5 == 2)
                return CardDef(arg1, zx.q(*(arg2 + 0x1fc))) __tailcall

pthread_kill(pthread_self(), 6)
DomGfx* x0_14
ActiveSetStyle* x1_13
x0_14, x1_13 = XNoReturn()
return IsPileInActiveSet(x0_14, x1_13) __tailcall
