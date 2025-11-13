// 函数: sub_6c6da0
// 地址: 0x6c6da0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_77050d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_64 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14_1 = 0
int128_t var_58
__builtin_memset(&var_58, 0, 0x20)
uint32_t esi_1 = zx.d(GetKeyState(0x10)) u>> 0xf
uint32_t edi_1 = esi_1 | 2

if (GetKeyState(0x11) s>= 0)
    edi_1 = esi_1

uint32_t ecx_1 = edi_1 | 4

if (GetKeyState(0x12) s>= 0)
    ecx_1 = edi_1

var_58:8.d = ecx_1
RECT rect
GetClientRect(data_147b084, &rect)
int32_t right = rect.right
int32_t bottom

if (right != 0)
    bottom = rect.bottom

float xmm1_2
float xmm2_2

if (right == 0 || bottom == 0)
    xmm1_2 = 0f
    xmm2_2 = 0f
else
    void* eax_6 = data_cf65b8
    xmm1_2 = float.s(*(eax_6 + 0x14)) * float.s(arg4) / float.s(right)
    xmm2_2 = float.s(*(eax_6 + 0x18)) * float.s(arg5) / float.s(bottom)

uint32_t result = arg3 - 0x201
int128_t var_48
var_48.d = xmm1_2
var_48:4.d = xmm2_2

if (result u<= 0x46)
    result = zx.d(lookup_table_6c6fac[result])
    
    switch (result)
        case 0
            var_58.d = 3
            goto label_6c6eff
        case 1
            var_58.d = 4
        label_6c6eff:
            
            if (data_147abe8 != 0)
                result = sub_69e480(&var_58)
            
            int32_t var_14_2 = 1
            
            if (data_cf65bc != 0)
                result = var_48:8.d
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&var_48:8)
                    int32_t temp0_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp0_1 == 1)
                        result = sub_64c080(result, *(result + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            CookieCheckFunction(result)
            return result
        case 2
            var_58.d = 7
            goto label_6c6eff
        case 3
            var_58.d = 8
            goto label_6c6eff
        case 4
            var_58.d = 5
            goto label_6c6eff
        case 5
            var_58.d = 6
            goto label_6c6eff

sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Engine\Windows\WindowsApp.cpp", 0x19e, 
    "OnButtonMesage")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
