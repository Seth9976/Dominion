// 函数: sub_537ef0
// 地址: 0x537ef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_1c = __chkstk(0x1998)
void var_10
sub_561e00(__security_cookie ^ &var_10, 0, 2, 0)
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3
int32_t edx_1
eax_3, edx_1 = sub_573400()
int32_t ecx_2 = *(eax_3 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
var_4.q = 0
int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
*(ecx_3 + eax_4 + 0x17558) |= 2
int128_t arg_38 = 0x33.o
int128_t arg_48 = arg1.o
int128_t arg_58 = arg2.o
void arg_70
void arg_cf8
__builtin_memcpy(&arg_cf8, sub_568780(&arg_70, edx_1, 0x3ea, &arg_70), 0xc84)
int32_t* result = sub_563c40(&arg_38, 0xe, 1)

if (result != 0)
    void* eax_7 = sub_573400()
    int32_t ecx_4 = *(eax_7 + 4)
    int32_t var_1c_2 = ecx_4
    int32_t var_20_1 = 0
    *(*(eax_7 + 0xc) * 0x5a30 + ecx_4 + 0x1756c) = result
    uint32_t eax_8 = sub_568960(eax_7, 0, 0x3eb, 0)
    int32_t arg_1978 = 0
    sub_56f1a0(eax_8, &arg_cf8, 0x1c, 0)
    void* eax_9 = nullptr
    
    if (eax_8 s> 0)
        __builtin_memset(&arg_4, 0, 0x24)
        var_4.q = 0
        arg_38 = 0x34.o
        arg_48 = arg1.o
        arg_58 = arg2.o
        int32_t* eax_10 = sub_573400()
        int32_t arg_30 = *eax_10
        int32_t arg_34 = eax_10[4]
        int32_t ecx_7 = eax_10[3]
        int32_t* eax_11 = eax_10[1]
        int32_t edx_5
        
        if (ecx_7 != eax_11[0x673])
            edx_5 = ecx_7
        else
            edx_5 = eax_11[0x674]
        
        int32_t var_1c_3 = 2
        eax_9 = sub_623940(eax_11, &arg_30, eax_11, ecx_7, edx_5, ecx_7, eax_8, &arg_38, 0x2a)
    
    sub_565d30(eax_9, 0x3ea, result, 0x3eb, eax_9)
    void* eax_12 = sub_573400()
    result = *(eax_12 + 4)
    result[*(eax_12 + 0xc) * 0x168c + 0x5d5b] = 0

CookieCheckFunction(result)
return result
