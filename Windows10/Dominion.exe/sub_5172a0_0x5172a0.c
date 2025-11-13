// 函数: sub_5172a0
// 地址: 0x5172a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1014)
int32_t __saved_ebp
void* eax_1 = __security_cookie ^ &__saved_ebp
void* var_8 = eax_1
int32_t ecx = data_cca790
int32_t* edx_2

if (ecx != 2)
    eax_1 = data_cca780
    edx_2 = eax_1 + ((ecx + 0xa02) << 3)
else
    edx_2 = data_cca780 + 0x540 + (data_cca784 << 0xb)

char const* const var_1c
int32_t var_18
char const* const var_14
char* ecx_3

if (*edx_2 == 0x3e8)
    int32_t i = edx_2[1]
    int32_t* eax_3 = *(data_1597e0c + (((i s>> 4 | i) & data_1597e10) << 2))
    
    if (eax_3 == 0)
    label_517340:
        uint32_t eax_4 = sub_63b5f0("Couldn't add card categeory twist")
        CookieCheckFunction(eax_4)
        return eax_4
    
    while (i != *eax_3)
        eax_3 = eax_3[4]
        
        if (eax_3 == 0)
            goto label_517340
    
    if (eax_3 == 0xfffffffc)
        goto label_517340
    
    int32_t ecx_10 = eax_3[1]
    int32_t ebx_1 = 0
    int32_t eax_6 = eax_3[2]
    int32_t edi_1 = 0
    int32_t var_1018_1 = ecx_10
    
    if (eax_6 s<= 0)
        goto label_517340
    
    int32_t var_100c[0x3fb]
    
    while (true)
        eax_1 = sub_516fa0(*(ecx_10 + (edi_1 << 2)))
        int32_t esi_1 = *(eax_1 + 0x10)
        
        if (esi_1 != 0)
            int32_t eax_7 = sub_516f30(esi_1)
            int32_t ecx_13 = 0
            int32_t* edx_4 = eax_7 + 0xc
            
            while (true)
                if (*edx_4 == 2)
                    int32_t eax_9 = *(ecx_13 * 0x26c + eax_7 + 0x10)
                    
                    if (eax_9 != 0)
                        eax_1 = eax_9()
                        
                        if (eax_1.b == 0)
                            break
                else
                    ecx_13 += 1
                    edx_4 = &edx_4[0x9b]
                    
                    if (ecx_13 s< 4)
                        continue
                
                eax_1 = nullptr
                
                if (ebx_1 s> 0)
                    do
                        if (var_100c[eax_1] == esi_1)
                            goto label_5173e6
                        
                        eax_1 += 1
                    while (eax_1 s< ebx_1)
                
                var_100c[ebx_1] = esi_1
                ebx_1 += 1
                break
        
    label_5173e6:
        ecx_10 = var_1018_1
        edi_1 += 1
        
        if (edi_1 s>= eax_6)
            break
    
    if (ebx_1 == 0)
        goto label_517340
    
    if (ebx_1 s> 0)
        int32_t esi_2 = data_cc8de4
        int32_t edi_2 = data_cc8de0
        int32_t eax_10
        int32_t edx_5
        eax_10, edx_5 = __allmul(edi_2, esi_2, 0x4c957f2d, 0x5851f42d)
        bool c = eax_10 + data_cc8de8 u< eax_10
        data_cc8de0 = eax_10 + data_cc8de8
        data_cc8de4 = adc.d(edx_5, data_cc8dec, c)
        uint32_t eax_17 = sub_50b2a0(var_100c[modu.dp.d(
            0:(ror.d(esi_2 u>> 0xd ^ (edi_2 u>> 0x1b | esi_2 << 5), (esi_2 u>> 0x1b).b)), ebx_1)])
        CookieCheckFunction(eax_17)
        return eax_17
    
    var_14 = "RandomInt"
    var_18 = 0x107
    var_1c = "C:\x\ax2017\Engine\Random.cpp"
    ecx_3 = "maxPlusOne > 0"
else
    var_14 = "ThemePiece_CardCategoryTwist"
    var_18 = 0x1ddf
    var_1c = "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp"
    ecx_3 = "theme.piece == CTHEME_CARD"

sub_63b870(eax_1, &data_801800, ecx_3, var_1c, var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
