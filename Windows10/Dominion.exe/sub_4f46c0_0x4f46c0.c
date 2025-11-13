// 函数: sub_4f46c0
// 地址: 0x4f46c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764c2d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi_1 = *fsbase->ThreadLocalStoragePointer + 0xf010
data_cc8dd8 = *esi_1
int32_t var_1c = 0
int16_t var_18 = 0
int32_t eax_5 = sub_4f4670(arg1)
uint32_t result

if (eax_5.b == 0)
label_4f485e:
    *esi_1 = data_cc8dd8
    data_cc8dd8 = 0
    int32_t* eax_12 = sub_4ede20(arg2, 0)
    result = eax_12[2]
    
    if (result == 0)
        data_1938e6c += 1
        result = operator new(0xe4)
        uint32_t result_2 = result
        int32_t var_8_3 = 2
        memset(result, 0, 0xe4)
        *(result + 0xd8) = 4
        int32_t var_2c_1 = 4
        int32_t var_40_4 = 0x150
        int32_t eax_14 = sub_7597a2()
        int32_t var_24_3 = eax_14
        memset(eax_14, 0, 0x150)
        *(result + 0xd0) = eax_14
        int32_t var_8_4 = 0xffffffff
        eax_12[2] = result
        *(result + 0xb4) = arg2
        sub_4f3390(eax_14, 0x1839ff8)
        
        if (data_1839ffc != 0)
            sub_4f22d0(eax_14, 0x1839ff8)
            sub_4f0b20(eax_14, 0x1839ff8)
    else
        data_1938e68 += 1
    
label_4f4941:
    int32_t edx_8 = data_1779f88
    
    if (edx_8 s> 0)
        sub_4f3b60(
            *((edx_8 << 3) + &data_1777f84) * 0x54 + *(*((edx_8 << 3) + &data_1777f80) + 0xd0), 
            result)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    CookieCheckFunction(result)
    return result

int32_t var_44
char* ecx

if (arg1[0x681].b != 0 || arg1[0x541] == 5)
    memset(0x1839ff8, 0, 0xd18)
    
    if (arg1[0x681].b == 0)
        goto label_4f485e
    
    eax_5 = *esi_1
    
    if (eax_5 == data_cc8dd8)
        data_cc8dd8 = 0
        sub_58be50(arg1, &var_1c)
        int32_t* eax_6 = sub_4ede20(arg2, &var_1c)
        result = eax_6[2]
        
        if (result != 0)
            data_1938e68 += 1
            sub_4f37a0()
        else
            data_1938e6c += 1
            result = operator new(0xe4)
            uint32_t result_1 = result
            int32_t var_8_1 = 0
            memset(result, 0, 0xe4)
            *(result + 0xd8) = 4
            int32_t var_24_1 = 4
            int32_t var_40_3 = 0x150
            int32_t eax_8 = sub_7597a2()
            int32_t var_24_2 = eax_8
            memset(eax_8, 0, 0x150)
            *(result + 0xd0) = eax_8
            int32_t var_8_2 = 0xffffffff
            eax_6[2] = result
            *(result + 0xb4) = arg2
            *(result + 0xe0) = 1
            sub_4f37a0()
        
        goto label_4f4941
    
    char const* const var_40_5 = "ExpandTree"
    var_44 = 0x171b
    ecx = "DomGetContextDepth() == origContextDepth"
else
    char const* const var_40_1 = "ExpandTree"
    var_44 = 0x1711
    ecx = "g.simStyle == SIM_PUZZLE_SEARCH"

sub_63b870(eax_5, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", var_44, 
    "ExpandTree")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
