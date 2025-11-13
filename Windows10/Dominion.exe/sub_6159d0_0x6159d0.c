// 函数: sub_6159d0
// 地址: 0x6159d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ecx
void* eax_2 = sub_6157b0(ecx)
int32_t ecx_1 = *(eax_2 + 0x1bc)
*(eax_2 + 0x1bc) = arg2
void* eax_3

if (ecx_1 == 6)
    eax_3 = sub_5ccef0(eax_2)
else if (ecx_1 != 0x3f1)
    eax_3 = sub_5cd880(eax_2, sub_5cc4b0(0, 0))
else
    eax_3 = sub_5cd3e0(eax_2)

int32_t* eax_8
int32_t ecx_8
int32_t var_e8_1
void var_d0
char const* const ecx_5

if (arg2 == 6)
    if (*(eax_2 + 0x1b4) != 0x600)
        char const* const var_e4_1 = "DomMoveToken"
        var_e8_1 = 0xc4e9
        ecx_5 = "gfx.token.type == TOKEN_TRADE_ROUTE"
    label_615ba5:
        sub_63b870(eax_3, &data_801800, ecx_5, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            var_e8_1, "DomMoveToken")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_5 = sub_5cc6c0(0x603)
    int32_t eax_6 = sub_5cd7d0(eax_2, eax_5)
    *(eax_2 + 0x1b8) = *(eax_5 + 0x1c28)
    eax_8, ecx_8 = sub_5cc540(&var_d0, *(eax_5 + 0x5c), 7, &var_d0, 0, 0, 0xffffffff, eax_6, 0)
else if (arg2 != 0x3f1)
    void* eax_11 = sub_5cc4b0(0, 0)
    int32_t eax_12 = sub_5cd7d0(eax_2, eax_11)
    *(eax_2 + 0x1b8) = *(eax_11 + 0x1c28)
    eax_8, ecx_8 = sub_5cc540(&var_d0, arg2, 7, &var_d0, 0, 0, 0xffffffff, eax_12, 0)
else
    uint32_t edx_4 = *(eax_2 + 0x1c4)
    
    if (edx_4 == 0xffffffff)
        char const* const var_e4_3 = "DomMoveToken"
        var_e8_1 = 0xc4f1
        ecx_5 = "gfx.token.owner != PLAYER_NONE"
        goto label_615ba5
    
    uint32_t eax_9 = sub_5cd0a0(eax_3, edx_4, eax_2, 0xffffffff)
    eax_8, ecx_8 = sub_5cc540(&var_d0, arg2, 0x13, &var_d0, 0, 0, *(eax_2 + 0x1c4), eax_9, 0)
int128_t var_70 = *eax_8
int128_t var_60 = *(eax_8 + 0x10)
int128_t var_50 = *(eax_8 + 0x20)
int128_t var_40 = *(eax_8 + 0x30)
int128_t var_30 = *(eax_8 + 0x40)
int128_t var_20 = *(eax_8 + 0x50)

if (arg3 == 0)
    int32_t var_e4_2 = ecx_8
    sub_5af980(ecx_8, *(eax_2 + 0x1b4))

uint32_t result = sub_5cb630(eax_2 + 0x258, &var_70)
CookieCheckFunction(result)
return result
