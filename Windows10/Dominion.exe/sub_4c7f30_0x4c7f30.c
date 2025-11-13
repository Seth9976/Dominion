// 函数: sub_4c7f30
// 地址: 0x4c7f30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
int32_t var_8_1 = arg3
void* ebx = nullptr
void* esi = &data_19e57dc

while (true)
    int32_t edi_1
    
    if (*esi != "tblGames" || *(esi - 4) != arg3 || *(esi + 4) != ebx || *(esi + 8) != 0)
    label_4c7f8a:
        edi_1 = sub_67be20(ebx)
        *(esi + 0x1c) = edi_1
        
        if (edi_1 != 0)
            *esi = "tblGames"
            *(esi - 4) = var_8_1
            *(esi + 4) = ebx
            *(esi + 8) = 0
    else
        edi_1 = *(esi + 0x1c)
        
        if (edi_1 == 0)
            goto label_4c7f8a
        
        uint32_t eax = zx.d(edi_1.w)
        
        if (eax u>= data_c23bac || *(eax * 0x18d0 + data_c23ba8 + 0x18c8) != edi_1)
            goto label_4c7f8a
    
    void* ecx_2 = data_8dbfb8 * 7 + ebx
    int32_t eax_6
    
    if (arg4 != 1)
        if (ecx_2 s< data_8dc0bc)
            eax_6 = *((ecx_2 << 2) + &data_8dbfbc)
        else
            eax_6 = 0
    else if (ecx_2 s< data_8dc140)
        eax_6 = *((ecx_2 << 2) + &data_8dc0c0)
    else
        eax_6 = 0
    
    if (eax_6 != 0)
        void* ecx_3 = data_cc8d5c
        
        if (ecx_3 == 0)
            sub_63b870(eax_6, &data_801800, "gClient", 
                "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t* eax_7 = sub_4bb050(ecx_3 + 0x507c, eax_6)
        
        if (edi_1 != 0)
            *eax_7
            sub_4c75d0(&eax_7[2], arg4)
    else if (edi_1 != 0)
        uint32_t eax_8 = sub_64e7a0(edi_1)
        sub_665db0(eax_8, &data_8dc158, eax_8, 0x3f800000, 0xffffffff, 0)
    
    esi += 0x24
    ebx += 1
    
    if (esi s>= 0x19e58d8)
        break
    
    arg3 = var_8_1

int32_t esi_3 = (data_8dc140 + 6) s/ 7

if (esi_3 s< 1)
    esi_3 = 1

if (arg4 == 0)
    esi_3 = (data_8dc0bc + 6) s/ 7
    
    if (esi_3 s< 1)
        esi_3 = 1

if (data_8dbfb8 != 0)
    uint32_t eax_11 = sub_64e7a0(var_8_1)
    sub_665db0(eax_11, &data_8dbdc4, eax_11, 0x3f800000, 0xffffffff, 0)

void* result = esi_3 - 1

if (data_8dbfb8 s>= result)
    return result

uint32_t eax_12 = sub_64e7a0(var_8_1)
return sub_665db0(eax_12, &data_8dbdd0, eax_12, 0x3f800000, 0xffffffff, 0)
