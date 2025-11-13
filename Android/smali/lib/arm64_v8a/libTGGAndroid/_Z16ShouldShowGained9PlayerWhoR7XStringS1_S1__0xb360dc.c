// 函数: _Z16ShouldShowGained9PlayerWhoR7XStringS1_S1_
// 地址: 0xb360dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x8 = *(gDomClient + 0x38)
int32_t x8_1

x8_1 = x8 == 0xffffffff ? 0 : x8

uint64_t result = 0

if (x8_1 != arg1)
    result = 0
    
    if (LocalWho() != x19 && zx.d(*(gDomClient + 0x22134)) == 0)
        void* x0_1 = ActiveGame()
        uint64_t i_2 = zx.q(*(x0_1 + 0x11b4))
        
        if (i_2.d s>= 1)
            void* x9_1 = x0_1 + 0x74
            uint64_t i
            
            do
                int32_t x12_2 = *x9_1 - 0x3e9
                
                if (x12_2 u<= 4 && (1 << x12_2 & 0x19) != 0)
                    return 0
                
                i = i_2
                i_2 -= 1
                x9_1 += 0x22c
            while (i != 1)
        
        int64_t (* x28_1)()
        
        if (x19 == 0xffffffff)
            x28_1 = gDomClient + 0x48
        else
            x28_1 = gDomClient + 0x48 + muls.dp.d(x19, 0x4d48)
        
        if (*(x28_1 + 0x30) == 0)
            return 0
        
        DomCardEnum var_25e0
        int32_t x22_1
        int32_t x25_2
        int32_t x28_2
        DomCardEnum var_1960
        int32_t x24_1
        
        if (*(x28_1 + 0x1934) s< 1)
            x25_2 = GetCurrentLanguage()
            x22_1 = 0
            x24_1 = 0
        label_b362ec:
            DoTranslate("dom_ui_opponent_nothing")
            XString::operator=(arg2)
            XString::~XString()
            x28_2 = 0
            
            if (x24_1 == 0)
                DoTranslate("dom_ui_opponent_nothing")
            else
                CardsKnown(zx.q(x25_2), 1, &var_1960, x24_1, 1, true, 0, true)
        else
            int64_t i_1 = 0
            x22_1 = 0
            x24_1 = 0
            int32_t x26_1 = 0
            int64_t (* x20_2)() = x28_1 + 0x38
            void var_ce0
            
            do
                int32_t x0_3 = CardWhat(gDomClient + 0x20728, zx.q(*x20_2))
                int32_t x8_8 = *(x20_2 - 4)
                int32_t x8_6
                
                if (x8_8 == 0)
                    x8_6 = x22_1
                    x22_1 += 1
                    *(&var_25e0 + (sx.q(x8_6) << 2)) = x0_3
                else if (x8_8 == 2)
                    x8_6 = x24_1
                    x24_1 += 1
                    *(&var_1960 + (sx.q(x8_6) << 2)) = x0_3
                else if (x8_8 == 1)
                    x8_6 = x26_1
                    x26_1 += 1
                    *(&var_ce0 + (sx.q(x8_6) << 2)) = x0_3
                i_1 += 1
                x20_2 += 8
            while (i_1 s< sx.q(*(x28_1 + 0x1934)))
            
            x25_2 = GetCurrentLanguage()
            
            if (x26_1 == 0)
                goto label_b362ec
            
            x28_2 = 1
            CardsKnown(zx.q(x25_2), 1, &var_ce0, x26_1, 1, true, 0, true)
            XString::operator=(arg2)
            XString::~XString()
            
            if (x24_1 != 0)
                CardsKnown(zx.q(x25_2), 1, &var_1960, x24_1, 1, true, 0, true)
            else
                DoTranslate("dom_ui_opponent_nothing")
        XString::operator=(arg3)
        XString::~XString()
        
        if (x22_1 == 0)
            DoTranslate("dom_ui_opponent_nothing")
        else
            CardsKnown(zx.q(x25_2), 1, &var_25e0, x22_1, 1, true, 0, true)
        
        XString::operator=(arg4)
        XString::~XString()
        return zx.q(x28_2) & zx.q(*(gDomClient + 0x205c4) != x19 ? 1 : 0)

return result
