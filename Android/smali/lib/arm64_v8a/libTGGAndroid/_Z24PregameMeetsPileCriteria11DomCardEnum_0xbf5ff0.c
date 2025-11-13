// 函数: _Z24PregameMeetsPileCriteria11DomCardEnum
// 地址: 0xbf5ff0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomExpSetup* x20 = *(gPregameContext + 0x28) + 0x9c8
int32_t var_38
int32_t x0 = DomCardExp(arg1, &var_38)
void* x0_2 = FindExpansionSetup(x20, zx.q(x0))

if (x0_2 != 0)
    int32_t x8_1 = *(x0_2 + 0xc)
    
    if (*(x0_2 + 8) != *V2I0 || x8_1 != *(V2I0 + 4))
        uint64_t i_1 = zx.q(*(gPregameContext + 4))
        
        if (i_1.d s>= 1)
            int32_t* x23_1 = *(gPregameContext + 0x20)
            int32_t x21_1 = 0
            uint64_t i
            
            do
                uint64_t x0_3 = zx.q(*x23_1)
                x23_1 = &x23_1[1]
                int32_t var_34
                
                if (DomCardExp(x0_3, &var_34) == x0)
                    x21_1 += 1
                
                i = i_1
                i_1 -= 1
            while (i != 1)
            
            if (x21_1 s>= *(x0_2 + 0xc))
                return 0
        else if (0 s>= x8_1)
            return 0

return 1
