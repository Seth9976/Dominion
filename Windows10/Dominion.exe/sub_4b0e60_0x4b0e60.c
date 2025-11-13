// 函数: sub_4b0e60
// 地址: 0x4b0e60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = data_cc8d5c
void* eax

if (ecx != 0)
    int32_t* eax_1 = sub_4bb050(ecx + 0x507c, arg1)
    int32_t eax_2 = eax_1[0xc]
    
    if (eax_2 s< 0xb)
        return sub_4b0bf0()
    
    if (eax_2 s> 0x17)
        data_8db6b0 = 0x20
        void* eax_4 = sub_68caf0(eax_2, nullptr, "dom_msg_out_of_date_header", 0)
        char* const esi_2 = &data_801800
        char const* const ecx_2
        
        if (eax_4 != 0)
            char* eax_5 = *eax_4
            ecx_2 = &data_801800
            
            if (eax_5 != 0)
                ecx_2 = eax_5
        else
            ecx_2 = "dom_msg_out_of_date_header"
        
        void* eax_7 =
            sub_68caf0(sub_63d8d0(&data_8db750, ecx_2), nullptr, "dom_msg_app_out_of_date_body", 0)
        
        if (eax_7 != 0)
            char* eax_8 = *eax_7
            
            if (eax_8 != 0)
                esi_2 = eax_8
        else
            esi_2 = "dom_msg_app_out_of_date_body"
        
        sub_63d8d0(&data_8db754, esi_2)
        sub_63d8d0(&data_8db758, &data_801800)
        char** eax_9 = sub_63d8d0(&data_8db75c, &data_801800)
        data_8db760 = 0
        data_8db764 = 0
        return eax_9
    
    eax = data_cc8d5c
    
    if (eax != 0)
        if (*(eax + 0x7694) != 0 && *(eax + 0x7698) == *eax_1)
            *(eax + 0x7694) = 0
            *(eax + 0x7698) = 0
            sub_4d46e0(9, 0)
            eax = data_cc8d5c
        
        if (eax_1[0x46e] == 0)
            data_8db660 = 0x1c
            int32_t ecx_4 = *eax_1
            
            if (ecx_4 == 0)
            label_4b102b:
                
                if (eax != 0)
                    goto label_4b0fa7
            else
                int32_t var_8 = ecx_4
                
                if (eax != 0)
                    if (*(eax + 0x18) == 3)
                        int32_t ecx_5 = *(eax + 0x14)
                        void* edx_2 = data_147abf4
                        
                        if (ecx_5 != 0)
                            uint32_t esi_3 = zx.d(ecx_5.w)
                            
                            if (esi_3 u< *(edx_2 + 4))
                                void* esi_5 = esi_3 * 0x64 + *edx_2
                                
                                if (*(esi_5 + 0x60) == ecx_5 && esi_5 != 0)
                                    int32_t var_18_4 = 0xf42af
                                    sub_689e00(eax, 4, esi_5 + 0x50)
                                    sub_689be0(&var_8, 4, esi_5 + 0x50, &var_8)
                                    eax = data_cc8d5c
                    
                    goto label_4b102b
        else if (eax != 0)
            *(eax + 0x5044) = 6
        label_4b0fa7:
            *(eax + 0x5070) = 2
            *(eax + 0x5074) = arg1
            return eax

sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, 
    "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
