// 函数: sub_6b09d0
// 地址: 0x6b09d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$collate@_W@std@@QAE@ABV_Locinfo@1@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = *(arg3 + 4)
int32_t var_20 =
    (*(*eax_3 + 0x9c))(eax_3, __security_cookie ^ &var_4, var_14, ExceptionList, var_c, var_8)
int32_t var_24 = arg4
sub_63df30(&var_14, "Dx11 device lost: %x reason: %x")
int32_t var_8_1 = 0
char* eax_5 = sub_63d7e0(&var_14)
sub_63b870(eax_5, eax_5, "HaltMsg", "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 0x5d5, 
    "Dx11GraphicsInterface::HandleDeviceLost")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
