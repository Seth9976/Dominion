// 函数: sub_5cd0a0
// 地址: 0x5cd0a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = arg2
uint32_t var_74 = eax_2
int32_t var_f0
char const* const ecx

if (*(arg3 + 0x1b94) == 0)
    int32_t i = arg4
    uint32_t result = 0
    int32_t* ecx_2 = sub_5cc5e0(eax_2) + 0x4084
    int32_t eax_4 = *ecx_2
    
    if (i != 0xffffffff)
        if (eax_4 != 0)
            while (i != 0)
                eax_2 = sub_5cba00(*ecx_2)
                
                if (eax_2 == arg3)
                    char const* const var_ec_3 = "PlayerAreaAdd"
                    var_f0 = 0xc72
                    ecx = "&curGfx != &gfx"
                    goto label_5cd302
                
                if (*(eax_2 + 0x1b98) != result)
                    char const* const var_ec_2 = "PlayerAreaAdd"
                    var_f0 = 0xc73
                    ecx = "curGfx.index == slot"
                    goto label_5cd302
                
                ecx_2 = eax_2 + 0x1b94
                result += 1
                i -= 1
                
                if (*ecx_2 == 0)
                    break
        
        goto label_5cd111
    
    if (eax_4 == 0)
    label_5cd111:
        *(arg3 + 0x1b94) = *ecx_2
        *ecx_2 = *(arg3 + 0x1c28)
        int32_t edi_1 = result + 1
        *(arg3 + 0x1b98) = result
        eax_2 = *(arg3 + 0x2c)
        
        switch (eax_2)
            case 0
                *(arg3 + 0xa4) = 0x3f1
            label_5cd1ba:
                int32_t eax_8 = *(arg3 + 0x1b94)
                
                if (eax_8 == 0)
                label_5cd2ad:
                    CookieCheckFunction(result)
                    return result
                
                while (true)
                    eax_2 = sub_5cba00(eax_8)
                    
                    if (eax_2 == arg3)
                        char const* const var_ec_6 = "PlayerAreaAdd"
                        var_f0 = 0xc96
                        ecx = "&curGfx != &gfx"
                        break
                    
                    *(eax_2 + 0x1b98) += 1
                    
                    if (*(eax_2 + 0x1b98) != edi_1)
                        char const* const var_ec_5 = "PlayerAreaAdd"
                        var_f0 = 0xc98
                        ecx = "curGfx.index == slot"
                        break
                    
                    if (*(eax_2 + 0x2c) == 7)
                        char const* const var_ec_4 = "PlayerAreaAdd"
                        var_f0 = 0xc99
                        ecx = "curGfx.type != DOMGFX_ARROW"
                        break
                    
                    void var_bc
                    memset(&var_bc, 0, 0x40)
                    uint32_t var_d0_1 = var_74
                    int32_t var_d4_1 = 0
                    int32_t var_cc_1 = edi_1
                    int32_t var_c0_1 = 0
                    uint32_t var_7c_1 = eax_2
                    int128_t var_70 = 0x1e.o
                    int128_t var_60_1 = 0.o
                    int128_t var_b8
                    int128_t var_50_1 = var_b8
                    int128_t var_a8
                    int128_t var_40_1 = var_a8
                    int128_t var_98
                    int128_t var_30_1 = var_98
                    int128_t var_88
                    int128_t var_20_1 = var_88
                    sub_5cb630(eax_2 + 0x258, &var_70)
                    eax_8 = *(eax_2 + 0x1b94)
                    edi_1 += 1
                    
                    if (eax_8 == 0)
                        goto label_5cd2ad
            case 3, 6, 7
                goto label_5cd1ba
            case 4
                *(arg3 + 0x1bc) = 0x3f1
                goto label_5cd1ba
            default
                char const* const var_ec_7 = "PlayerAreaAdd"
                var_f0 = 0xc8f
                ecx = "Halt"
    else
        while (true)
            eax_2 = sub_5cba00(eax_4)
            
            if (eax_2 == arg3)
                char const* const var_ec_1 = "PlayerAreaAdd"
                var_f0 = 0xc67
                ecx = "&curGfx != &gfx"
                break
            
            ecx_2 = eax_2 + 0x1b94
            result += 1
            eax_4 = *ecx_2
            
            if (eax_4 == 0)
                goto label_5cd111
else
    char const* const var_ec = "PlayerAreaAdd"
    var_f0 = 0xc5d
    ecx = "gfx.next == DATAID_NULL"

label_5cd302:
sub_63b870(eax_2, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_f0, 
    "PlayerAreaAdd")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
