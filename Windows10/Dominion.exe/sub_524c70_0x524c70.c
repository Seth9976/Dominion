// 函数: sub_524c70
// 地址: 0x524c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t edi
int32_t var_cb0 = edi
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_1 = *(eax_3 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_4 + 0x17558) |= 2
int32_t var_c98[0x320]
memset(&var_c98, 0, 0xc84)
int32_t i_1
int32_t ecx_3
int32_t edx_2
i_1, ecx_3, edx_2 = sub_566920(edi)
void* var_18

for (int32_t i = i_1; i != 0; i = i_1)
    int32_t var_cb4_1 = ecx_3
    
    if (sub_568530(i_1, edx_2, i.w, 3) != 0)
        void* var_c9c_1 = nullptr
        void* var_ca0_1 = nullptr
        void* eax_7 = sub_573400()
        uint32_t ebx_1 = zx.d(i.w)
        int32_t eax_8 = *(eax_7 + 4)
        int32_t var_ca4 = eax_8
        
        if (ebx_1 u>= 0x320)
            sub_591930()
            eax_8 = var_ca4
        
        sub_582d10(eax_8, *(ebx_1 * 0x64 + eax_8 + 0x1a70), *(eax_7 + 4), i, 0x3ee, 0xb, 0x3ea, 3, 
            *(eax_7 + 0x28), *(eax_7 + 0x2c), *(eax_7 + 0x30), 0, 0, nullptr, 0, var_c9c_1, 
            var_ca0_1)
        break
    
    void* eax_6 = var_18
    
    if (eax_6 s>= 0x320)
        sub_591930()
        eax_6 = var_18
    
    var_c98[eax_6] = i
    var_18 += 1
    i_1, ecx_3, edx_2 = sub_566920(edi)

void* eax_9 = sub_573400()
*(eax_9 + 0xc)
*(eax_9 + 4)
uint32_t result = sub_582eb0(&var_c98, var_18, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
CookieCheckFunction(result)
return result
