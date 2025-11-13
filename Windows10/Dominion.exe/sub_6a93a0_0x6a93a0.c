// 函数: sub_6a93a0
// 地址: 0x6a93a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_4 = arg1
int32_t var_14
char const* const var_10
BOOL eax
char* ecx

if (data_147b068 == 0)
    int32_t* esi_1 = *arg1
    data_147b068 = esi_1
    eax = ReleaseSemaphore(esi_1[3], 1, nullptr)
    
    if (eax != 0)
        eax = WaitForSingleObject(esi_1[4], 0xffffffff)
        
        if (eax == 0)
            bool cond:1 = *esi_1 != 2
            data_147b068 = eax
            
            if (cond:1)
                eax.b = 1
                return eax
            
            sub_6a9250(esi_1)
            *arg1 = 0
            int32_t* eax_1
            eax_1.b = 0
            return eax_1
        
        var_10 = "mutex_lock"
        var_14 = 0x78
    else
        var_10 = "mutex_release"
        var_14 = 0x83
    
    ecx = "Halt"
else
    var_10 = "co_resume"
    var_14 = 0x188
    ecx = "g_current_coroutine == NULL"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\Coroutine.cpp", var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
