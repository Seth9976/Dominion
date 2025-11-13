// 函数: sub_67bf00
// 地址: 0x67bf00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_54
int32_t eax_1 = __security_cookie ^ &var_54
int32_t var_60
char const* const ecx_1

if (arg2 s>= 0)
    if (arg2 s< arg3)
        int32_t ecx
        char* edx
        int32_t eax_2 = sub_66b2b0(eax_1, edx, ecx, 0xffffffff)
        
        if (eax_2 == 0)
            *arg1 = data_bf21e8
            arg1[1] = data_bf21f8
            CookieCheckFunction(arg1)
            return arg1
        
        uint32_t eax_4 = sub_64e7a0(eax_2)
        int32_t var_5c_1 = 0
        void var_50
        void var_2c
        void var_1c
        int128_t* eax_5 = sub_656980(eax_4, arg2, eax_4, &var_50, &var_1c, &var_2c)
        *arg1 = *eax_5
        arg1[1] = eax_5[1]
        CookieCheckFunction(arg1)
        return arg1
    
    char const* const var_5c_2 = "UI2GetTransformSized"
    var_60 = 0x5b92
    ecx_1 = "idx < count"
else
    char const* const var_5c = "UI2GetTransformSized"
    var_60 = 0x5b91
    ecx_1 = "idx >= 0"

sub_63b870(eax_1, &data_801800, ecx_1, "C:\x\ax2017\Engine\UI2.cpp", var_60, "UI2GetTransformSized")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
