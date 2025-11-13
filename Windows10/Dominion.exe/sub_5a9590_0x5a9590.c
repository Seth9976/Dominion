// 函数: sub_5a9590
// 地址: 0x5a9590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
void* var_c = __security_cookie ^ &__saved_ebp
char* edi = arg3
void* eax_1
eax_1.b = *edi
char const* const var_44
int32_t var_40
char const* const var_3c
char* ecx

if (eax_1.b != *arg2)
label_5a96ef:
    var_3c = "CapsuleDraw"
    var_40 = 0xdbf
    var_44 = "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp"
    ecx = "c0 == c1"
else
    eax_1.b = edi[1]
    
    if (eax_1.b != arg2[1])
        goto label_5a96ef
    
    eax_1.b = edi[2]
    
    if (eax_1.b != arg2[2])
        goto label_5a96ef
    
    eax_1.b = edi[3]
    
    if (eax_1.b != arg2[3])
        goto label_5a96ef
    
    eax_1 = data_cc8dc0
    
    if (eax_1 != 0)
        int32_t eax_2 = *(eax_1 + 0x3c)
        float arg_10
        
        if (eax_2 == 4 || eax_2 == 5)
            float var_28 = arg7
            float var_24 = arg8
            float var_20 = arg_10
            float var_1c = arg9
            var_28.o = var_28.o
            uint32_t eax_7 = sub_682f00(&var_28, edi)
            CookieCheckFunction(eax_7)
            return eax_7
        
        float xmm0 = arg4 + arg4
        int32_t* edx = &arg_10
        int32_t var_3c_1 = 0
        
        if (eax_2 == 3)
            int32_t* var_44_1 = arg3
            uint32_t eax_3 = sub_5a93d0(eax_2, edx, &arg7, arg3, edi, xmm0, arg6)
            CookieCheckFunction(eax_3)
            return eax_3
        
        int32_t* var_44_3 = arg3
        uint32_t eax_4
        int32_t edx_1
        eax_4, edx_1 = sub_5a93d0(eax_2, edx, &arg7, arg3, edi, xmm0, arg6)
        uint32_t eax_5
        int32_t edx_2
        eax_5, edx_2 = sub_5a9030(eax_4, edx_1, arg6, arg4, *edi, arg7, arg8)
        uint32_t eax_6 = sub_5a9030(eax_5, edx_2, arg6, arg5, *arg2, arg_10, arg9)
        CookieCheckFunction(eax_6)
        return eax_6
    
    var_3c = "GetLocalSettings"
    var_40 = 0x5fb
    var_44 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
    ecx = "gGameSettings.localSettings"

sub_63b870(eax_1, &data_801800, ecx, var_44, var_40, var_3c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
