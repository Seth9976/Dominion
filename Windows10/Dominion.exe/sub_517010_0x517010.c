// 函数: sub_517010
// 地址: 0x517010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x142c)
void var_8
int32_t eax_1 = __security_cookie ^ &var_8
int32_t arg_1420 = eax_1
int32_t ecx = data_cca790
int32_t* edx_2

if (ecx != 2)
    eax_1 = data_cca780
    edx_2 = eax_1 + ((ecx + 0xa02) << 3)
else
    edx_2 = data_cca780 + 0x540 + (data_cca784 << 0xb)

if (*edx_2 != 0x3e8)
    sub_63b870(eax_1, &data_801800, "theme.piece == CTHEME_CARD", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x1d9b, 
        "ThemePiece_CardCategory2Cards")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t edx_4 = edx_2[1]

for (int32_t* i = *(data_1597e0c + (((edx_4 s>> 4 | edx_4) & data_1597e10) << 2)); i != 0; i = i[4])
    if (edx_4 == *i)
        if (i != 0xfffffffc)
            int32_t ecx_9 = i[2]
            void* const __return_addr_1 = nullptr
            int32_t esi_1 = i[1]
            int32_t ebx_1 = 0
            int32_t eax_5 = 0
            int32_t arg_18 = esi_1
            __builtin_memset(&__return_addr, 0, 8)
            
            if (ecx_9 s> 0)
                int32_t edx_5 = data_ccb414
                int32_t arg_1c[0x100]
                int32_t arg_41c[0x401]
                
                do
                    int32_t j = *(esi_1 + (eax_5 << 2))
                    int32_t* eax_7 = *(data_1597e00 + (((j s>> 4 | j) & data_1597e04) << 2))
                    void* eax_8
                    
                    if (eax_7 == 0)
                    label_51711b:
                        eax_8 = nullptr
                    else
                        while (j != *eax_7)
                            eax_7 = eax_7[4]
                            
                            if (eax_7 == 0)
                                goto label_51711b
                        
                        eax_8 = &eax_7[1]
                    
                    int32_t ecx_14 = *eax_8
                    int32_t eax_9 = *(eax_8 + 4)
                    void* esi_2 = &arg_1c[__return_addr_1 * 2]
                    void* __return_addr_2 = __return_addr_1 + 1
                    var_4 = ecx_14
                    int32_t edi_1 = 0
                    *esi_2 = ebx_1
                    
                    if (eax_9 s> 0)
                        do
                            int32_t esi_3 = *(ecx_14 + (edi_1 << 2))
                            int32_t eax_10 = 0
                            
                            if (edx_5 s> 0)
                                do
                                    if (*((eax_10 << 2) + &data_cca794) == esi_3)
                                        int32_t eax_12 = *(sub_571b30(esi_3, 0x17) + 0x9c) & 0x800
                                        
                                        if (eax_12 == 0 && (
                                                *(sub_571b30(esi_3, eax_12 + 0x17) + 0x9c) & 0x40) == 0)
                                            arg_41c[ebx_1] = esi_3
                                            ebx_1 += 1
                                        
                                        ecx_14 = var_4
                                        edx_5 = data_ccb414
                                        break
                                    
                                    eax_10 += 1
                                while (eax_10 s< edx_5)
                            
                            edi_1 += 1
                        while (edi_1 s< eax_9)
                    
                    __return_addr_1 = __return_addr
                    bool cond:0_1 = ebx_1 - *esi_2 s>= 2
                    *(esi_2 + 4) = ebx_1
                    
                    if (cond:0_1)
                        __return_addr_1 = __return_addr_2
                    
                    eax_5 = arg1 + 1
                    esi_1 = arg_18
                    __return_addr = __return_addr_1
                    arg1 = eax_5
                while (eax_5 s< ecx_9)
                
                if (__return_addr_1 != 0)
                    uint32_t eax_18 = sub_63ed10(&data_cc8de0, __return_addr_1)
                    int32_t edx_8 = arg_1c[eax_18 * 2]
                    int32_t eax_21 = arg_1c[eax_18 * 2 + 1] - edx_8
                    void* ebx_2 = &arg_41c[edx_8]
                    int32_t* eax_22
                    int32_t edx_10
                    eax_22, edx_10 = sub_63eda0(eax_21, ebx_2, &data_cc8de0, eax_21, 2)
                    
                    for (int32_t j_1 = 0; j_1 s< 2; j_1 += 1)
                        int32_t edi_2 = *(ebx_2 + (j_1 << 2))
                        eax_22, edx_10 = sub_50a6a0(eax_22, edx_10, edi_2, 2, 0)
                        
                        if (eax_22.b != 0)
                            eax_22, edx_10 = sub_58ffd0(&data_cca794, edi_2)
                    
                    CookieCheckFunction(eax_22)
                    return eax_22
        
        break

uint32_t eax_3 = sub_63b5f0("Couldn't add card categeory cards")
CookieCheckFunction(eax_3)
return eax_3
