// 函数: sub_4ae7a0
// 地址: 0x4ae7a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_cc8d5c

if (eax != 0)
    *(eax + 0x7694) = 0
    *(eax + 0x7698) = 0
    eax = sub_4d46e0(9, 0)
    void* edi_1 = data_cc8d5c
    
    if (edi_1 != 0)
        if (*(edi_1 + 0x5068) == 2)
            sub_4d46e0(7, 0)
            int32_t eax_1 = sub_4d46e0(5, 0)
            data_8db6b0 = 0x20
            void* eax_2 = sub_68caf0(eax_1, nullptr, "dom_msg_disconnected_header", 0)
            char* const esi_1 = &data_801800
            char const* const ecx_1
            
            if (eax_2 != 0)
                char* eax_3 = *eax_2
                ecx_1 = &data_801800
                
                if (eax_3 != 0)
                    ecx_1 = eax_3
            else
                ecx_1 = "dom_msg_disconnected_header"
            
            void* eax_5 =
                sub_68caf0(sub_63d8d0(&data_8db750, ecx_1), nullptr, "dom_msg_disconnected_body", 0)
            
            if (eax_5 != 0)
                char* eax_6 = *eax_5
                
                if (eax_6 != 0)
                    esi_1 = eax_6
            else
                esi_1 = "dom_msg_disconnected_body"
            
            sub_63d8d0(&data_8db754, esi_1)
            sub_63d8d0(&data_8db758, &data_801800)
            char** eax_7 = sub_63d8d0(&data_8db75c, &data_801800)
            data_8db760 = 0
            data_8db764 = 0
            *(edi_1 + 0x5044) = 8
            return eax_7
        
        char** eax_8 = data_8db664
        
        if (eax_8 == 0x7ea)
        label_4ae919:
            sub_4d46e0(7, 0)
            sub_4d46e0(5, 0)
            data_8db598 = 2
            int32_t eax_11 = sub_4d46e0(1, 0)
            data_8db660 = 3
            data_8db6b0 = 0x20
            void* eax_12 = sub_68caf0(eax_11, nullptr, "dom_msg_disconnected_header", 0)
            char* const esi_3 = &data_801800
            char const* const ecx_5
            
            if (eax_12 != 0)
                char* eax_13 = *eax_12
                ecx_5 = &data_801800
                
                if (eax_13 != 0)
                    ecx_5 = eax_13
            else
                ecx_5 = "dom_msg_disconnected_header"
            
            void* eax_15 =
                sub_68caf0(sub_63d8d0(&data_8db750, ecx_5), nullptr, "dom_msg_disconnected_body", 0)
            
            if (eax_15 != 0)
                char* eax_16 = *eax_15
                
                if (eax_16 != 0)
                    esi_3 = eax_16
            else
                esi_3 = "dom_msg_disconnected_body"
            
            sub_63d8d0(&data_8db754, esi_3)
            sub_63d8d0(&data_8db758, &data_801800)
            eax_8 = sub_63d8d0(&data_8db75c, &data_801800)
            data_8db760 = 0
            data_8db764 = 0
        else
            if (eax_8 != 0x7e3)
                goto label_4ae8e8
            
            void* eax_9 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
            
            if (sub_61dad0() != eax_9 + 0x353c)
                goto label_4ae919
            
            eax_8 = data_8db664
        label_4ae8e8:
            
            if (eax_8 == 9 || eax_8 == 7 || eax_8 == 0x13 || eax_8 == 0x1c)
                goto label_4ae919
            
            if (eax_8 == 0x10 && data_8dbf38 != 0)
                goto label_4ae919
        
        return eax_8

sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, 
    "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
