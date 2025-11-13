// 函数: _Z17DomAIAction_FirstR5DomAIRK7DomGameR8DomYield
// 地址: 0x9f3ae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg3 + 4)

if (x8 u<= 8)
    if ((1 << x8 & 0x1d6) != 0)
        *(arg3 + 0x74) = *(arg3 + 0x64)
        return 
    
    if (x8 == 3)
        uint64_t x9_2 = zx.q(*(arg3 + 0x74))
        
        if (x9_2.d s>= 1)
            int32_t x8_2 = *(arg3 + 0xcf8)
            int64_t i_4
            
            if (x9_2.d u>= 8)
                i_4 = x9_2 & 0xfffffff8
                int128_t v0
                v0.d = x8_2
                v0:4.d = x8_2
                v0:8.d = x8_2
                v0:0xc.d = x8_2
                void* __offset(DomYield, 0xd18) x11_1 = arg3 + 0xd18
                int64_t i_3 = i_4
                int64_t i
                
                do
                    *(x11_1 - 0x10) = v0
                    *x11_1 = v0
                    i = i_3
                    i_3 -= 8
                    x11_1 += 0x20
                while (i != 8)
                
                if (i_4 != x9_2)
                    goto label_9f3b80
            else
                i_4 = 0
            label_9f3b80:
                void* x11_3 = arg3 + (i_4 << 2) + 0xd08
                int64_t i_2 = x9_2 - i_4
                int64_t i_1
                
                do
                    i_1 = i_2
                    i_2 -= 1
                    *x11_3 = x8_2
                    x11_3 += 4
                while (i_1 != 1)
        
        return 
    
    if (x8 == 5)
        *(arg3 + 0x74) = *(arg3 + 0x68)
        return 

pthread_kill(pthread_self(), 6)
DomAI* x0_1
DomGame* x1
DomYield* x2
x0_1, x1, x2 = XNoReturn()
return DomAIAction_Random(x0_1, x1, x2) __tailcall
