// 函数: sub_4b0bf0
// 地址: 0x4b0bf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

data_8db6b0 = 0x20
int32_t eax
void* eax_1 = sub_68caf0(eax, nullptr, "dom_msg_out_of_date_header", 0)
char* const esi = &data_801800
char const* const ecx

if (eax_1 != 0)
    char* eax_2 = *eax_1
    ecx = &data_801800
    
    if (eax_2 != 0)
        ecx = eax_2
else
    ecx = "dom_msg_out_of_date_header"

void* eax_4 = sub_68caf0(sub_63d8d0(&data_8db750, ecx), nullptr, "dom_msg_game_out_of_date_body", 0)

if (eax_4 != 0)
    char* eax_5 = *eax_4
    
    if (eax_5 != 0)
        esi = eax_5
else
    esi = "dom_msg_game_out_of_date_body"

sub_63d8d0(&data_8db754, esi)
sub_63d8d0(&data_8db758, &data_801800)
char** result = sub_63d8d0(&data_8db75c, &data_801800)
data_8db760 = 0
data_8db764 = 0
return result
