// 函数: sub_5208a0
// 地址: 0x5208a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1998)
__security_cookie
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_1 = *(eax_3 + 0xc)
char const* const var_24_1
int32_t var_20_1
char const* const var_1c_1
char* ecx_2

if (ecx_1 != 0xffffffff)
    int32_t eax_4 = *(eax_3 + 4)
    int32_t ecx_3 = ecx_1 * 0x5a30
    *(ecx_3 + eax_4 + 0x17558) |= 2
    int32_t var_c = *(sub_573400() + 0xc)
    int32_t var_10 = 2
    int32_t* var_3c_1 = &var_c
    int32_t* var_40 = &std::_Func_impl_no_alloc<class <lambda_b559ebfc309728db9d2c0c95027c6deb>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t* var_38_1 = &var_10
    int32_t** var_1c_2 = &var_40
    int32_t result
    int32_t ecx_4
    result, ecx_4 = sub_569b30(&var_40, &var_10, 0, var_40)
    
    if ((var_10.b & 1) == 0)
    label_520b63:
        
        if ((var_10.b & 2) != 0)
            int32_t var_1c_7 = ecx_4
            result = sub_561af0(sub_561e00(result, 0, 1, 0), 0, 1, 0)
        
        CookieCheckFunction(result)
        return result
    
    void* eax_8 = sub_573400()
    void* esi_1 = *(eax_8 + 4)
    eax_3 = sub_57da30(esi_1, 0x70d)
    int32_t edx_2 = 7
    void* esi_2 = esi_1 + 0x1594
    
    while (true)
        int32_t i = *esi_2
        
        if (i != 0x70d)
            if (*(esi_2 + 4) != 0x70d && i != eax_3)
                edx_2 += 1
                esi_2 += 0x10
                
                if (edx_2 s< 0x48)
                    continue
                
                goto label_520b9a
            
            if (i == 0)
            label_520b9a:
                var_1c_1 = "Prizes"
                var_20_1 = 0xbb
                var_24_1 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Cornucopia.cpp"
                ecx_2 = "where != CW_NONE"
                break
        
        int32_t edx_3 = 7
        eax_3 = *(eax_8 + 4) + 0x1594
        
        while (*eax_3 != i)
            if (*(eax_3 + 4) == i)
                break
            
            edx_3 += 1
            eax_3 += 0x10
            
            if (edx_3 s>= 0x48)
                edx_3 = 0
                break
        
        if (edx_3 == 0)
            goto label_520b9a
        
        void arg_70
        int32_t arg_cf8[0x320]
        __builtin_memcpy(&arg_cf8, sub_568780(&arg_70, edx_3, edx_3, &arg_70), 0xc84)
        int32_t eax_12 = sub_563590(0x102)
        
        if (eax_12 == 0)
            goto label_520abc
        
        int32_t arg_4
        int128_t arg_38
        int128_t arg_48
        int128_t arg_58
        
        if (arg3 == 0)
            arg_cf8[0] = eax_12
            arg3 = 1
        label_520abc:
            __builtin_memset(&arg_4, 0, 0x24)
            var_4.q = 0
            arg_38 = 0x51.o
            arg_48 = arg1.o
            arg_58 = arg2.o
            result, ecx_4 = sub_563a30(eax_12, &arg_38, 0xc)
        else
            if (arg3 s>= 0x320)
                sub_591930()
            
            __builtin_memset(&arg_4, 0, 0x24)
            var_4.q = 0
            arg_38 = 0x51.o
            char var_1c_4 = 0
            arg_48 = arg1.o
            int32_t var_20_2 = 0xc
            arg_cf8[arg3] = eax_12
            arg3 += 1
            arg_58 = arg2.o
            result, ecx_4 = sub_563c40(&arg_38, var_20_2, var_1c_4)
        
        if (result != 0)
            sub_56e9c0(1)
            void* eax_13 = sub_573400()
            result, ecx_4 = sub_583720(eax_13, *(eax_13 + 0xc), *(eax_13 + 4), result, 0x3eb, 
                nullptr, 0x476, 0, 0, 6)
        
        goto label_520b63
else
    var_1c_1 = "SetGainFlag"
    var_20_1 = 0x52
    var_24_1 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx_2 = "c.activePlayer != PLAYER_NONE"

sub_63b870(eax_3, &data_801800, ecx_2, var_24_1, var_20_1, var_1c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
