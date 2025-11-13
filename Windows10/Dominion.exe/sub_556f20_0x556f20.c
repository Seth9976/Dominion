// 函数: sub_556f20
// 地址: 0x556f20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1958)
__security_cookie
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
int32_t var_c
int32_t* result = sub_562880(arg2, arg1, var_c)

if (result != 0)
    void* eax_5 = sub_573400()
    uint32_t esi_1 = zx.d(result.w)
    int32_t ecx_4 = *(eax_5 + 0xc)
    void* edi = *(eax_5 + 4)
    int32_t var_10 = ecx_4
    
    if (esi_1 u>= 0x320)
        sub_591930()
        ecx_4 = var_10
    
    int32_t eax_6 = esi_1 * 0x64
    sub_576e90(eax_6, edi, &var_10, ecx_4, *(eax_6 + edi + 0x1a4c), 0)
    uint32_t arg_8[0xa]
    result = (*sub_576c00(&arg_8, var_10)).d
    int32_t* result_1 = result
    
    if (result != 0)
        int32_t edi_1 = 0
        int32_t arg_cb0 = 0
        var_10 = 0
        
        if (result s> 0)
            int32_t arg_30[0x320]
            int32_t esi_4
            
            do
                void* eax_8 = sub_573400()
                result = sub_5887c0(eax_8, *(eax_8 + 0xc), *(eax_8 + 4), 0)
                
                if (result == 0)
                    break
                
                int128_t* eax_9 = sub_56b800()
                void* eax_10 = sub_573400()
                int32_t var_1c_2 = 0
                int32_t* result_2 = result
                result = sub_5820c0(eax_10, *(eax_10 + 0xc), *(eax_10 + 4), result_2, 0x3eb, eax_9, 
                    0xb, 4, *(eax_10 + 0x28), *(eax_10 + 0x2c), 0, 1)
                
                if (edi_1 s>= 0x320)
                    result = sub_591930()
                
                arg_30[edi_1] = result_2
                esi_4 = var_10 + 1
                edi_1 = arg_cb0 + 1
                var_10 = esi_4
                arg_cb0 = edi_1
            while (esi_4 s< result_1)
            
            if (edi_1 != 0)
                int32_t arg_cb8 = 4
                void arg_cbc
                memcpy(&arg_cbc, &arg_30, edi_1 << 2)
                int32_t arg_193c = edi_1
                result = sub_56bba0(&arg_cb8, 0, sub_557120, &arg_cb8, 1, 2)

CookieCheckFunction(result)
return result
