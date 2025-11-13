// 函数: sub_5f1b90
// 地址: 0x5f1b90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* i = data_b809e0

for (void* esi_1 = data_b809e4 * 0x1c30 + i; i u< esi_1; i += 0x1c30)
    if ((*(i + 0x1c28) & 0xffff0000) != 0)
        while (i != 0xffffffff)
            if (*(i + 0x2c) == 3 && *(i + 0x58) == arg1 && *(i + 0x5c) == 0x474
                    && *(i + 0x68) == arg2)
                goto label_5f1d25
            
            i += 0x1c30
            
            if (i u>= esi_1)
                break
            
            while ((*(i + 0x1c28) & 0xffff0000) == 0)
                i += 0x1c30
                
                if (i u>= esi_1)
                    goto label_5f1c31
        
        break

label_5f1c31:
void* i_1 = sub_637730(&data_b809e0)
*(i_1 + 0x2c) = 3
*(i_1 + 0x58) = arg1
*(i_1 + 0x30) = 0
*(i_1 + 0x5c) = 0x474
*(i_1 + 0x68) = arg2
*(i_1 + 0x70) = 0
void* eax_2 = sub_5de8b0(arg2)
int32_t var_e4
char const* const var_e0
char* ecx_2

if (eax_2 == 0)
    var_e0 = "LookupCard"
    var_e4 = 0x3d96
    ecx_2 = &data_871964
label_5f1d47:
    sub_63b870(eax_2, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_e4, 
        var_e0)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(eax_2 + 0x2c) != 0)
    var_e0 = "DomCreateCardPile"
    var_e4 = 0x7684
    ecx_2 = "gfxCard.type == DOMGFX_CARD"
    goto label_5f1d47

*(eax_2 + 0xd4) = *(i_1 + 0x1c28)
int32_t var_cc
memset(&var_cc, 0, 0x60)
var_cc = 0x1d
int32_t var_c8_1 = arg2
int32_t var_c4_1 = arg1
int32_t var_c0_1 = 0
int32_t var_b4_1 = 0
int128_t var_6c = var_cc.o
int128_t var_bc
int128_t var_5c_1 = var_bc
int128_t var_ac
int128_t var_4c_1 = var_ac
int128_t var_9c
int128_t var_3c_1 = var_9c
int128_t var_8c
int128_t var_2c_1 = var_8c
int128_t var_7c
int128_t var_1c_1 = var_7c
sub_5cb630(i_1 + 0x258, &var_6c)
i = i_1
label_5f1d25:
CookieCheckFunction(i)
return i
