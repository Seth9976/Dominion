// 函数: sub_6a90e0
// 地址: 0x6a90e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = data_147b068
int32_t var_c_1
char const* const var_8
BOOL result
char* ecx

if (esi != 0)
    if (*esi == 3)
        sub_6a9050()
        noreturn
    
    result = ReleaseSemaphore(esi[4], 1, nullptr)
    
    if (result != 0)
        result = WaitForSingleObject(esi[3], 0xffffffff)
        
        if (result == 0)
            if (*esi != 3)
                return result
            
            sub_6a9050()
            noreturn
        
        var_8 = "mutex_lock"
        var_c_1 = 0x78
        ecx = "Halt"
    else
        var_8 = "mutex_release"
        var_c_1 = 0x83
        ecx = "Halt"
else
    var_8 = "xco_yield"
    var_c_1 = 0x115
    ecx = "g_current_coroutine"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\Coroutine.cpp", var_c_1, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
