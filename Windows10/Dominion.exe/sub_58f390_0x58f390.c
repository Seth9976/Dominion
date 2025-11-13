// 函数: sub_58f390
// 地址: 0x58f390
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i_1 = 0
int32_t* ebx = arg1 + 0x9d0
int32_t* var_10 = ebx
int32_t i

do
    int32_t eax_1 = ebx[-2]
    
    if (eax_1 == 0)
        break
    
    int32_t ecx = *ebx
    
    if (ecx != 0)
        void* esi_1 = data_cce9c0
        int32_t eax_2 = 0
        
        if (ecx s>= 0)
            eax_2 = ecx
        
        int32_t edi_1 = 0xa - data_cce9b4
        
        if (eax_2 s< edi_1)
            edi_1 = eax_2
        
        if (edi_1 != 0)
            while (*(esi_1 + 0x2588) != 0 || *(esi_1 + 0xc80) != 0 || *(esi_1 + 0x1904) != 0)
                int32_t eax_3
                int32_t edx_2
                eax_3, edx_2 = sub_58dcc0(eax_2, data_cce9bc, esi_1, 1)
                void* eax_4 = sub_571b30(edx_2, data_cce9b0)
                int32_t ecx_5 = (*(eax_4 + 0x98) & 0x7f000400) | (*(eax_4 + 0x9c) & 0x940)
                int32_t eax_8
                char edx_4
                
                if (ecx_5 == 0)
                    int32_t var_20_1 = ecx_5
                    edx_4:eax_8 = sx.q(edx_2)
                
                if (ecx_5 != 0 || (eax_8 + zx.d(edx_4)) s>> 8 != eax_1)
                    eax_2 = *(esi_1 + 0x3e8c)
                    
                    if (eax_2 s>= 0x320)
                        sub_63b870(eax_2, &data_801800, "deck.numRejects < MAX_CARDS", 
                            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x4140, 
                            "RandomizerDeck_Reject")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    *(esi_1 + (eax_2 << 3) + 0x258c) = eax_3
                    *(esi_1 + (eax_2 << 3) + 0x2590) = edx_2
                    *(esi_1 + 0x3e8c) += 1
                else
                    eax_2 = sub_58efc0(edx_2)
                    edi_1 -= 1
                
                if (edi_1 == 0)
                    break
            
            sub_58dd90(esi_1)
            ebx = var_10
    
    ebx = &ebx[4]
    i = i_1 + 1
    var_10 = ebx
    i_1 = i
while (i s< 0x20)
int32_t esi_4 =
    *(arg1 + 0xbe8) + *(arg1 + 0xbf0) + *(arg1 + 0xbe0) + *(arg1 + 0xbd8) + *(arg1 + 0xbd0)
int32_t ecx_16 = *(arg1 + 0xbcc)
int32_t eax_12 = ecx_16

if (ecx_16 s<= esi_4)
    eax_12 = esi_4

if (eax_12 s> 4)
    esi_4 = 4
else if (ecx_16 s> esi_4)
    esi_4 = ecx_16

int32_t* eax_16 = sub_58df70(
    sub_58df70(
        sub_58df70(sub_58df70(eax_12, esi_4, arg1 + 0xbd0, 0x400, 0), esi_4, arg1 + 0xbd8, 
            0x20000000, 0), 
        esi_4, arg1 + 0xbe0, 0x8000000, 0), 
    esi_4, arg1 + 0xbe8, 0x10000000, 0)
int32_t* eax_17 = sub_58df70(eax_16, esi_4, arg1 + 0xbf0, 0, 0x100)

if (*(arg1 + 0xbf8) != 0)
    eax_17 = sub_58df70(eax_17, 4, 0x800180, 0, 0x40)

if (*(arg1 + 0xbf9) != 0)
    eax_17 = sub_58df70(eax_17, 4, 0x800180, 0, 0x800)

int32_t* eax_18 = sub_58df70(eax_17, esi_4, arg1 + 0xbc8, 0, 0)
int128_t var_38
__builtin_memcpy(&var_38, 
    "\x01\x00\x00\x00\x08\x00\x00\x00\x10\x00\x00\x00\x20\x00\x00\x00\x40\x00\x00\x00", 0x14)
return sub_58f190(eax_18, &var_38, arg1, 5)
