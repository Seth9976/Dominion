// 函数: sub_600830
// 地址: 0x600830
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1

if (data_b824dc == 0)
    int32_t* eax_1 = sub_4b9480()
    int32_t esi_1 = 0
    int32_t edi_1 = eax_1[0x46a]
    
    if (edi_1 s> 0)
        void* ecx = &eax_1[0x1a]
        
        do
            int32_t eax_2 = *ecx
            
            if (eax_2 == 0x3e9)
                goto label_600884
            
            if (eax_2 == 0x3ec)
                goto label_600884
            
            if (eax_2 == 0x3ed)
                goto label_600884
            
            esi_1 += 1
            ecx += 0x22c
        while (esi_1 s< edi_1)
    
    goto label_6008d5

label_600884:
int32_t* eax_3 = sub_4b9480()
eax_3[8] |= 1
void* eax_4 = data_cc8d5c

if (eax_4 != 0)
    int32_t edi_2 = *(eax_4 + 0x506c)
    int32_t* eax_5 = sub_4b9480()
    
    if (eax_5[7] - 0x64 u> 0x19)
        sub_63b5f0("==save game==")
        
        if (sub_4da3a0(eax_5, edi_2) != 0)
            TPI1::QueryTiForCVRecord(eax_5)
    
label_6008d5:
    
    if (arg2 != 2)
        return sub_6006c0(arg1, 1)
    
    eax_4 = data_cc8d5c
    
    if (eax_4 != 0)
        if (*(eax_4 + 0x5068) != 2)
            int32_t* eax_7 = sub_4b9480()
            
            if ((eax_7[8].b & 1) == 0)
                data_ccf6d8 = arg1
                data_8db6b0 = 0x21
                void* eax_8 = sub_68caf0(eax_7, nullptr, "dom_msg_confirm_undo_header", 0)
                char* const esi_3 = &data_801800
                char const* const ecx_5
                
                if (eax_8 != 0)
                    char* eax_9 = *eax_8
                    ecx_5 = &data_801800
                    
                    if (eax_9 != 0)
                        ecx_5 = eax_9
                else
                    ecx_5 = "dom_msg_confirm_undo_header"
                
                void* eax_11 = sub_68caf0(sub_63d8d0(&data_8db750, ecx_5), nullptr, 
                    "dom_msg_confirm_undo_body", 0)
                char const* const ecx_6
                
                if (eax_11 != 0)
                    char* eax_12 = *eax_11
                    ecx_6 = &data_801800
                    
                    if (eax_12 != 0)
                        ecx_6 = eax_12
                else
                    ecx_6 = "dom_msg_confirm_undo_body"
                
                void* eax_14 = sub_68caf0(sub_63d8d0(&data_8db754, ecx_6), nullptr, 
                    "dom_msg_confirm_undo_daily_ok", 0)
                
                if (eax_14 != 0)
                    char* eax_15 = *eax_14
                    
                    if (eax_15 != 0)
                        esi_3 = eax_15
                else
                    esi_3 = "dom_msg_confirm_undo_daily_ok"
                
                sub_63d8d0(&data_8db758, esi_3)
                char** result = sub_63d8d0(&data_8db75c, &data_801800)
                data_8db760 = sub_600a30
                data_8db764 = 0
                return result
        
        return sub_6006c0(arg1, 0)

sub_63b870(eax_4, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
