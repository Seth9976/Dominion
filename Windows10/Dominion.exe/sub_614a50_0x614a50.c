// 函数: sub_614a50
// 地址: 0x614a50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
void* i = data_b7d424 - 1
int32_t var_148_1
char const* const var_144_1

if (i u> 3)
    var_144_1 = "DomZoomDismissBack"
    var_148_1 = 0xc297
else
    switch (i)
        case nullptr
            void* eax_3 = sub_614800()
            CookieCheckFunction(eax_3)
            return eax_3
        case 1, 2
            data_b7d424 = 1
            CookieCheckFunction(i)
            return i
        case 3
            int32_t edi_1 = data_b7f4b8
            int32_t* edx_1 = data_b7f4c0
            i = &data_b7d438
            
            if (edi_1 == 0)
                i = nullptr
            
            int32_t esi_1 = 0
            
            while (i != 0)
                if (i == edx_1)
                    int32_t j = 0
                    
                    if (*edx_1 s> 0)
                        int32_t eax_5 = 0
                        int32_t var_84_1 = 0
                        
                        do
                            uint32_t eax_6 = sub_5cba00(*(eax_5 + edx_1 + 0xc))
                            int32_t var_128_1 = 0xffffffff
                            int32_t var_124_1 = 0xffffffff
                            int128_t var_80 = 0x23.o
                            int128_t var_120
                            int128_t var_70_1 = var_120
                            int128_t var_110
                            int128_t var_60_1 = var_110
                            int128_t var_100
                            int128_t var_50_1 = var_100
                            int128_t var_f0
                            int128_t var_40_1 = var_f0
                            int128_t var_e0
                            int128_t var_30_1 = var_e0
                            var_80:0xc.d = esi_1 << 0x10 | j
                            int64_t var_a8_1 = 0
                            int32_t var_ac_1 = 3
                            int128_t* var_144_2 = &var_80
                            int128_t var_d0 = eax_6.o
                            int32_t var_9c_1 = 0
                            int64_t var_c0_1 = 0.q
                            sub_5cb7c0(&var_80, &var_d0, eax_6 + 0x258, eax_6)
                            edx_1 = data_b7f4c0
                            j += 1
                            eax_5 = var_84_1 + 0xc
                            var_84_1 = eax_5
                        while (j s< *edx_1)
                    
                    int32_t eax_11
                    eax_11.b = data_b7d428 == 3
                    data_b7f4c0 = 0
                    data_b7d424 = (eax_11 << 1) + 1
                    CookieCheckFunction((eax_11 << 1) + 1)
                    return (eax_11 << 1) + 1
                
                if (i != 0)
                    i = i + *i * 0xc + 8
                    
                    if (i == edi_1 + &data_b7d438)
                        break
                else
                    i = &data_b7d438
                
                esi_1 += 1
            
            var_144_1 = "ZoomGetPileIdx"
            var_148_1 = 0x2cc1

sub_63b870(i, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_148_1, 
    var_144_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
