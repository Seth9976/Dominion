// 函数: sub_747dd0
// 地址: 0x747dd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float xmm0 = data_1593c6c
int32_t var_f8 = 0x3f800000
float xmm2_2 = (data_1593c70 ^ (data_8937c0.o).d) * xmm0
int32_t var_d8 = 0
float var_f4 = xmm0
float var_fc = (data_1593c74 ^ (data_8937c0.o).d) * xmm0
int128_t xmm1_3 = data_893730
int128_t var_80 = xmm2_2.o
int128_t var_60 = 0.o
int128_t var_50 = xmm1_3
int32_t ecx
int32_t var_120 = ecx
data_1512454
int128_t var_40 = data_7ff530
int32_t var_a4 = 0
int128_t var_30 = xmm1_3
int128_t var_70 = zx.o(0)
void var_110
void var_98
sub_699c40(&var_98, &data_7ffb14, 0f, data_8c4634, 0, 0, nullptr, var_110, xmm2_2)
sub_7461f0()
int32_t var_118_2
uint32_t eax_2
int32_t var_108
int32_t var_104
int32_t* ecx_2

if (data_1513460.b != 0 || data_1513462 != 0)
    sub_63c270(&var_108)
    eax_2 = sub_747370(var_108, var_104)
    PSTR lpCursorName
    float result
    
    if (eax_2 == 0xffffffff)
    label_747fd1:
        ecx_2 = &var_108
    label_747fd5:
        result = sub_63c270(ecx_2)
        
        if (result.b == 0)
            CookieCheckFunction(result)
            return result
        
        lpCursorName = 0x7f00
    label_747fec:
        result = SetCursor(LoadCursorA(nullptr, lpCursorName))
        CookieCheckFunction(result)
        return result
    
    if (eax_2 u> 7)
        char const* const var_114_5 = "UIEditorUpdate"
        var_118_2 = 0x45e
    else
        switch (eax_2)
            case 0, 7
            label_747f44:
                result = sub_63c270(&var_108)
                
                if (result.b == 0)
                    CookieCheckFunction(result)
                    return result
                
                lpCursorName = 0x7f82
                goto label_747fec
            case 1, 6
            label_747fc1:
                result = sub_63c270(&var_108)
                
                if (result.b == 0)
                    CookieCheckFunction(result)
                    return result
                
                lpCursorName = 0x7f84
                goto label_747fec
            case 2, 5
            label_747f5f:
                result = sub_63c270(&var_108)
                
                if (result.b == 0)
                    CookieCheckFunction(result)
                    return result
                
                lpCursorName = 0x7f83
                goto label_747fec
            case 3, 4
            label_747f77:
                result = sub_63c270(&var_108)
                
                if (result.b == 0)
                    CookieCheckFunction(result)
                    return result
                
                lpCursorName = 0x7f85
                goto label_747fec
else
    ecx_2 = &var_108
    
    if (data_1513460:1.b == 0)
        goto label_747fd5
    
    sub_63c270(ecx_2)
    eax_2 = sub_747970(var_108, var_104)
    
    if (eax_2 == 0xffffffff)
        goto label_747fd1
    
    if (eax_2 u> 7)
        char const* const var_114_2 = "UIEditorUpdate"
        var_118_2 = 0x484
    else
        switch (eax_2)
            case 0, 7
                goto label_747f44
            case 1, 6
                goto label_747fc1
            case 2, 5
                goto label_747f5f
            case 3, 4
                goto label_747f77
sub_63b870(eax_2, &data_801800, "Halt", "C:\x\ax2017\Engine\Editor\UIEditor.cpp", var_118_2, 
    "UIEditorUpdate")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
