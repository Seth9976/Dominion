// 函数: sub_6a9320
// 地址: 0x6a9320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_63b5f0("co destroy")
int32_t* ecx = *arg1
int32_t var_c
char* ecx_1

if (ecx != 0)
    eax = data_147b068
    
    if (eax == 0 || eax == ecx)
        sub_6a9250(ecx)
        *arg1 = 0
        return sub_63b5f0("co destroy complete")
    
    char const* const var_8_1 = "co_destroy"
    var_c = 0x179
    ecx_1 = "g_current_coroutine == NULL || g_current_coroutine == handle"
else
    char const* const var_8 = "co_destroy"
    var_c = 0x178
    ecx_1 = "handle != NULL"

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\Coroutine.cpp", var_c, "co_destroy")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
